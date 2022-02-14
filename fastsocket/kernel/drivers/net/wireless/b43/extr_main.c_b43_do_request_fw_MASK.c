
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct b43_request_fw_context {int req_type; char* fwname; TYPE_3__* blob; int * errors; TYPE_2__* dev; int fw_load_complete; } ;
struct b43_fw_header {int type; int ver; int size; } ;
struct b43_firmware_file {char const* filename; int type; TYPE_3__* data; } ;
struct TYPE_7__ {int size; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {int dev; } ;







 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct b43_firmware_file*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 char* VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__**,char*,int ) ;
 int FUNC_7 (int ,int,char*,int ,int ,struct b43_request_fw_context*,int ) ;
 int FUNC_8 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct b43_request_fw_context *VAR_7,
        const char *VAR_8,
        struct b43_firmware_file *VAR_9, bool VAR_10)
{
 struct b43_fw_header *VAR_11;
 u32 VAR_12;
 int VAR_13;

 if (!VAR_8) {



  FUNC_1(VAR_9);
  return 0;
 }
 if (VAR_9->filename) {
  if ((VAR_9->type == VAR_7->req_type) &&
      (FUNC_9(VAR_9->filename, VAR_8) == 0))
   return 0;





  FUNC_1(VAR_9);
 }

 switch (VAR_7->req_type) {
 case 131:
  FUNC_8(VAR_7->fwname, sizeof(VAR_7->fwname),
    "b43%s/%s.fw",
    VAR_6, VAR_8);
  break;
 case 132:
  FUNC_8(VAR_7->fwname, sizeof(VAR_7->fwname),
    "b43-open%s/%s.fw",
    VAR_6, VAR_8);
  break;
 default:
  FUNC_0(1);
  return -VAR_1;
 }
 if (VAR_10) {

  FUNC_3(&VAR_7->fw_load_complete);
  VAR_13 = FUNC_7(VAR_4, 1, VAR_7->fwname,
           VAR_7->dev->dev->dev, VAR_3,
           VAR_7, VAR_5);
  if (VAR_13 < 0) {
   FUNC_4("Unable to load firmware\n");
   return VAR_13;
  }

  FUNC_10(&VAR_7->fw_load_complete);
  if (VAR_7->blob)
   goto fw_ready;



 }
 VAR_13 = FUNC_6(&VAR_7->blob, VAR_7->fwname,
          VAR_7->dev->dev->dev);
 if (VAR_13 == -VAR_0) {
  FUNC_8(VAR_7->errors[VAR_7->req_type],
    sizeof(VAR_7->errors[VAR_7->req_type]),
    "Firmware file \"%s\" not found\n",
    VAR_7->fwname);
  return VAR_13;
 } else if (VAR_13) {
  FUNC_8(VAR_7->errors[VAR_7->req_type],
    sizeof(VAR_7->errors[VAR_7->req_type]),
    "Firmware file \"%s\" request failed (err=%d)\n",
    VAR_7->fwname, VAR_13);
  return VAR_13;
 }
fw_ready:
 if (VAR_7->blob->size < sizeof(struct b43_fw_header))
  goto err_format;
 VAR_11 = (struct b43_fw_header *)(VAR_7->blob->data);
 switch (VAR_11->type) {
 case 128:
 case 129:
  VAR_12 = FUNC_2(VAR_11->size);
  if (VAR_12 != VAR_7->blob->size - sizeof(struct b43_fw_header))
   goto err_format;

 case 130:
  if (VAR_11->ver != 1)
   goto err_format;
  break;
 default:
  goto err_format;
 }

 VAR_9->data = VAR_7->blob;
 VAR_9->filename = VAR_8;
 VAR_9->type = VAR_7->req_type;

 return 0;

err_format:
 FUNC_8(VAR_7->errors[VAR_7->req_type],
   sizeof(VAR_7->errors[VAR_7->req_type]),
   "Firmware file \"%s\" format error.\n", VAR_7->fwname);
 FUNC_5(VAR_7->blob);

 return -VAR_2;
}
