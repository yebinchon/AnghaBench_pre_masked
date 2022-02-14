
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; struct TYPE_3__* link; } ;
typedef TYPE_1__* List ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(List VAR_2) {
 if (VAR_2) {
  List VAR_3 = VAR_2;
  if (VAR_1)
   FUNC_0(VAR_0, "rm");
  do {
   if (VAR_1)
    FUNC_0(VAR_0, " %s", VAR_3->str);
   if (VAR_1 < 2)
    FUNC_1(VAR_3->str);
  } while ((VAR_3 = VAR_3->link) != VAR_2);
  if (VAR_1)
   FUNC_0(VAR_0, "\n");
 }
}
