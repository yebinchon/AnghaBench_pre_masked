
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int tstate; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_1, struct pt_regs *VAR_2)
{
 if (VAR_1 & 0x800000) {
  if (VAR_1 & 0x2000)
   return (unsigned char)(VAR_2->tstate >> 24);
  else
   return (unsigned char)(VAR_1 >> 5);
 } else
  return VAR_0;
}
