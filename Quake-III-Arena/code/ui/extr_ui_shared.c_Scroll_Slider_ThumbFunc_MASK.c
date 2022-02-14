
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* item; } ;
typedef TYPE_5__ scrollInfo_t ;
struct TYPE_13__ {float maxVal; float minVal; } ;
typedef TYPE_6__ editFieldDef_t ;
struct TYPE_14__ {float cursorx; int (* setCVar ) (int ,int ) ;} ;
struct TYPE_9__ {float x; } ;
struct TYPE_10__ {TYPE_2__ rect; } ;
struct TYPE_8__ {int x; int w; } ;
struct TYPE_11__ {int cvar; TYPE_3__ window; TYPE_1__ textRect; scalar_t__ text; TYPE_6__* typeData; } ;


 TYPE_7__* VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,float) ;

__attribute__((used)) static void FUNC_2(void *VAR_2) {
 float VAR_3, VAR_4, VAR_5;
 scrollInfo_t *VAR_6 = (scrollInfo_t*)VAR_2;
 editFieldDef_t *VAR_7 = VAR_6->item->typeData;

 if (VAR_6->item->text) {
  VAR_3 = VAR_6->item->textRect.x + VAR_6->item->textRect.w + 8;
 } else {
  VAR_3 = VAR_6->item->window.rect.x;
 }

 VAR_5 = VAR_0->cursorx;

 if (VAR_5 < VAR_3) {
  VAR_5 = VAR_3;
 } else if (VAR_5 > VAR_3 + VAR_1) {
  VAR_5 = VAR_3 + VAR_1;
 }
 VAR_4 = VAR_5 - VAR_3;
 VAR_4 /= VAR_1;
 VAR_4 *= (VAR_7->maxVal - VAR_7->minVal);
 VAR_4 += VAR_7->minVal;
 VAR_0->setCVar(VAR_6->item->cvar, FUNC_1("%f", VAR_4));
}
