
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_fpu_soft_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct sh_fpu_soft_struct *VAR_5, struct pt_regs *VAR_6, int VAR_7,
      int VAR_8)
{
 if (VAR_2) {
  FUNC_0(VAR_7);
  FUNC_0(VAR_8);
  VAR_1 = VAR_0;
 } else {
  VAR_4 = VAR_3;
 }

 return 0;
}
