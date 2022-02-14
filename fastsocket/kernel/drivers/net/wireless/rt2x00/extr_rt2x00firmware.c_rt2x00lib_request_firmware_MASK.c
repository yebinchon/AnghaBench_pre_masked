
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rt2x00_dev {struct firmware const* fw; TYPE_3__* ops; TYPE_1__* hw; } ;
struct firmware {int size; int* data; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int fw_version; } ;
struct TYPE_7__ {TYPE_2__* lib; } ;
struct TYPE_6__ {char* (* get_firmware_name ) (struct rt2x00_dev*) ;int (* check_firmware ) (struct rt2x00_dev*,int*,int) ;} ;
struct TYPE_5__ {TYPE_4__* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const**,char*,struct device*) ;
 int FUNC_2 (struct rt2x00_dev*,char*,...) ;
 int FUNC_3 (struct rt2x00_dev*,char*,...) ;
 int FUNC_4 (int ,int,char*,int,int) ;
 char* FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*,int*,int) ;
 struct device* FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(struct rt2x00_dev *VAR_3)
{
 struct device *VAR_4 = FUNC_7(VAR_3->hw->wiphy);
 const struct firmware *VAR_5;
 char *VAR_6;
 int VAR_7;




 VAR_6 = VAR_3->ops->lib->get_firmware_name(VAR_3);
 if (!VAR_6) {
  FUNC_2(VAR_3,
      "Invalid firmware filename\n"
      "Please file bug report to %s\n", VAR_0);
  return -VAR_1;
 }

 FUNC_3(VAR_3, "Loading firmware file '%s'\n", VAR_6);

 VAR_7 = FUNC_1(&VAR_5, VAR_6, VAR_4);
 if (VAR_7) {
  FUNC_2(VAR_3, "Failed to request Firmware\n");
  return VAR_7;
 }

 if (!VAR_5 || !VAR_5->size || !VAR_5->data) {
  FUNC_2(VAR_3, "Failed to read Firmware\n");
  FUNC_0(VAR_5);
  return -VAR_2;
 }

 FUNC_3(VAR_3, "Firmware detected - version: %d.%d\n",
      VAR_5->data[VAR_5->size - 4], VAR_5->data[VAR_5->size - 3]);
 FUNC_4(VAR_3->hw->wiphy->fw_version,
   sizeof(VAR_3->hw->wiphy->fw_version), "%d.%d",
   VAR_5->data[VAR_5->size - 4], VAR_5->data[VAR_5->size - 3]);

 VAR_7 = VAR_3->ops->lib->check_firmware(VAR_3, VAR_5->data, VAR_5->size);
 switch (VAR_7) {
 case 128:
  break;
 case 131:
  FUNC_2(VAR_3, "Firmware checksum error\n");
  goto exit;
 case 130:
  FUNC_2(VAR_3, "Invalid firmware file length (len=%zu)\n",
      VAR_5->size);
  goto exit;
 case 129:
  FUNC_2(VAR_3, "Current firmware does not support detected chipset\n");
  goto exit;
 }

 VAR_3->fw = VAR_5;

 return 0;

exit:
 FUNC_0(VAR_5);

 return -VAR_2;
}
