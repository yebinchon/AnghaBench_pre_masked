
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

int FUNC_6(void *VAR_0, char *VAR_1, int VAR_2, char **VAR_3, char **VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 FILE *VAR_8 = VAR_0;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_8);
 if (VAR_7 == ((void*)0)) return 0;

 if (VAR_1[0] == '[') return 0;


 VAR_9 = FUNC_4(VAR_1);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  if (VAR_1[VAR_10] == '#' || VAR_1[VAR_10] == '\r' || VAR_1[VAR_10] == '\n') { VAR_1[VAR_10] = 0; break; }
 FUNC_2(VAR_1);
 VAR_9 = FUNC_4(VAR_1);
 if (VAR_9 <= 0) return -1;;


 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  if (VAR_1[VAR_10] == '=') break;
 if (VAR_10 >= VAR_9 || FUNC_3(&VAR_1[VAR_10+1], '=') != ((void*)0)) {
  FUNC_1("config_readsect: can't parse: %s\n", VAR_1);
  return -1;
 }
 VAR_1[VAR_10] = 0;
 VAR_5 = VAR_1;
 VAR_6 = &VAR_1[VAR_10+1];
 FUNC_2(VAR_5);
 FUNC_2(VAR_6);


 if (FUNC_4(VAR_5) == 0 || (FUNC_4(VAR_6) == 0 && FUNC_5(VAR_5, "bind", 4) != 0)) {
  FUNC_1("config_readsect: something's empty: \"%s\" = \"%s\"\n", VAR_5, VAR_6);
  return -1;;
 }


 *VAR_3 = VAR_5;
 *VAR_4 = VAR_6;
 return 1;
}
