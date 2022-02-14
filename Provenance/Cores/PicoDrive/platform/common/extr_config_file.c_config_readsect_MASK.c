
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,char**,char**) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*,...) ;
 int FUNC_7 (char*,char*,int*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char const*) ;

int FUNC_11(const char *VAR_0, const char *VAR_1)
{
 char VAR_2[128], *VAR_3, *VAR_4;
 int VAR_5 = 0;
 FILE *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_0, "r");
 if (VAR_6 == ((void*)0)) return -1;

 if (VAR_1 != ((void*)0))
 {

  VAR_7 = FUNC_10(VAR_6, VAR_1);
  if (!VAR_7) {
   FUNC_6("config_readsect: %s: missing section [%s]\n", VAR_0, VAR_1);
   FUNC_2(VAR_6);
   return -1;
  }
 }

 FUNC_1();

 while (!FUNC_3(VAR_6))
 {
  VAR_7 = FUNC_0(VAR_6, VAR_2, sizeof(VAR_2), &VAR_3, &VAR_4);
  if (VAR_7 == 0) break;
  if (VAR_7 == -1) continue;

  FUNC_7(VAR_3, VAR_4, &VAR_5);
 }

 if (VAR_5) {
  FUNC_9(VAR_6);
  FUNC_5(VAR_6);
 }

 FUNC_2(VAR_6);

 FUNC_6("config_readsect: loaded from %s", VAR_0);
 if (VAR_1 != ((void*)0))
  FUNC_6(" [%s]", VAR_1);
 FUNC_8("\n");

 return 0;
}
