
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; } ;
struct TYPE_5__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char* FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int VAR_0 ;
 int FUNC_8 (char*,scalar_t__) ;

void FUNC_9() {
 char VAR_1[1024];
  menuDef_t *VAR_2 = FUNC_0();
 char *VAR_3 = FUNC_4("ui_menuFiles");
 if (VAR_2 && VAR_2->window.name) {
  FUNC_8(VAR_1, VAR_2->window.name);
 }
 if (VAR_3 == ((void*)0) || VAR_3[0] == '\0') {
  VAR_3 = "ui/menus.txt";
 }

 FUNC_3();




 FUNC_7("gameinfo.txt");
 FUNC_5();


 FUNC_6(VAR_3, VAR_0);
 FUNC_2();
 FUNC_1(VAR_1);

}
