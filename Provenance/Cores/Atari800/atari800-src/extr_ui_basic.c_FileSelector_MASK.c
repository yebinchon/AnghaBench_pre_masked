
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int,int ,int,int,int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (int,int,char const**,int *,int *,int *,int *,int ,int,int,int,int,int,char*,int*) ;
 int VAR_4 ;
 int FUNC_8 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (char*,char*,char const*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,char*) ;
 int FUNC_12 (char*,char*) ;
 char const** VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (char*,char*) ;
 char* FUNC_16 (char const*,char) ;

__attribute__((used)) static int FUNC_17(char *VAR_9, int VAR_10, char VAR_11[][VAR_1], int VAR_12)
{
 char VAR_13[VAR_1];
 char VAR_14[VAR_1 + 2];
 VAR_14[0] = '\0';
 if (VAR_9[0] == '\0' && VAR_12 > 0)
  FUNC_15(VAR_13, VAR_11[0]);
 else if (VAR_10)
  FUNC_15(VAR_13, VAR_9);
 else
  FUNC_11(VAR_9, VAR_13, VAR_14);
 if (VAR_13[0] == '\0')

  FUNC_4(VAR_13);
 for (;;) {
  int VAR_15 = 0;
  int VAR_16;
  FUNC_8("            Please wait...            ");
  FUNC_6();

  for (;;) {
   FUNC_5(VAR_13);

   if (VAR_8 > 0)
    break;



   FUNC_3();
   {
    char VAR_17[VAR_1];
    FUNC_15(VAR_17, VAR_13);
    FUNC_11(VAR_17, VAR_13, ((void*)0));
   }
   if (VAR_13[0] == '\0') {


    FUNC_4(VAR_13);
    FUNC_5(VAR_13);
    if (VAR_8 >= 0)
     break;

    FUNC_3();
    FUNC_0("No files inside directory", 1);
    return VAR_0;
   }
  }

  if (VAR_14[0] != '\0') {
   for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
    if (FUNC_14(VAR_7[VAR_16], VAR_14) == 0) {
     VAR_15 = VAR_16;
     break;
    }
   }
  }

  for (;;) {
   int VAR_18;
   const char *VAR_19;

   FUNC_2();
   FUNC_8(VAR_13);
   FUNC_1(0x9a, 0x94, 0, 1, 39, 23);

   VAR_15 = FUNC_7(VAR_15, VAR_8, VAR_7, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                  20, 2, 1, 2, 37 / 2, VAR_0,
                  VAR_10 ? "Space: select current directory" : ((void*)0),
                  &VAR_18);

   if (VAR_15 == -2) {

    if (VAR_12 > 0) {

     int VAR_20 = VAR_12 - 1;

     for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++)
      if (FUNC_14(VAR_11[VAR_16], VAR_13) == 0) {
       VAR_20 = VAR_16;
       break;
      }
     VAR_16 = VAR_20;
     do {
      if (++VAR_16 >= VAR_12)
       VAR_16 = 0;
      if (FUNC_10(VAR_11[VAR_16])) {
       FUNC_15(VAR_13, VAR_11[VAR_16]);
       break;
      }
     } while (VAR_16 != VAR_20);
    }
    VAR_14[0] = '\0';
    break;
   }
   if (VAR_15 < 0) {

    FUNC_3();
    return VAR_0;
   }
   if (VAR_18 == VAR_5) {

    char VAR_21[VAR_1];
    FUNC_11(VAR_13, VAR_21, VAR_14 + 1);
    if (FUNC_10(VAR_21)) {
     FUNC_15(VAR_13, VAR_21);
     VAR_14[0] = '[';
     FUNC_13(VAR_14, ']');
     break;
    }
    FUNC_0("Cannot enter parent directory", 1);
    continue;
   }
   if (VAR_18 == VAR_6 && VAR_10) {

    FUNC_15(VAR_9, VAR_13);
    FUNC_3();
    return VAR_4;
   }
   VAR_19 = VAR_7[VAR_15];
   if (VAR_19[0] == '[') {

    char VAR_22[VAR_1];

    VAR_14[0] = '\0';
    if (FUNC_14(VAR_19, "[..]") == 0) {

     FUNC_11(VAR_13, VAR_22, VAR_14 + 1);
     VAR_14[0] = '[';
     FUNC_13(VAR_14, ']');
    }
    else {

     char *VAR_23 = FUNC_16(VAR_19, ']');
     if (VAR_23 == ((void*)0))
      continue;
     *VAR_23 = '\0';
     FUNC_9(VAR_22, VAR_13, VAR_19 + 1);
    }

    if (FUNC_10(VAR_22)) {
     FUNC_15(VAR_13, VAR_22);
     break;
    }
    FUNC_0("Cannot enter selected directory", 1);
    continue;
   }
   if (!VAR_10) {

    FUNC_9(VAR_9, VAR_13, VAR_19);
    FUNC_3();
    return VAR_4;
   }
  }

  FUNC_3();
 }
}
