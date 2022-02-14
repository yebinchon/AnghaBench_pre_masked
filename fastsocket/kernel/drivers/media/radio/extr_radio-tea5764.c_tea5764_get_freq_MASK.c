
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5764_regs {int tnctrl; int frqchk; } ;
struct tea5764_device {struct tea5764_regs regs; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tea5764_device *VAR_1)
{
 struct tea5764_regs *VAR_2 = &VAR_1->regs;

 if (VAR_2->tnctrl & VAR_0)
  return (VAR_2->frqchk * 8192) - 225000;
 else
  return (VAR_2->frqchk * 8192) + 225000;
}
