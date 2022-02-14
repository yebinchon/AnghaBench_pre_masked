
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int start ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char*,int *) ;
 size_t FUNC_7 (char*,int,int,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int,struct stat*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char const*,int,int ) ;
 scalar_t__ FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char*,char const*) ;
 size_t FUNC_15 (char const*) ;
 int FUNC_16 () ;

int FUNC_17(int VAR_9, char * VAR_10[])
{
 struct stat VAR_11;
 int VAR_12;
 int VAR_13;
 FILE *VAR_14 = ((void*)0);
 const char *VAR_15 = ((void*)0);
 const char *VAR_16 = ((void*)0);
 const char *VAR_17 = ((void*)0);
 char VAR_18[2];
 size_t VAR_19;
 int VAR_20;
 size_t VAR_21;

 if (VAR_9 < 5) {
  FUNC_16();
 }

 VAR_15 = VAR_10[1];
 VAR_16 = VAR_10[2];
 VAR_17 = VAR_10[3];

 VAR_10 += 4;
 VAR_9 -= 4;

 VAR_21 = FUNC_15(VAR_17);
 if (!(VAR_21 > 2 && 0 == FUNC_14(".c", VAR_17 + VAR_21 - 2)) &&
  !(VAR_21 > 3 && 0 == FUNC_14(".cp", VAR_17 + VAR_21 - 3)) &&
  !(VAR_21 > 4 && 0 == FUNC_14(".cpp", VAR_17 + VAR_21 - 4))) {

  return 0;
 }

 VAR_13 = FUNC_12(VAR_15, VAR_6 | VAR_4 | VAR_5, VAR_0);
 if (VAR_13 < 0)
  FUNC_1(VAR_1, "open(%s)", VAR_15);

 VAR_12 = FUNC_10(VAR_13, &VAR_11);
 if (VAR_12 < 0)
  FUNC_1(VAR_1, "fstat(%s)", VAR_15);

 if (!FUNC_0(VAR_11.st_mode))
  FUNC_1(VAR_3, "%s is not a regular file", VAR_15);

 VAR_14 = FUNC_4(VAR_13, "w+");
 if (VAR_14 == ((void*)0))
  FUNC_1(VAR_2, "fdopen");

 VAR_19 = FUNC_7(VAR_18, sizeof(VAR_18[0]), sizeof(VAR_18)/sizeof(VAR_18[0]), VAR_14);
 if ((VAR_19 != sizeof(VAR_18)) || (0 != FUNC_11(VAR_18, "[\n", sizeof(VAR_18)/sizeof(VAR_18[0])))) {

  VAR_12 = FUNC_9(VAR_14, 0, VAR_8);
  if (VAR_12 < 0)
   FUNC_1(VAR_2, "fseeko");

  VAR_12 = FUNC_6("[", VAR_14);
  if (VAR_12 < 0)
   FUNC_1(VAR_2, "fputs");
 } else {

  VAR_12 = FUNC_9(VAR_14, -3, VAR_7);
  if (VAR_12 < 0)
   FUNC_1(VAR_2, "fseeko");

  VAR_12 = FUNC_6(",", VAR_14);
  if (VAR_12 < 0)
   FUNC_1(VAR_2, "fputs");
 }

 FUNC_5(VAR_14, "\n");
 FUNC_5(VAR_14, "{\n");
 FUNC_5(VAR_14, "  \"directory\": \"%s\",\n", VAR_16);
 FUNC_5(VAR_14, "  \"file\": \"%s\",\n", VAR_17);
 FUNC_5(VAR_14, "  \"command\": \"");
 for (VAR_20=0; VAR_20 < VAR_9; VAR_20++) {
  bool VAR_22 = FUNC_13(VAR_10[VAR_20], '\\') || FUNC_13(VAR_10[VAR_20], '"') || FUNC_13(VAR_10[VAR_20], ' ');

  if (VAR_22) {
   char *VAR_23 = FUNC_2(VAR_10[VAR_20]);
   FUNC_5(VAR_14, "%s\\\"%s\\\"", VAR_20 == 0 ? "" : " ", VAR_23);
   FUNC_8(VAR_23);
  } else {
   FUNC_5(VAR_14, "%s%s", VAR_20 == 0 ? "" : " ", VAR_10[VAR_20]);
  }
 }
 FUNC_5(VAR_14, "\"\n");
 FUNC_5(VAR_14, "}\n");
 FUNC_5(VAR_14, "]\n");

 VAR_12 = FUNC_3(VAR_14);
 if (VAR_12 < 0)
  FUNC_1(VAR_2, "fclose");

 return 0;
}
