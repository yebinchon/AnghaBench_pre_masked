
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {size_t itemCount; TYPE_2__** items; } ;
typedef TYPE_1__ menuDef_t ;
typedef int itemDef_t ;
struct TYPE_7__ {TYPE_1__* parent; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,TYPE_2__*) ;
 size_t VAR_0 ;
 TYPE_2__* FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_4( itemDef_t *VAR_3, int VAR_4 ) {
 menuDef_t *VAR_5 = (menuDef_t*)VAR_3;
 if (VAR_5->itemCount < VAR_0) {
  VAR_5->items[VAR_5->itemCount] = FUNC_3(sizeof(itemDef_t));
  FUNC_0(VAR_5->items[VAR_5->itemCount]);
  if (!FUNC_2(VAR_4, VAR_5->items[VAR_5->itemCount])) {
   return VAR_1;
  }
  FUNC_1(VAR_5->items[VAR_5->itemCount]);
  VAR_5->items[VAR_5->itemCount++]->parent = VAR_5;
 }
 return VAR_2;
}
