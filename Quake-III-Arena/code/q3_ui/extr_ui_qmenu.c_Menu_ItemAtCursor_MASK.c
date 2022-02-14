
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t cursor; size_t nitems; void** items; } ;
typedef TYPE_1__ menuframework_s ;



void *FUNC_0( menuframework_s *VAR_0 )
{
 if ( VAR_0->cursor < 0 || VAR_0->cursor >= VAR_0->nitems )
  return 0;

 return VAR_0->items[VAR_0->cursor];
}
