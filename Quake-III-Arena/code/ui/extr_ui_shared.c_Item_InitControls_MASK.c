
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cursorPos; scalar_t__ endPos; scalar_t__ startPos; } ;
typedef TYPE_1__ listBoxDef_t ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ cursorPos; scalar_t__ typeData; } ;
typedef TYPE_2__ itemDef_t ;


 scalar_t__ VAR_0 ;

void FUNC_0(itemDef_t *VAR_1) {
 if (VAR_1 == ((void*)0)) {
  return;
 }
 if (VAR_1->type == VAR_0) {
  listBoxDef_t *VAR_2 = (listBoxDef_t*)VAR_1->typeData;
  VAR_1->cursorPos = 0;
  if (VAR_2) {
   VAR_2->cursorPos = 0;
   VAR_2->startPos = 0;
   VAR_2->endPos = 0;
   VAR_2->cursorPos = 0;
  }
 }
}
