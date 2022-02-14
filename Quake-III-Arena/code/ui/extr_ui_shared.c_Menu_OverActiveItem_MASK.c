
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_7__ {int flags; int rect; } ;
struct TYPE_9__ {int itemCount; TYPE_4__** items; TYPE_1__ window; } ;
typedef TYPE_3__ menuDef_t ;
struct TYPE_8__ {int flags; int rect; } ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ text; TYPE_2__ window; } ;
typedef TYPE_4__ itemDef_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int *,float,float) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static qboolean FUNC_2(menuDef_t *VAR_6, float VAR_7, float VAR_8) {
  if (VAR_6 && VAR_6->window.flags & (VAR_3 | VAR_2)) {
  if (FUNC_1(&VAR_6->window.rect, VAR_7, VAR_8)) {
   int VAR_9;
   for (VAR_9 = 0; VAR_9 < VAR_6->itemCount; VAR_9++) {



    if (!(VAR_6->items[VAR_9]->window.flags & (VAR_3 | VAR_2))) {
     continue;
    }

    if (VAR_6->items[VAR_9]->window.flags & VAR_1) {
     continue;
    }

    if (FUNC_1(&VAR_6->items[VAR_9]->window.rect, VAR_7, VAR_8)) {
     itemDef_t *VAR_10 = VAR_6->items[VAR_9];
     if (VAR_10->type == VAR_0 && VAR_10->text) {
      if (FUNC_1(FUNC_0(VAR_10), VAR_7, VAR_8)) {
       return VAR_5;
      } else {
       continue;
      }
     } else {
      return VAR_5;
     }
    }
   }

  }
 }
 return VAR_4;
}
