
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5764_regs {int tnctrl; int testreg; } ;
struct tea5764_device {struct tea5764_regs regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tea5764_device*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct tea5764_device *VAR_6)
{
 struct tea5764_regs *VAR_7 = &VAR_6->regs;

 if (!(VAR_7->tnctrl & VAR_4)) {
  VAR_7->tnctrl &= ~(VAR_1 | VAR_3 |
          VAR_2);
  if (!VAR_5)
   VAR_7->testreg |= VAR_0;
  else
   VAR_7->testreg &= ~VAR_0;

  VAR_7->tnctrl |= VAR_4;
  FUNC_0(VAR_6);
 }
}
