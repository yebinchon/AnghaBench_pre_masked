
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int menuDef_t ;
struct TYPE_5__ {int cinematic; int flags; } ;
struct TYPE_6__ {TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_7__ {int (* stopCinematic ) (int) ;} ;


 TYPE_4__* VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

void FUNC_3(menuDef_t *VAR_2, const char *VAR_3, qboolean VAR_4) {
 itemDef_t *VAR_5;
 int VAR_6;
 int VAR_7 = FUNC_1(VAR_2, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_3);
  if (VAR_5 != ((void*)0)) {
   if (VAR_4) {
    VAR_5->window.flags |= VAR_1;
   } else {
    VAR_5->window.flags &= ~VAR_1;

    if (VAR_5->window.cinematic >= 0) {
     VAR_0->stopCinematic(VAR_5->window.cinematic);
     VAR_5->window.cinematic = -1;
    }
   }
  }
 }
}
