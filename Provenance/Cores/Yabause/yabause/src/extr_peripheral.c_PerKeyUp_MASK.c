
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ key; int controller; TYPE_1__* base; } ;
struct TYPE_3__ {int (* Release ) (int ) ;} ;


 TYPE_2__* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1(u32 VAR_2)
{
 unsigned int VAR_3 = 0;

 while(VAR_3 < VAR_1)
 {
  if (VAR_2 == VAR_0[VAR_3].key)
  {
   VAR_0[VAR_3].base->Release(VAR_0[VAR_3].controller);
  }
  VAR_3++;
 }
}
