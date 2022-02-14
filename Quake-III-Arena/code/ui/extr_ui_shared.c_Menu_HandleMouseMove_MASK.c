
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_12__ {int flags; } ;
struct TYPE_14__ {int itemCount; TYPE_4__** items; TYPE_1__ window; } ;
typedef TYPE_3__ menuDef_t ;
struct TYPE_13__ {int flags; int rect; } ;
struct TYPE_15__ {int cvarFlags; scalar_t__ type; TYPE_2__ window; scalar_t__ text; } ;
typedef TYPE_4__ itemDef_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,float,float) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,float,float) ;
 int FUNC_6 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,float,float) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

void FUNC_8(menuDef_t *VAR_12, float VAR_13, float VAR_14) {
  int VAR_15, VAR_16;
  qboolean VAR_17 = VAR_11;

  itemDef_t *VAR_18;
  if (VAR_12 == ((void*)0)) {
    return;
  }

  if (!(VAR_12->window.flags & (VAR_7 | VAR_5))) {
    return;
  }

 if (VAR_10) {

  return;
 }

 if (VAR_9 || VAR_8) {
  return;
 }



  for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
    for (VAR_15 = 0; VAR_15 < VAR_12->itemCount; VAR_15++) {



      if (!(VAR_12->items[VAR_15]->window.flags & (VAR_7 | VAR_5))) {
        continue;
      }


   if (VAR_12->items[VAR_15]->cvarFlags & (VAR_1 | VAR_0) && !FUNC_2(VAR_12->items[VAR_15], VAR_1)) {
    continue;
   }

   if (VAR_12->items[VAR_15]->cvarFlags & (VAR_3 | VAR_2) && !FUNC_2(VAR_12->items[VAR_15], VAR_3)) {
    continue;
   }



      if (FUNC_7(&VAR_12->items[VAR_15]->window.rect, VAR_13, VAR_14)) {
    if (VAR_16 == 1) {
     VAR_18 = VAR_12->items[VAR_15];
     if (VAR_18->type == VAR_4 && VAR_18->text) {
      if (!FUNC_7(FUNC_1(VAR_18), VAR_13, VAR_14)) {
       continue;
      }
     }

     if (FUNC_0(VAR_18->window.flags)) {

      FUNC_3(VAR_18, VAR_13, VAR_14);



      if (!VAR_17) {
       VAR_17 = FUNC_5(VAR_18, VAR_13, VAR_14);
      }
     }
    }
      } else if (VAR_12->items[VAR_15]->window.flags & VAR_6) {
          FUNC_4(VAR_12->items[VAR_15]);
          FUNC_6(VAR_12->items[VAR_15], VAR_11);
      }
    }
  }

}
