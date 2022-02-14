
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* opcode; int * addr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline void FUNC_1(void)
{
 if (VAR_1[0].addr)
  FUNC_0(VAR_1[0].opcode[0], VAR_1[0].addr + 0);
 if (VAR_1[1].addr)
  FUNC_0(VAR_1[1].opcode[0], VAR_1[1].addr + 0);


 VAR_0 = 1;

 VAR_1[0].addr = ((void*)0);
 VAR_1[0].opcode[0] = 0;
 VAR_1[0].opcode[1] = 0;
 VAR_1[1].addr = ((void*)0);
 VAR_1[1].opcode[0] = 0;
 VAR_1[1].opcode[1] = 0;
}
