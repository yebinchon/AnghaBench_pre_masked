
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_0 (char*,int *,int ) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(char *VAR_11, int *VAR_12) {
   int VAR_13, VAR_14 = VAR_12[0];
   char *VAR_15 = VAR_11, *VAR_16;

   if (VAR_14 > 0) {

      if (VAR_14 > VAR_1) VAR_14 = VAR_1;

      for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) VAR_5[VAR_13] = VAR_12[VAR_13 + 1];

      VAR_5[VAR_13] = 0;
      VAR_9 = VAR_2;
      }

   while (VAR_15 && (VAR_16 = FUNC_1(VAR_15, ':'))) {
      int VAR_17 = 0, VAR_18 = *++VAR_16;

      if (VAR_18 == 'n' || VAR_18 == 'N') VAR_17 = VAR_0;
      else if (VAR_18 == 'y' || VAR_18 == 'Y') VAR_17 = VAR_2;
      else VAR_17 = (int) FUNC_0(VAR_16, ((void*)0), 0);

      if (!FUNC_2(VAR_15, "lc:", 3)) VAR_7 = VAR_17;
      else if (!FUNC_2(VAR_15, "of:", 3)) VAR_4 = VAR_17;
      else if (!FUNC_2(VAR_15, "tm:", 3)) VAR_10 = VAR_17;
      else if (!FUNC_2(VAR_15, "tc:", 3)) VAR_10 = VAR_17;
      else if (!FUNC_2(VAR_15, "mq:", 3)) VAR_8 = VAR_17;
      else if (!FUNC_2(VAR_15, "ls:", 3)) VAR_6 = VAR_17;
      else if (!FUNC_2(VAR_15, "et:", 3)) VAR_3 = VAR_17;

      if ((VAR_15 = FUNC_1(VAR_15, ','))) ++VAR_15;
      }

   return;
}
