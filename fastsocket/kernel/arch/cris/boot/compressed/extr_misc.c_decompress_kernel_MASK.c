
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* ser3; void* ser2; void* ser1; int sser_ser_dma6_7; } ;
typedef TYPE_1__ reg_pinmux_rw_hwprot ;
typedef TYPE_1__ reg_clkgen_rw_clk_ctrl ;


 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 scalar_t__* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 scalar_t__* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 scalar_t__* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 scalar_t__* VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 () ;
 int VAR_16 ;
 int FUNC_4 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 char VAR_27;
 char VAR_28;
 VAR_28 = 10;


 VAR_14 = VAR_15;
 FUNC_6();

 FUNC_3();

 __asm__ volatile ("move $vr,%0" : "=rm" (VAR_27));
 if (VAR_27 < VAR_28) {



  FUNC_4("You need an ETRAX 100LX to run linux 2.6\n");

  while(1);
 }

 FUNC_4("Uncompressing Linux...\n");
 FUNC_2();
 FUNC_4("Done. Now booting the kernel\n");
}
