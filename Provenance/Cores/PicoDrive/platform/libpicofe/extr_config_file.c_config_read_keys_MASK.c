
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef int dev ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (char*,int,char const*) ;
 int* VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char const*,char*,int*) ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;
 char* FUNC_13 (char const*,char*) ;

void FUNC_14(const char *VAR_1)
{
 char VAR_2[256], VAR_3[128], *VAR_4;
 const char *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = VAR_1;
 while (VAR_5 != ((void*)0) && (VAR_5 = FUNC_13(VAR_5, "binddev = ")) != ((void*)0)) {
  VAR_5 += 10;

  FUNC_1(VAR_2, sizeof(VAR_2), VAR_5);
  VAR_8 = FUNC_4(VAR_2);
  if (VAR_8 < 0) {
   FUNC_9("input: can't handle dev: %s\n", VAR_2);
   continue;
  }

  FUNC_5(VAR_8, -1, -1);
  while ((VAR_5 = FUNC_13(VAR_5, "bind"))) {
   if (FUNC_12(VAR_5, "binddev = ", 10) == 0)
    break;
   VAR_5 += 4;
   if (*VAR_5 != ' ') {
    FUNC_9("input: parse error: %16s..\n", VAR_5);
    continue;
   }

   FUNC_1(VAR_3, sizeof(VAR_3), VAR_5);
   VAR_4 = FUNC_11(VAR_3, '=');
   if (VAR_4 == ((void*)0)) {
    FUNC_9("parse failed: %16s..\n", VAR_5);
    continue;
   }
   *VAR_4 = 0;
   VAR_4++;
   FUNC_7(VAR_3);
   FUNC_7(VAR_4);

   VAR_6 = FUNC_8(VAR_4, &VAR_7);
   if (VAR_6 != -1 && VAR_6 != 0) {

    FUNC_3(VAR_8, VAR_3, VAR_6, VAR_7);
   }
   else
    FUNC_6("config: unhandled action \"%s\"\n", VAR_4);
  }
 }
 FUNC_2();
}
