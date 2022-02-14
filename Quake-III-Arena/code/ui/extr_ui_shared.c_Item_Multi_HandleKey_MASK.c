
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_9__ {float* cvarValue; int * cvarStr; scalar_t__ strDef; } ;
typedef TYPE_2__ multiDef_t ;
struct TYPE_8__ {int flags; int rect; } ;
struct TYPE_10__ {scalar_t__ cvar; TYPE_1__ window; scalar_t__ typeData; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_11__ {int (* setCVar ) (scalar_t__,int ) ;int cursory; int cursorx; } ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char*,float) ;

qboolean FUNC_7(itemDef_t *VAR_8, int VAR_9) {
 multiDef_t *VAR_10 = (multiDef_t*)VAR_8->typeData;
 if (VAR_10) {
   if (FUNC_2(&VAR_8->window.rect, VAR_0->cursorx, VAR_0->cursory) && VAR_8->window.flags & VAR_5 && VAR_8->cvar) {
   if (VAR_9 == VAR_2 || VAR_9 == VAR_1 || VAR_9 == VAR_3 || VAR_9 == VAR_4) {
    int VAR_11 = FUNC_1(VAR_8) + 1;
    int VAR_12 = FUNC_0(VAR_8);
    if ( VAR_11 < 0 || VAR_11 >= VAR_12 ) {
     VAR_11 = 0;
    }
    if (VAR_10->strDef) {
     VAR_0->setCVar(VAR_8->cvar, VAR_10->cvarStr[VAR_11]);
    } else {
     float VAR_13 = VAR_10->cvarValue[VAR_11];
     if (((float)((int) VAR_13)) == VAR_13) {
      VAR_0->setCVar(VAR_8->cvar, FUNC_6("%i", (int) VAR_13 ));
     }
     else {
      VAR_0->setCVar(VAR_8->cvar, FUNC_6("%f", VAR_13 ));
     }
    }
    return VAR_7;
   }
  }
 }
  return VAR_6;
}
