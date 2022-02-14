
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string; } ;
typedef TYPE_1__ pc_token_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int,TYPE_1__*) ;

void FUNC_8(const char *VAR_0) {
 int VAR_1;
 pc_token_t VAR_2;

 FUNC_1("Parsing menu file:%s\n", VAR_0);

 VAR_1 = FUNC_6(VAR_0);
 if (!VAR_1) {
  return;
 }

 while ( 1 ) {
  FUNC_4(&VAR_2, 0, sizeof(pc_token_t));
  if (!FUNC_7( VAR_1, &VAR_2 )) {
   break;
  }
  if ( VAR_2.string[0] == '}' ) {
   break;
  }

  if (FUNC_3(VAR_2.string, "assetGlobalDef") == 0) {
   if (FUNC_0(VAR_1)) {
    continue;
   } else {
    break;
   }
  }

  if (FUNC_3(VAR_2.string, "menudef") == 0) {

   FUNC_2(VAR_1);
  }
 }
 FUNC_5(VAR_1);
}
