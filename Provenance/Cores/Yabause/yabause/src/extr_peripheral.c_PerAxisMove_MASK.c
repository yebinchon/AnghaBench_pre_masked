
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int s32 ;
struct TYPE_4__ {scalar_t__ key; int controller; TYPE_1__* base; } ;
struct TYPE_3__ {int (* MoveAxis ) (int ,int ,int ) ;} ;


 TYPE_2__* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(u32 VAR_2, s32 VAR_3, s32 VAR_4)
{
   unsigned int VAR_5 = 0;

   while(VAR_5 < VAR_1)
   {
      if (VAR_2 == VAR_0[VAR_5].key)
      {
         if (VAR_0[VAR_5].base->MoveAxis)
            VAR_0[VAR_5].base->MoveAxis(VAR_0[VAR_5].controller, VAR_3, VAR_4);
      }
      VAR_5++;
   }
}
