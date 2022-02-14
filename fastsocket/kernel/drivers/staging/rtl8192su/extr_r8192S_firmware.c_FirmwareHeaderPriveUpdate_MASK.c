
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct r8192_priv {int EEPROMUsbEndPointNumber; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int rf_config; int usb_ep_num; } ;
typedef TYPE_1__* PRT_8192S_FIRMWARE_PRIV ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,int ) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_1, PRT_8192S_FIRMWARE_PRIV VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_2(VAR_1);

 VAR_2->usb_ep_num = VAR_3->EEPROMUsbEndPointNumber;
 FUNC_1(VAR_0, "FirmwarePriveUpdate(): usb_ep_num(%#x)\n", VAR_2->usb_ep_num);


 VAR_2->rf_config = FUNC_0(VAR_1);
}
