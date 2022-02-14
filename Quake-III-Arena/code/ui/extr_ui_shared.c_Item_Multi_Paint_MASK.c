
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_11__ {double* focusColor; } ;
typedef TYPE_3__ menuDef_t ;
struct TYPE_10__ {int y; scalar_t__ x; scalar_t__ w; } ;
struct TYPE_9__ {int flags; int foreColor; } ;
struct TYPE_12__ {int textStyle; int textscale; TYPE_2__ textRect; scalar_t__ text; TYPE_1__ window; scalar_t__ parent; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_13__ {int realTime; int (* drawText ) (scalar_t__,int ,int ,double*,char const*,int ,int ,int ) ;} ;


 TYPE_8__* VAR_0 ;
 char* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (double*,double*,double*,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (double**,int *,int) ;
 double FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ,int ,double*,char const*,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int ,double*,char const*,int ,int ,int ) ;

void FUNC_7(itemDef_t *VAR_3) {
 vec4_t VAR_4, VAR_5;
 const char *VAR_6 = "";
 menuDef_t *VAR_7 = (menuDef_t*)VAR_3->parent;

 if (VAR_3->window.flags & VAR_2) {
  VAR_5[0] = 0.8 * VAR_7->focusColor[0];
  VAR_5[1] = 0.8 * VAR_7->focusColor[1];
  VAR_5[2] = 0.8 * VAR_7->focusColor[2];
  VAR_5[3] = 0.8 * VAR_7->focusColor[3];
  FUNC_2(VAR_7->focusColor,VAR_5,VAR_4,0.5+0.5*FUNC_4(VAR_0->realTime / VAR_1));
 } else {
  FUNC_3(&VAR_4, &VAR_3->window.foreColor, sizeof(vec4_t));
 }

 VAR_6 = FUNC_0(VAR_3);

 if (VAR_3->text) {
  FUNC_1(VAR_3);
  VAR_0->drawText(VAR_3->textRect.x + VAR_3->textRect.w + 8, VAR_3->textRect.y, VAR_3->textscale, VAR_4, VAR_6, 0, 0, VAR_3->textStyle);
 } else {
  VAR_0->drawText(VAR_3->textRect.x, VAR_3->textRect.y, VAR_3->textscale, VAR_4, VAR_6, 0, 0, VAR_3->textStyle);
 }
}
