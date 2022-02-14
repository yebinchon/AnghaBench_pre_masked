
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cursor_prev; int nitems; scalar_t__* items; scalar_t__ cursor; } ;
typedef TYPE_1__ menuframework_s ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ menucommon_s ;
struct TYPE_8__ {int menusp; void* firstdraw; TYPE_1__* activemenu; TYPE_1__** stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_7 ;

void FUNC_3( menuframework_s *VAR_8 )
{
 int VAR_9;
 menucommon_s* VAR_10;


 for (VAR_9=0 ; VAR_9<VAR_7.menusp ; VAR_9++)
 {
  if (VAR_7.stack[VAR_9] == VAR_8)
  {
   VAR_7.menusp = VAR_9;
   break;
  }
 }

 if (VAR_9 == VAR_7.menusp)
 {
  if (VAR_7.menusp >= VAR_1)
   FUNC_1("UI_PushMenu: menu stack overflow");

  VAR_7.stack[VAR_7.menusp++] = VAR_8;
 }

 VAR_7.activemenu = VAR_8;


 VAR_8->cursor = 0;
 VAR_8->cursor_prev = 0;

 VAR_5 = VAR_6;

 FUNC_2( VAR_0 );


 for (VAR_9=0; VAR_9<VAR_8->nitems; VAR_9++)
 {
  VAR_10 = (menucommon_s *)VAR_8->items[VAR_9];
  if (!(VAR_10->flags & (VAR_2|VAR_4|VAR_3)))
  {
   VAR_8->cursor_prev = -1;
   FUNC_0( VAR_8, VAR_9 );
   break;
  }
 }

 VAR_7.firstdraw = VAR_6;
}
