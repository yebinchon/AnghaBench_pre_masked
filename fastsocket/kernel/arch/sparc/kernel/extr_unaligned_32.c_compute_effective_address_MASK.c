
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long FUNC_0 (unsigned int,struct pt_regs*) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 unsigned long FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned long FUNC_3(struct pt_regs *VAR_0,
            unsigned int VAR_1)
{
 unsigned int VAR_2 = (VAR_1 >> 14) & 0x1f;
 unsigned int VAR_3 = VAR_1 & 0x1f;
 unsigned int VAR_4 = (VAR_1 >> 25) & 0x1f;

 if(VAR_1 & 0x2000) {
  FUNC_1(VAR_2, 0, VAR_4);
  return (FUNC_0(VAR_2, VAR_0) + FUNC_2(VAR_1));
 } else {
  FUNC_1(VAR_2, VAR_3, VAR_4);
  return (FUNC_0(VAR_2, VAR_0) + FUNC_0(VAR_3, VAR_0));
 }
}
