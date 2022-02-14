
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursor_prev; int cursor; scalar_t__* items; } ;
typedef TYPE_1__ menuframework_s ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ menucommon_s ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1( menuframework_s *VAR_2, int VAR_3 )
{
 if (((menucommon_s*)(VAR_2->items[VAR_3]))->flags & (VAR_0|VAR_1))
 {

  return;
 }

 VAR_2->cursor_prev = VAR_2->cursor;
 VAR_2->cursor = VAR_3;

 FUNC_0( VAR_2 );
}
