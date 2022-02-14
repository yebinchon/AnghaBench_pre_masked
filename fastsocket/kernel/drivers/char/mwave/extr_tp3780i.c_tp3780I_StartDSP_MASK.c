
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rDspSettings; } ;
typedef TYPE_1__ THINKPAD_BD_DATA ;
typedef int DSP_3780I_CONFIG_SETTINGS ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(THINKPAD_BD_DATA * VAR_2)
{
 int VAR_3 = 0;
 DSP_3780I_CONFIG_SETTINGS *VAR_4 = &VAR_2->rDspSettings;

 FUNC_0(VAR_1, "tp3780i::tp3780I_StartDSP entry pBDData %p\n", VAR_2);

 if (FUNC_1(VAR_4) == 0) {

 } else {
  VAR_3 = -VAR_0;
 }

 FUNC_0(VAR_1, "tp3780i::tp3780I_StartDSP exit retval %x\n", VAR_3);

 return VAR_3;
}
