
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct device {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int EINTR ;
 scalar_t__ POST_STAGE_ARMFW_RDY ;
 scalar_t__ be_POST_stage_get (struct be_adapter*) ;
 int dev_err (struct device*,char*,...) ;
 int dev_info (struct device*,char*,int) ;
 scalar_t__ lancer_chip (struct be_adapter*) ;
 int lancer_wait_ready (struct be_adapter*) ;
 scalar_t__ msleep_interruptible (int) ;

int be_fw_wait_ready(struct be_adapter *adapter)
{
 u16 stage;
 int status, timeout = 0;
 struct device *dev = &adapter->pdev->dev;

 if (lancer_chip(adapter)) {
  status = lancer_wait_ready(adapter);
  return status;
 }

 do {
  stage = be_POST_stage_get(adapter);
  if (stage == POST_STAGE_ARMFW_RDY)
   return 0;

  dev_info(dev, "Waiting for POST, %ds elapsed\n",
    timeout);
  if (msleep_interruptible(2000)) {
   dev_err(dev, "Waiting for POST aborted\n");
   return -EINTR;
  }
  timeout += 2;
 } while (timeout < 60);

 dev_err(dev, "POST timeout; stage=0x%x\n", stage);
 return -1;
}
