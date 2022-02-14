
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script ;
typedef int qboolean ;
struct TYPE_3__ {char* string; } ;
typedef TYPE_1__ pc_token_t ;


 int FUNC_0 (char*,int,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,TYPE_1__*) ;
 char* FUNC_5 (char*,char*) ;

qboolean FUNC_6(int VAR_2, const char **VAR_3) {
 char VAR_4[1024];
 pc_token_t VAR_5;

 FUNC_3(VAR_4, 0, sizeof(VAR_4));



 if (!FUNC_4(VAR_2, &VAR_5))
  return VAR_0;
 if (FUNC_1(VAR_5.string, "{") != 0) {
     return VAR_0;
 }

 while ( 1 ) {
  if (!FUNC_4(VAR_2, &VAR_5))
   return VAR_0;

  if (FUNC_1(VAR_5.string, "}") == 0) {
   *VAR_3 = FUNC_2(VAR_4);
   return VAR_1;
  }

  if (VAR_5.string[1] != '\0') {
   FUNC_0(VAR_4, 1024, FUNC_5("\"%s\"", VAR_5.string));
  } else {
   FUNC_0(VAR_4, 1024, VAR_5.string);
  }
  FUNC_0(VAR_4, 1024, " ");
 }
 return VAR_0;
}
