
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec4_t ;
typedef int text ;
struct TYPE_11__ {int y; int x; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_12__ {char* text; int textStyle; int textscale; TYPE_2__ textRect; int * cvar; TYPE_1__ window; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_13__ {int (* drawText ) (int ,int ,int ,int ,char const*,int ,int ,int ) ;int (* getCVarString ) (int *,char*,int) ;} ;


 TYPE_9__* VAR_0 ;
 int FUNC_0 (TYPE_3__*,int*,int*,char const*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ,int ,int ,int ,char const*,int ,int ,int ) ;

void FUNC_6(itemDef_t *VAR_3) {
 char VAR_4[1024];
 const char *VAR_5;
 int VAR_6, VAR_7;
 vec4_t VAR_8;

 if (VAR_3->window.flags & VAR_2) {
  FUNC_3(VAR_3);
  return;
 }
 if (VAR_3->window.flags & VAR_1) {
  FUNC_2(VAR_3);
  return;
 }

 if (VAR_3->text == ((void*)0)) {
  if (VAR_3->cvar == ((void*)0)) {
   return;
  }
  else {
   VAR_0->getCVarString(VAR_3->cvar, VAR_4, sizeof(VAR_4));
   VAR_5 = VAR_4;
  }
 }
 else {
  VAR_5 = VAR_3->text;
 }


 FUNC_0(VAR_3, &VAR_7, &VAR_6, VAR_5);

 if (*VAR_5 == '\0') {
  return;
 }


 FUNC_1(VAR_3, &VAR_8);
 VAR_0->drawText(VAR_3->textRect.x, VAR_3->textRect.y, VAR_3->textscale, VAR_8, VAR_5, 0, 0, VAR_3->textStyle);
}
