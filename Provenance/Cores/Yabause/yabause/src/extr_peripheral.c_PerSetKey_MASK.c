
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {void* controller; int key; TYPE_1__* base; } ;
struct TYPE_3__ {scalar_t__ name; } ;


 TYPE_2__* VAR_0 ;
 unsigned int VAR_1 ;

void FUNC_0(u32 VAR_2, u8 VAR_3, void * VAR_4)
{
 unsigned int VAR_5 = 0;

 while(VAR_5 < VAR_1)
 {
  if ((VAR_3 == VAR_0[VAR_5].base->name) && (VAR_4 == VAR_0[VAR_5].controller))
  {
   VAR_0[VAR_5].key = VAR_2;
  }
  VAR_5++;
 }
}
