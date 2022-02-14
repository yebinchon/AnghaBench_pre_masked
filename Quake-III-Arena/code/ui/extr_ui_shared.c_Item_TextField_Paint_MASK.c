
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_11__ {double* focusColor; } ;
typedef TYPE_3__ menuDef_t ;
struct TYPE_10__ {int y; scalar_t__ w; scalar_t__ x; } ;
struct TYPE_9__ {int flags; int foreColor; } ;
struct TYPE_12__ {int cursorPos; int textStyle; int textscale; TYPE_2__ textRect; TYPE_1__ window; scalar_t__* text; scalar_t__ parent; scalar_t__ cvar; scalar_t__ typeData; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_13__ {int paintOffset; int maxPaintChars; } ;
typedef TYPE_5__ editFieldDef_t ;
typedef int buff ;
struct TYPE_14__ {int realTime; int (* drawText ) (scalar_t__,int ,int ,double*,char*,int ,int ,int ) ;int (* drawTextWithCursor ) (scalar_t__,int ,int ,double*,char*,int,char,int ,int ) ;scalar_t__ (* getOverstrikeMode ) () ;int (* getCVarString ) (scalar_t__,char*,int) ;} ;


 TYPE_8__* VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (double*,double*,double*,double) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (double**,int *,int) ;
 double FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ,int ,double*,char*,int,char,int ,int ) ;
 int FUNC_7 (scalar_t__,int ,int ,double*,char*,int ,int ,int ) ;

void FUNC_8(itemDef_t *VAR_4) {
 char VAR_5[1024];
 vec4_t VAR_6, VAR_7;
 int VAR_8;
 menuDef_t *VAR_9 = (menuDef_t*)VAR_4->parent;
 editFieldDef_t *VAR_10 = (editFieldDef_t*)VAR_4->typeData;

 FUNC_0(VAR_4);

 VAR_5[0] = '\0';

 if (VAR_4->cvar) {
  VAR_0->getCVarString(VAR_4->cvar, VAR_5, sizeof(VAR_5));
 }

 VAR_9 = (menuDef_t*)VAR_4->parent;

 if (VAR_4->window.flags & VAR_2) {
  VAR_7[0] = 0.8 * VAR_9->focusColor[0];
  VAR_7[1] = 0.8 * VAR_9->focusColor[1];
  VAR_7[2] = 0.8 * VAR_9->focusColor[2];
  VAR_7[3] = 0.8 * VAR_9->focusColor[3];
  FUNC_1(VAR_9->focusColor,VAR_7,VAR_6,0.5+0.5*FUNC_3(VAR_0->realTime / VAR_1));
 } else {
  FUNC_2(&VAR_6, &VAR_4->window.foreColor, sizeof(vec4_t));
 }

 VAR_8 = (VAR_4->text && *VAR_4->text) ? 8 : 0;
 if (VAR_4->window.flags & VAR_2 && VAR_3) {
  char VAR_11 = VAR_0->getOverstrikeMode() ? '_' : '|';
  VAR_0->drawTextWithCursor(VAR_4->textRect.x + VAR_4->textRect.w + VAR_8, VAR_4->textRect.y, VAR_4->textscale, VAR_6, VAR_5 + VAR_10->paintOffset, VAR_4->cursorPos - VAR_10->paintOffset , VAR_11, VAR_10->maxPaintChars, VAR_4->textStyle);
 } else {
  VAR_0->drawText(VAR_4->textRect.x + VAR_4->textRect.w + VAR_8, VAR_4->textRect.y, VAR_4->textscale, VAR_6, VAR_5 + VAR_10->paintOffset, 0, VAR_10->maxPaintChars, VAR_4->textStyle);
 }

}
