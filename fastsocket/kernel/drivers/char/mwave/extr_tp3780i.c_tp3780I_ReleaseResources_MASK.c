
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int usDspBaseIO; scalar_t__ bInterruptClaimed; int usDspIrq; } ;
struct TYPE_4__ {TYPE_2__ rDspSettings; } ;
typedef TYPE_1__ THINKPAD_BD_DATA ;
typedef TYPE_2__ DSP_3780I_CONFIG_SETTINGS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int) ;

int FUNC_3(THINKPAD_BD_DATA * VAR_2)
{
 int VAR_3 = 0;
 DSP_3780I_CONFIG_SETTINGS *VAR_4 = &VAR_2->rDspSettings;

 FUNC_0(VAR_1,
  "tp3780i::tp3780I_ReleaseResources entry pBDData %p\n", VAR_2);

 FUNC_2(VAR_4->usDspBaseIO & (~3), 16);

 if (VAR_4->bInterruptClaimed) {
  FUNC_1(VAR_4->usDspIrq, ((void*)0));
  VAR_4->bInterruptClaimed = VAR_0;
 }

 FUNC_0(VAR_1,
  "tp3780i::tp3780I_ReleaseResources exit retval %x\n", VAR_3);

 return VAR_3;
}
