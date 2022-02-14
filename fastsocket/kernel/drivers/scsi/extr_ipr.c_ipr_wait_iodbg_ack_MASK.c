
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sense_interrupt_reg; } ;
struct ipr_ioa_cfg {TYPE_1__ regs; } ;


 int VAR_0 ;
 int volatile VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ipr_ioa_cfg *VAR_3, int VAR_4)
{
 volatile u32 VAR_5;
 int VAR_6 = 1;


 while (VAR_6 < VAR_4) {
  VAR_5 = FUNC_1(VAR_3->regs.sense_interrupt_reg);

  if (VAR_5 & VAR_1)
   return 0;


  if ((VAR_6 / 1000) > VAR_2)
   FUNC_0(VAR_6 / 1000);
  else
   FUNC_2(VAR_6);

  VAR_6 += VAR_6;
 }
 return -VAR_0;
}
