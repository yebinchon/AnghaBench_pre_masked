
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int menuDef_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;


 TYPE_2__* FUNC_0 (int *,int,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(menuDef_t *VAR_3, const char *VAR_4, qboolean VAR_5) {
  itemDef_t *VAR_6;
  int VAR_7;
  int VAR_8 = FUNC_1(VAR_3, VAR_4);
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
    VAR_6 = FUNC_0(VAR_3, VAR_7, VAR_4);
    if (VAR_6 != ((void*)0)) {
      if (VAR_5) {
        VAR_6->window.flags |= (VAR_1 | VAR_2);
        VAR_6->window.flags &= ~VAR_0;
      } else {
        VAR_6->window.flags |= (VAR_2 | VAR_0);
        VAR_6->window.flags &= ~VAR_1;
      }
    }
  }
}
