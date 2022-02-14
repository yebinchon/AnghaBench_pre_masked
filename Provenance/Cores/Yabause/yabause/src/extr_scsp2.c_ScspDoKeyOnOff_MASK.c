
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ key; } ;
struct TYPE_4__ {TYPE_2__* slot; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
   int VAR_1;
   for (VAR_1 = 0; VAR_1 < 32; VAR_1++)
   {
      if (VAR_0.slot[VAR_1].key)
         FUNC_1(&VAR_0.slot[VAR_1]);
      else
         FUNC_0(&VAR_0.slot[VAR_1]);
   }
}
