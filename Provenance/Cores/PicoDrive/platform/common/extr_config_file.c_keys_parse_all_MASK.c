
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,char**,char**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;

__attribute__((used)) static void FUNC_11(FILE *VAR_0)
{
 char VAR_1[256], *VAR_2, *VAR_3;
 int VAR_4 = -1;
 int VAR_5, VAR_6;
 int VAR_7;

 while (!FUNC_1(VAR_0))
 {
  VAR_7 = FUNC_0(VAR_0, VAR_1, sizeof(VAR_1), &VAR_2, &VAR_3);
  if (VAR_7 == 0) break;
  if (VAR_7 == -1) continue;

  if (FUNC_9(VAR_2, "binddev") == 0) {
   VAR_4 = FUNC_3(VAR_3);
   if (VAR_4 < 0) {
    FUNC_8("input: can't handle dev: %s\n", VAR_3);
    continue;
   }
   FUNC_4(VAR_4, -1, -1);
   continue;
  }
  if (VAR_4 < 0 || FUNC_10(VAR_2, "bind ", 5) != 0)
   continue;

  VAR_5 = FUNC_7(VAR_3, &VAR_6);
  if (VAR_5 == -1) {
   FUNC_5("config: unhandled action \"%s\"\n", VAR_3);
   return;
  }

  FUNC_6(VAR_2 + 5);
  FUNC_2(VAR_4, VAR_2 + 5, VAR_5, VAR_6);
 }
}
