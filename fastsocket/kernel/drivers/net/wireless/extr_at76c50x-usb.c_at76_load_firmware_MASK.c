
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dev; } ;
struct TYPE_3__ {int build; int patch; int minor; int major; } ;
struct fwentry {int loaded; char* fwname; int board_type; int intfw_size; int extfw_size; int * extfw; int * intfw; TYPE_1__ fw_version; TYPE_2__* fw; } ;
struct at76_fw_header {int ext_fw_len; int ext_fw_offset; int int_fw_len; int int_fw_offset; int build; int patch; int minor; int major; int str_offset; int board_type; } ;
typedef enum board_type { ____Placeholder_board_type } board_type ;
struct TYPE_4__ {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int *,char*,...) ;
 struct fwentry* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__**,char*,int *) ;

__attribute__((used)) static struct fwentry *FUNC_6(struct usb_device *VAR_6,
       enum board_type VAR_7)
{
 int VAR_8;
 char *VAR_9;
 struct at76_fw_header *VAR_10;
 struct fwentry *VAR_11 = &VAR_4[VAR_7];

 FUNC_3(&VAR_5);

 if (VAR_11->loaded) {
  FUNC_0(VAR_1, "re-using previously loaded fw");
  goto exit;
 }

 FUNC_0(VAR_1, "downloading firmware %s", VAR_11->fwname);
 VAR_8 = FUNC_5(&VAR_11->fw, VAR_11->fwname, &VAR_6->dev);
 if (VAR_8 < 0) {
  FUNC_1(VAR_3, &VAR_6->dev, "firmware %s not found!\n",
      VAR_11->fwname);
  FUNC_1(VAR_3, &VAR_6->dev,
      "you may need to download the firmware from "
      "http://developer.berlios.de/projects/at76c503a/\n");
  goto exit;
 }

 FUNC_0(VAR_1, "got it.");
 VAR_10 = (struct at76_fw_header *)(VAR_11->fw->data);

 if (VAR_11->fw->size <= sizeof(*VAR_10)) {
  FUNC_1(VAR_3, &VAR_6->dev,
      "firmware is too short (0x%zx)\n", VAR_11->fw->size);
  goto exit;
 }


 VAR_11->board_type = FUNC_2(VAR_10->board_type);
 if (VAR_11->board_type != VAR_7) {
  FUNC_1(VAR_3, &VAR_6->dev,
      "board type mismatch, requested %u, got %u\n",
      VAR_7, VAR_11->board_type);
  goto exit;
 }

 VAR_11->fw_version.major = VAR_10->major;
 VAR_11->fw_version.minor = VAR_10->minor;
 VAR_11->fw_version.patch = VAR_10->patch;
 VAR_11->fw_version.build = VAR_10->build;

 VAR_9 = (char *)VAR_10 + FUNC_2(VAR_10->str_offset);
 VAR_11->intfw = (u8 *)VAR_10 + FUNC_2(VAR_10->int_fw_offset);
 VAR_11->intfw_size = FUNC_2(VAR_10->int_fw_len);
 VAR_11->extfw = (u8 *)VAR_10 + FUNC_2(VAR_10->ext_fw_offset);
 VAR_11->extfw_size = FUNC_2(VAR_10->ext_fw_len);

 VAR_11->loaded = 1;

 FUNC_1(VAR_2, &VAR_6->dev,
     "using firmware %s (version %d.%d.%d-%d)\n",
     VAR_11->fwname, VAR_10->major, VAR_10->minor, VAR_10->patch, VAR_10->build);

 FUNC_0(VAR_0, "board %u, int %d:%d, ext %d:%d", VAR_7,
   FUNC_2(VAR_10->int_fw_offset), FUNC_2(VAR_10->int_fw_len),
   FUNC_2(VAR_10->ext_fw_offset), FUNC_2(VAR_10->ext_fw_len));
 FUNC_0(VAR_0, "firmware id %s", VAR_9);

exit:
 FUNC_4(&VAR_5);

 if (VAR_11->loaded)
  return VAR_11;
 else
  return ((void*)0);
}
