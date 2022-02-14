
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* List; int Val; } ;
typedef scalar_t__ MCPhysReg ;
typedef TYPE_1__ DiffListIterator ;



__attribute__((used)) static bool FUNC_0(DiffListIterator *VAR_0)
{
 MCPhysReg VAR_1;

 if (VAR_0->List == 0)
  return 0;

 VAR_1 = *VAR_0->List;
 VAR_0->List++;
 VAR_0->Val += VAR_1;

 if (!VAR_1)
  VAR_0->List = 0;

 return (VAR_1 != 0);
}
