
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* bInterruptClaimed; int usDspIrq; } ;
struct TYPE_5__ {void* bDSPEnabled; TYPE_2__ rDspSettings; } ;
typedef TYPE_1__ THINKPAD_BD_DATA ;
typedef TYPE_2__ DSP_3780I_CONFIG_SETTINGS ;


 void* VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (void*) ;

int FUNC_4(THINKPAD_BD_DATA * VAR_2)
{
 int VAR_3 = 0;
 DSP_3780I_CONFIG_SETTINGS *VAR_4 = &VAR_2->rDspSettings;

 FUNC_0(VAR_1, "tp3780i::tp3780I_DisableDSP entry pBDData %p\n", VAR_2);

 if (VAR_2->bDSPEnabled) {
  FUNC_1(&VAR_2->rDspSettings);
  if (VAR_4->bInterruptClaimed) {
   FUNC_2(VAR_4->usDspIrq, ((void*)0));
   VAR_4->bInterruptClaimed = VAR_0;
  }
  FUNC_3(VAR_0);
  VAR_2->bDSPEnabled = VAR_0;
 }

 FUNC_0(VAR_1, "tp3780i::tp3780I_DisableDSP exit retval %x\n", VAR_3);

 return VAR_3;
}
