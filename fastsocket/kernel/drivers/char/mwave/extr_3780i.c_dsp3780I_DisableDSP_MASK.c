
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned short usDspBaseIO; } ;
struct TYPE_5__ {int ClockControl; scalar_t__ Reserved; int ConfigMode; int SoftReset; } ;
typedef TYPE_1__ DSP_ISA_SLAVE_CONTROL ;
typedef TYPE_2__ DSP_3780I_CONFIG_SETTINGS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

int FUNC_6(DSP_3780I_CONFIG_SETTINGS * VAR_5)
{
 unsigned long VAR_6;
 unsigned short VAR_7 = VAR_5->usDspBaseIO;
 DSP_ISA_SLAVE_CONTROL VAR_8;


 FUNC_2(VAR_2, "3780i::dsp3780i_DisableDSP entry\n");

 VAR_8.ClockControl = 0;
 VAR_8.SoftReset = VAR_3;
 VAR_8.ConfigMode = VAR_1;
 VAR_8.Reserved = 0;
 FUNC_3(&VAR_4, VAR_6);
 FUNC_1(VAR_0, FUNC_0(VAR_8));

 FUNC_5(5);

 VAR_8.ClockControl = 1;
 FUNC_1(VAR_0, FUNC_0(VAR_8));
 FUNC_4(&VAR_4, VAR_6);

 FUNC_5(5);


 FUNC_2(VAR_2, "3780i::dsp3780i_DisableDSP exit\n");

 return 0;
}
