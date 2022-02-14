
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * addr; int * opcode; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, int VAR_2)
{
 if (VAR_1 < (u8 *) 0x70000000UL)
  return 0;

 if (VAR_1 < (u8 *) 0x80000000UL)
  goto okay;
 if (VAR_1 < (u8 *) 0x8c000000UL)
  return 0;

 if (VAR_1 < (u8 *) 0x94000000UL)
  goto okay;
 return 0;

okay:
 if (FUNC_0(VAR_1 + 0, &VAR_0[VAR_2].opcode[0]) < 0 ||
     FUNC_0(VAR_1 + 1, &VAR_0[VAR_2].opcode[1]) < 0)
  return 0;

 VAR_0[VAR_2].addr = VAR_1;
 return 1;
}
