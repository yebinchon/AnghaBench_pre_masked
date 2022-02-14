
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int itemCount; TYPE_1__** items; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_10__ {scalar_t__ startPos; scalar_t__ cursorPos; } ;
typedef TYPE_3__ listBoxDef_t ;
struct TYPE_11__ {int (* feederSelection ) (int,int) ;} ;
struct TYPE_8__ {int special; int cursorPos; scalar_t__ typeData; } ;


 TYPE_7__* VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_2__* FUNC_1 (char const*) ;
 int FUNC_2 (int,int) ;

void FUNC_3(menuDef_t *VAR_1, int VAR_2, int VAR_3, const char *VAR_4) {
 if (VAR_1 == ((void*)0)) {
  if (VAR_4 == ((void*)0)) {
   VAR_1 = FUNC_0();
  } else {
   VAR_1 = FUNC_1(VAR_4);
  }
 }

 if (VAR_1) {
  int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_1->itemCount; VAR_5++) {
   if (VAR_1->items[VAR_5]->special == VAR_2) {
    if (VAR_3 == 0) {
     listBoxDef_t *VAR_6 = (listBoxDef_t*)VAR_1->items[VAR_5]->typeData;
     VAR_6->cursorPos = 0;
     VAR_6->startPos = 0;
    }
    VAR_1->items[VAR_5]->cursorPos = VAR_3;
    VAR_0->feederSelection(VAR_1->items[VAR_5]->special, VAR_1->items[VAR_5]->cursorPos);
    return;
   }
  }
 }
}
