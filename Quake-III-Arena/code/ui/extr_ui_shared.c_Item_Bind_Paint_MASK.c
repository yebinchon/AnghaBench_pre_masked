
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_12__ {float* focusColor; } ;
typedef TYPE_3__ menuDef_t ;
struct TYPE_11__ {int y; scalar_t__ x; scalar_t__ w; } ;
struct TYPE_10__ {int flags; int foreColor; } ;
struct TYPE_13__ {int textStyle; int textscale; TYPE_2__ textRect; scalar_t__ cvar; scalar_t__ text; TYPE_1__ window; scalar_t__ typeData; scalar_t__ parent; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_14__ {int maxPaintChars; } ;
typedef TYPE_5__ editFieldDef_t ;
struct TYPE_15__ {float (* getCVarValue ) (scalar_t__) ;int realTime; int (* drawText ) (scalar_t__,int ,int ,float*,char*,int ,int,int ) ;} ;


 int FUNC_0 (scalar_t__) ;
 TYPE_9__* VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (float*,float*,float*,double) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (float**,int *,int) ;
 double FUNC_4 (int) ;
 float FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ,float*,char*,int ,int,int ) ;
 int FUNC_7 (scalar_t__,int ,int ,float*,char*,int ,int,int ) ;

void FUNC_8(itemDef_t *VAR_5) {
 vec4_t VAR_6, VAR_7;
 float VAR_8;
 int VAR_9 = 0;
 menuDef_t *VAR_10 = (menuDef_t*)VAR_5->parent;
 editFieldDef_t *VAR_11 = (editFieldDef_t*)VAR_5->typeData;
 if (VAR_11) {
  VAR_9 = VAR_11->maxPaintChars;
 }

 VAR_8 = (VAR_5->cvar) ? VAR_0->getCVarValue(VAR_5->cvar) : 0;

 if (VAR_5->window.flags & VAR_2) {
  if (VAR_3 == VAR_5) {
   VAR_7[0] = 0.8f * 1.0f;
   VAR_7[1] = 0.8f * 0.0f;
   VAR_7[2] = 0.8f * 0.0f;
   VAR_7[3] = 0.8f * 1.0f;
  } else {
   VAR_7[0] = 0.8f * VAR_10->focusColor[0];
   VAR_7[1] = 0.8f * VAR_10->focusColor[1];
   VAR_7[2] = 0.8f * VAR_10->focusColor[2];
   VAR_7[3] = 0.8f * VAR_10->focusColor[3];
  }
  FUNC_2(VAR_10->focusColor,VAR_7,VAR_6,0.5+0.5*FUNC_4(VAR_0->realTime / VAR_1));
 } else {
  FUNC_3(&VAR_6, &VAR_5->window.foreColor, sizeof(vec4_t));
 }

 if (VAR_5->text) {
  FUNC_1(VAR_5);
  FUNC_0(VAR_5->cvar);
  VAR_0->drawText(VAR_5->textRect.x + VAR_5->textRect.w + 8, VAR_5->textRect.y, VAR_5->textscale, VAR_6, VAR_4, 0, VAR_9, VAR_5->textStyle);
 } else {
  VAR_0->drawText(VAR_5->textRect.x, VAR_5->textRect.y, VAR_5->textscale, VAR_6, (VAR_8 != 0) ? "FIXME" : "FIXME", 0, VAR_9, VAR_5->textStyle);
 }
}
