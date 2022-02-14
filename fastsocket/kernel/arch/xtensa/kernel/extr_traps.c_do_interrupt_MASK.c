
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct pt_regs*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

void FUNC_3 (struct pt_regs *VAR_4)
{
 unsigned long VAR_5 = FUNC_1 (VAR_2);
 unsigned long VAR_6 = FUNC_1 (VAR_1);
 int VAR_7, VAR_8;






 for (VAR_7=0, VAR_8 = 1; VAR_7 < VAR_3; VAR_7++, VAR_8 <<= 1) {
  if (VAR_8 & (VAR_5 & VAR_6)) {
   FUNC_2 (VAR_8, VAR_0);
   FUNC_0 (VAR_7,VAR_4);
  }
 }
}
