
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int multiDef_t ;
typedef int modelDef_t ;
typedef int listBoxDef_t ;
struct TYPE_4__ {scalar_t__ type; void* typeData; } ;
typedef TYPE_1__ itemDef_t ;
struct TYPE_5__ {scalar_t__ maxPaintChars; } ;
typedef TYPE_2__ editFieldDef_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;

void FUNC_2(itemDef_t *VAR_10) {
 if (VAR_10->typeData) {
  return;
 }

 if (VAR_10->type == VAR_2) {
  VAR_10->typeData = FUNC_0(sizeof(listBoxDef_t));
  FUNC_1(VAR_10->typeData, 0, sizeof(listBoxDef_t));
 } else if (VAR_10->type == VAR_1 || VAR_10->type == VAR_5 || VAR_10->type == VAR_8 || VAR_10->type == VAR_0 || VAR_10->type == VAR_6 || VAR_10->type == VAR_7) {
  VAR_10->typeData = FUNC_0(sizeof(editFieldDef_t));
  FUNC_1(VAR_10->typeData, 0, sizeof(editFieldDef_t));
  if (VAR_10->type == VAR_1) {
   if (!((editFieldDef_t *) VAR_10->typeData)->maxPaintChars) {
    ((editFieldDef_t *) VAR_10->typeData)->maxPaintChars = VAR_9;
   }
  }
 } else if (VAR_10->type == VAR_4) {
  VAR_10->typeData = FUNC_0(sizeof(multiDef_t));
 } else if (VAR_10->type == VAR_3) {
  VAR_10->typeData = FUNC_0(sizeof(modelDef_t));
 }
}
