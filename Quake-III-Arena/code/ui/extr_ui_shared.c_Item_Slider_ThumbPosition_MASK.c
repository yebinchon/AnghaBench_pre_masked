
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {float x; } ;
struct TYPE_10__ {TYPE_2__ rect; } ;
struct TYPE_8__ {int x; int w; } ;
struct TYPE_11__ {scalar_t__ cvar; TYPE_3__ window; TYPE_1__ textRect; scalar_t__ text; TYPE_5__* typeData; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_12__ {float minVal; float maxVal; } ;
typedef TYPE_5__ editFieldDef_t ;
struct TYPE_13__ {float (* getCVarValue ) (scalar_t__) ;} ;


 TYPE_7__* VAR_0 ;
 float VAR_1 ;
 float FUNC_0 (scalar_t__) ;

float FUNC_1(itemDef_t *VAR_2) {
 float VAR_3, VAR_4, VAR_5;
 editFieldDef_t *VAR_6 = VAR_2->typeData;

 if (VAR_2->text) {
  VAR_5 = VAR_2->textRect.x + VAR_2->textRect.w + 8;
 } else {
  VAR_5 = VAR_2->window.rect.x;
 }

 if (VAR_6 == ((void*)0) && VAR_2->cvar) {
  return VAR_5;
 }

 VAR_3 = VAR_0->getCVarValue(VAR_2->cvar);

 if (VAR_3 < VAR_6->minVal) {
  VAR_3 = VAR_6->minVal;
 } else if (VAR_3 > VAR_6->maxVal) {
  VAR_3 = VAR_6->maxVal;
 }

 VAR_4 = VAR_6->maxVal - VAR_6->minVal;
 VAR_3 -= VAR_6->minVal;
 VAR_3 /= VAR_4;

 VAR_3 *= VAR_1;
 VAR_5 += VAR_3;


 return VAR_5;
}
