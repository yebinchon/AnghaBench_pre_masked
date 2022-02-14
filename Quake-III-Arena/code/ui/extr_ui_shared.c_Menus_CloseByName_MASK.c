
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(const char *VAR_2) {
  menuDef_t *VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 != ((void*)0)) {
  FUNC_0(VAR_3);
  VAR_3->window.flags &= ~(VAR_1 | VAR_0);
  }
}
