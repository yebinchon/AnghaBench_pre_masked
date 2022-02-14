
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_6__ {int nitems; int cursor; size_t cursor_prev; scalar_t__* items; } ;
struct TYPE_5__ {scalar_t__ cursorx; scalar_t__ cursory; TYPE_3__* activemenu; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_8 ;

void FUNC_2( int VAR_9, int VAR_10 )
{
 int VAR_11;
 menucommon_s* VAR_12;

 if (!VAR_8.activemenu)
  return;


 VAR_8.cursorx += VAR_9;
 if (VAR_8.cursorx < 0)
  VAR_8.cursorx = 0;
 else if (VAR_8.cursorx > VAR_6)
  VAR_8.cursorx = VAR_6;

 VAR_8.cursory += VAR_10;
 if (VAR_8.cursory < 0)
  VAR_8.cursory = 0;
 else if (VAR_8.cursory > VAR_5)
  VAR_8.cursory = VAR_5;


 for (VAR_11=0; VAR_11<VAR_8.activemenu->nitems; VAR_11++)
 {
  VAR_12 = (menucommon_s*)VAR_8.activemenu->items[VAR_11];

  if (VAR_12->flags & (VAR_1|VAR_3))
   continue;

  if ((VAR_8.cursorx < VAR_12->left) ||
   (VAR_8.cursorx > VAR_12->right) ||
   (VAR_8.cursory < VAR_12->top) ||
   (VAR_8.cursory > VAR_12->bottom))
  {

   continue;
  }


  if (VAR_8.activemenu->cursor != VAR_11)
  {
   FUNC_0( VAR_8.activemenu, VAR_11 );
   ((menucommon_s*)(VAR_8.activemenu->items[VAR_8.activemenu->cursor_prev]))->flags &= ~VAR_2;

   if ( !(((menucommon_s*)(VAR_8.activemenu->items[VAR_8.activemenu->cursor]))->flags & VAR_4 ) ) {
    FUNC_1( VAR_7, VAR_0 );
   }
  }

  ((menucommon_s*)(VAR_8.activemenu->items[VAR_8.activemenu->cursor]))->flags |= VAR_2;
  return;
 }

 if (VAR_8.activemenu->nitems > 0) {

  ((menucommon_s*)(VAR_8.activemenu->items[VAR_8.activemenu->cursor]))->flags &= ~VAR_2;
 }
}
