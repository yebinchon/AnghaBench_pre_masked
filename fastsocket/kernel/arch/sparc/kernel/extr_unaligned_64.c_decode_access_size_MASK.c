
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kregs; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static inline int FUNC_3(unsigned int VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = ((VAR_0 >> 19) & 0xf);
 if (VAR_1 == 11 || VAR_1 == 14)
  return 8;
 VAR_1 &= 3;
 if (!VAR_1)
  return 4;
 else if (VAR_1 == 3)
  return 16;
 else if (VAR_1 == 2)
  return 2;
 else {
  FUNC_2("Impossible unaligned trap. insn=%08x\n", VAR_0);
  FUNC_1("Byte sized unaligned access?!?!", FUNC_0()->kregs);







  return 0;
 }
}
