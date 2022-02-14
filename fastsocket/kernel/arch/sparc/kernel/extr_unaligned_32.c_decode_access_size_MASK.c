
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kregs; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(unsigned int VAR_1)
{
 VAR_1 = (VAR_1 >> 19) & 3;

 if(!VAR_1)
  return 4;
 else if(VAR_1 == 3)
  return 8;
 else if(VAR_1 == 2)
  return 2;
 else {
  FUNC_1("Impossible unaligned trap. insn=%08x\n", VAR_1);
  FUNC_0("Byte sized unaligned access?!?!", VAR_0->thread.kregs);
  return 4;
 }
}
