
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct firmware {int dummy; } ;
struct be_adapter {int fw_on_flash; int fw_ver; TYPE_1__* pdev; int netdev; } ;
struct TYPE_2__ {int dev; } ;


 int be_cmd_get_fw_ver (struct be_adapter*,int ,int ) ;
 int be_fw_download (struct be_adapter*,struct firmware const*) ;
 int dev_err (int *,char*) ;
 int dev_info (int *,char*,int *) ;
 scalar_t__ lancer_chip (struct be_adapter*) ;
 int lancer_fw_download (struct be_adapter*,struct firmware const*) ;
 int netif_running (int ) ;
 int release_firmware (struct firmware const*) ;
 int request_firmware (struct firmware const**,int *,int *) ;

int be_load_fw(struct be_adapter *adapter, u8 *fw_file)
{
 const struct firmware *fw;
 int status;

 if (!netif_running(adapter->netdev)) {
  dev_err(&adapter->pdev->dev,
   "Firmware load not allowed (interface is down)\n");
  return -1;
 }

 status = request_firmware(&fw, fw_file, &adapter->pdev->dev);
 if (status)
  goto fw_exit;

 dev_info(&adapter->pdev->dev, "Flashing firmware file %s\n", fw_file);

 if (lancer_chip(adapter))
  status = lancer_fw_download(adapter, fw);
 else
  status = be_fw_download(adapter, fw);

 if (!status)
  be_cmd_get_fw_ver(adapter, adapter->fw_ver,
      adapter->fw_on_flash);

fw_exit:
 release_firmware(fw);
 return status;
}
