
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


struct TYPE_11__ {float x; float w; } ;
typedef TYPE_3__ rectDef_t ;
typedef int qboolean ;
struct TYPE_10__ {int flags; TYPE_3__ rect; } ;
struct TYPE_9__ {int x; int w; } ;
struct TYPE_12__ {scalar_t__ cvar; TYPE_2__ window; TYPE_1__ textRect; scalar_t__ text; TYPE_5__* typeData; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_13__ {float maxVal; float minVal; } ;
typedef TYPE_5__ editFieldDef_t ;
struct TYPE_14__ {float cursorx; int (* Print ) (char*) ;int (* setCVar ) (scalar_t__,int ) ;int cursory; } ;


 TYPE_8__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,float,int ) ;
 scalar_t__ VAR_5 ;
 float VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,float) ;

qboolean FUNC_4(itemDef_t *VAR_10, int VAR_11, qboolean VAR_12) {
 float VAR_13, VAR_14, VAR_15, VAR_16;


 if (VAR_10->window.flags & VAR_7 && VAR_10->cvar && FUNC_0(&VAR_10->window.rect, VAR_0->cursorx, VAR_0->cursory)) {
  if (VAR_11 == VAR_2 || VAR_11 == VAR_1 || VAR_11 == VAR_3 || VAR_11 == VAR_4) {
   editFieldDef_t *VAR_17 = VAR_10->typeData;
   if (VAR_17) {
    rectDef_t VAR_18;
    VAR_15 = VAR_6;
    if (VAR_10->text) {
     VAR_13 = VAR_10->textRect.x + VAR_10->textRect.w + 8;
    } else {
     VAR_13 = VAR_10->window.rect.x;
    }

    VAR_18 = VAR_10->window.rect;
    VAR_18.x = VAR_13;
    VAR_14 = (float)VAR_5 / 2;
    VAR_18.x -= VAR_14;

    VAR_18.w = (VAR_6 + (float)VAR_5 / 2);

    if (FUNC_0(&VAR_18, VAR_0->cursorx, VAR_0->cursory)) {
     VAR_16 = VAR_0->cursorx - VAR_13;
     VAR_14 = VAR_16 / VAR_15;
     VAR_14 *= (VAR_17->maxVal - VAR_17->minVal);


     VAR_14 += VAR_17->minVal;
     VAR_0->setCVar(VAR_10->cvar, FUNC_3("%f", VAR_14));
     return VAR_9;
    }
   }
  }
 }
 VAR_0->Print("slider handle key exit\n");
 return VAR_8;
}
