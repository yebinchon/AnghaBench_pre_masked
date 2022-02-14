
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {int flags; int rect; } ;
struct TYPE_6__ {scalar_t__ cvar; TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_7__ {int (* getCVarValue ) (scalar_t__) ;int (* setCVar ) (scalar_t__,int ) ;int cursory; int cursorx; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int) ;

qboolean FUNC_4(itemDef_t *VAR_8, int VAR_9) {

  if (FUNC_0(&VAR_8->window.rect, VAR_0->cursorx, VAR_0->cursory) && VAR_8->window.flags & VAR_5 && VAR_8->cvar) {
  if (VAR_9 == VAR_2 || VAR_9 == VAR_1 || VAR_9 == VAR_3 || VAR_9 == VAR_4) {
     VAR_0->setCVar(VAR_8->cvar, FUNC_3("%i", !VAR_0->getCVarValue(VAR_8->cvar)));
    return VAR_7;
  }
  }

  return VAR_6;

}
