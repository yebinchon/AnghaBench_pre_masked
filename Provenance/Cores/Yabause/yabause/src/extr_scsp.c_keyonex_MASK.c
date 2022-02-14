
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsp {TYPE_2__* slots; } ;
struct TYPE_4__ {scalar_t__ kb; } ;
struct TYPE_5__ {TYPE_1__ regs; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct Scsp *VAR_0)
{
   int VAR_1;
   for (VAR_1 = 0; VAR_1 < 32; VAR_1++)
   {
      if (VAR_0->slots[VAR_1].regs.kb)
         FUNC_1(&VAR_0->slots[VAR_1]);
      else
         FUNC_0(&VAR_0->slots[VAR_1]);
   }
}
