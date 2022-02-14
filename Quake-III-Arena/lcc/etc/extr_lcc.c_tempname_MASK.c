
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,char,char) ;
 int VAR_1 ;
 char* FUNC_3 (char*,int ,int ,int ,char*) ;
 int * FUNC_4 (int ,char*) ;
 int VAR_2 ;

char *FUNC_5(char *VAR_3) {
 static int VAR_4;
 char *VAR_5 = FUNC_3("%s/lcc%d%d%s", VAR_2, FUNC_1(), VAR_4++, VAR_3);

 if (FUNC_4(VAR_0[1], "win32") != ((void*)0))
  VAR_5 = FUNC_2(VAR_5, '/', '\\');
 VAR_1 = FUNC_0(VAR_5, VAR_1);
 return VAR_5;
}
