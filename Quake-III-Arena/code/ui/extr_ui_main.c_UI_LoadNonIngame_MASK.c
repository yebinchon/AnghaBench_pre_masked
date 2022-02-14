
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inGameLoad; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_2() {
 const char *VAR_2 = FUNC_0("ui_menuFiles");
 if (VAR_2 == ((void*)0) || VAR_2[0] == '\0') {
  VAR_2 = "ui/menus.txt";
 }
 FUNC_1(VAR_2, VAR_0);
 VAR_1.inGameLoad = VAR_0;
}
