
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ window; int mouseExit; int mouseExitText; } ;
typedef TYPE_2__ itemDef_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(itemDef_t *VAR_3) {
  if (VAR_3) {
    if (VAR_3->window.flags & VAR_2) {
      FUNC_0(VAR_3, VAR_3->mouseExitText);
      VAR_3->window.flags &= ~VAR_2;
    }
    FUNC_0(VAR_3, VAR_3->mouseExit);
    VAR_3->window.flags &= ~(VAR_1 | VAR_0);
  }
}
