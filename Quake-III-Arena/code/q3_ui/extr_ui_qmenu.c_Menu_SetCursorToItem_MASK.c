
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nitems; void** items; } ;
typedef TYPE_1__ menuframework_s ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1( menuframework_s *VAR_0, void* VAR_1 )
{
 int VAR_2;

 for (VAR_2=0; VAR_2<VAR_0->nitems; VAR_2++)
 {
  if (VAR_0->items[VAR_2] == VAR_1)
  {
   FUNC_0( VAR_0, VAR_2 );
   return;
  }
 }
}
