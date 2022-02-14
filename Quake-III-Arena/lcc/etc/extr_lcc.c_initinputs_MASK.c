
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* str; struct TYPE_4__* link; } ;
typedef TYPE_1__* List ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_1 ;
 char* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int * FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(void) {
 char *VAR_5 = FUNC_2("LCCINPUTS");
 List VAR_6, VAR_7;

 if (VAR_5 == 0 || (VAR_5 = VAR_2)[0] == 0)
  VAR_5 = ".";
 if (VAR_5) {
  VAR_3 = FUNC_3(VAR_5);
  if ((VAR_7 = VAR_3))
   do {
    VAR_7 = VAR_7->link;
    if (FUNC_4(VAR_7->str, ".") != 0) {
     VAR_1 = FUNC_0(FUNC_1("-I", VAR_7->str), VAR_1);
     if (FUNC_6(VAR_0[1], "win32") == ((void*)0))
      VAR_4[0] = FUNC_0(FUNC_1("-L", VAR_7->str), VAR_4[0]);
    } else
     VAR_7->str = "";
   } while (VAR_7 != VAR_3);
 }







}
