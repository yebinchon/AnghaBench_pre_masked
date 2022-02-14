
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int itemCount; TYPE_3__** items; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_7__ {int flags; } ;
struct TYPE_9__ {scalar_t__ leaveFocus; TYPE_1__ window; } ;
typedef TYPE_3__ itemDef_t ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int VAR_0 ;

itemDef_t *FUNC_1(menuDef_t *VAR_1) {
  int VAR_2;
  itemDef_t *VAR_3 = ((void*)0);

  if (VAR_1 == ((void*)0)) {
    return ((void*)0);
  }

  for (VAR_2 = 0; VAR_2 < VAR_1->itemCount; VAR_2++) {
    if (VAR_1->items[VAR_2]->window.flags & VAR_0) {
      VAR_3 = VAR_1->items[VAR_2];
    }
    VAR_1->items[VAR_2]->window.flags &= ~VAR_0;
    if (VAR_1->items[VAR_2]->leaveFocus) {
      FUNC_0(VAR_1->items[VAR_2], VAR_1->items[VAR_2]->leaveFocus);
    }
  }

  return VAR_3;
}
