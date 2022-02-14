
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {int itemCount; TYPE_3__** items; } ;
typedef TYPE_1__ menuDef_t ;
struct TYPE_5__ {int special; } ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(menuDef_t *VAR_3, int VAR_4, qboolean VAR_5) {
 if (VAR_3) {
  int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3->itemCount; VAR_6++) {
   if (VAR_3->items[VAR_6]->special == VAR_4) {
    FUNC_0(VAR_3->items[VAR_6], (VAR_5) ? VAR_0 : VAR_1, VAR_2, VAR_2);
    return;
   }
  }
 }
}
