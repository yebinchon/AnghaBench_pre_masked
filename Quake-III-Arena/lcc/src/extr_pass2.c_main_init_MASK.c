
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int * FUNC_5 (char*,char*,int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_9(int VAR_7, char *VAR_8[]) {
 int VAR_9;
 static int VAR_10;

 if (VAR_10)
  return;
 VAR_10 = 1;
 for (VAR_9 = 1; VAR_9 < VAR_7; VAR_9++)
  if (FUNC_6(VAR_8[VAR_9], "-g") == 0 || FUNC_6(VAR_8[VAR_9], "-g2") == 0)
   VAR_2 = 2;
  else if (FUNC_6(VAR_8[VAR_9], "-w") == 0)
   VAR_6++;
  else if (FUNC_6(VAR_8[VAR_9], "-v") == 0) {
   FUNC_4(VAR_4, "%s %s\n", VAR_8[0], VAR_3);
   VAR_5++;
  } else if (FUNC_7(VAR_8[VAR_9], "-errout=", 8) == 0) {
   FILE *VAR_11 = FUNC_3(VAR_8[VAR_9]+8, "w");
   if (VAR_11 == ((void*)0)) {
    FUNC_4(VAR_4, "%s: can't write errors to `%s'\n", VAR_8[0], VAR_8[VAR_9]+8);
    FUNC_1(VAR_0);
   }
   FUNC_2(VAR_11);
   VAR_11 = FUNC_5(VAR_8[VAR_9]+8, "w", VAR_4);
   FUNC_0(VAR_11);
  } else if (FUNC_7(VAR_8[VAR_9], "-e", 2) == 0) {
   int VAR_12;
   if ((VAR_12 = FUNC_8(&VAR_8[VAR_9][2], ((void*)0), 0)) > 0)
    VAR_1 = VAR_12;
  }
}
