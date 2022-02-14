
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt {char* op_value; char* op_name; struct opt* op_next; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,int,int *) ;
 int * FUNC_9 (char*,char*) ;
 int * FUNC_10 (int ,char*,char*,char*) ;
 int FUNC_11 (int *,char*,...) ;
 char* FUNC_12 (char*,char) ;
 char* VAR_4 ;
 scalar_t__ FUNC_13 (unsigned int) ;
 struct opt* VAR_5 ;
 struct opt* VAR_6 ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_17 () ;
 int FUNC_18 (char*,char*) ;
 char* VAR_8 ;
 int FUNC_19 (char*,char*,char*) ;
 int * VAR_9 ;
 int FUNC_20 (scalar_t__,char*) ;
 scalar_t__ FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char*,char*,int) ;
 int FUNC_23 (char*) ;

void
FUNC_24(void)
{
 FILE *VAR_10, *VAR_11;
 FILE *VAR_12;
 char VAR_13[VAR_0];
 char VAR_14[VAR_0];
 struct opt *VAR_15;

 FUNC_17();
 (void) FUNC_19(VAR_14, "%s/Makefile.template", VAR_3);
 VAR_10 = FUNC_10(VAR_2, VAR_14, VAR_13, "r");
 if (VAR_10 == 0) {
  FUNC_15(VAR_14);
  FUNC_6(1);
 }
 VAR_12 = FUNC_9(FUNC_14("Makefile"), "r");
 FUNC_18(FUNC_14("Makefile"), FUNC_14("Makefile.old"));
 FUNC_23(FUNC_14("Makefile.old"));
 VAR_11 = FUNC_9(FUNC_14("Makefile"), "w");
 if (VAR_11 == 0) {
  FUNC_15(FUNC_14("Makefile"));
  FUNC_6(1);
 }
 FUNC_11(VAR_11, "SOURCE_DIR=%s\n", VAR_8);

 FUNC_11(VAR_11, "export CONFIG_DEFINES =");
 if (VAR_7)
  FUNC_11(VAR_11, " -DGPROF");

 for (VAR_15 = VAR_6; VAR_15; VAR_15 = VAR_15->op_next)
  if (VAR_15->op_value)
   FUNC_11(VAR_11, " -D%s=\"%s\"", VAR_15->op_name, VAR_15->op_value);
  else
   FUNC_11(VAR_11, " -D%s", VAR_15->op_name);
 FUNC_11(VAR_11, "\n");
 for (VAR_15 = VAR_5; VAR_15; VAR_15 = VAR_15->op_next)
  if (VAR_15->op_value)
   FUNC_11(VAR_11, "%s=%s\n", VAR_15->op_name, VAR_15->op_value);
  else
   FUNC_11(VAR_11, "%s\n", VAR_15->op_name);

 while (FUNC_8(VAR_14, VAR_0, VAR_10) != 0) {
  if (*VAR_14 == '%')
   goto percent;
  if (VAR_7 && FUNC_22(VAR_14, "COPTS=", 6) == 0) {
   char *VAR_16;
   FUNC_11(VAR_11,
    "GPROF.EX=$(SOURCE_DIR)/machdep/%s/gmon.ex\n", VAR_4);
   VAR_16 = FUNC_12(VAR_14, '\n');
   if (VAR_16)
    *VAR_16 = 0;
   VAR_16 = VAR_14 + 6;
   while (*VAR_16 && (*VAR_16 == ' ' || *VAR_16 == '\t'))
    VAR_16++;
   VAR_1 = FUNC_13((unsigned)(FUNC_21(VAR_16) + 1));
   if (VAR_1 == 0) {
    FUNC_16("config: out of memory\n");
    FUNC_6(1);
   }
   FUNC_20(VAR_1, VAR_16);
   FUNC_11(VAR_11, "%s -pg\n", VAR_14);
   continue;
  }
  FUNC_11(VAR_11, "%s", VAR_14);
  continue;
 percent:
  if (FUNC_5(VAR_14, "%OBJS\n")) {
   FUNC_3(VAR_11, "OBJS=", -1);
  } else if (FUNC_5(VAR_14, "%CFILES\n")) {
   FUNC_1(VAR_11, "CFILES=", 'c');
   FUNC_3(VAR_11, "COBJS=", 'c');
  } else if (FUNC_5(VAR_14, "%CXXFILES\n")) {
   FUNC_1(VAR_11, "CXXFILES=", 'p');
   FUNC_3(VAR_11, "CXXOBJS=", 'p');
  } else if (FUNC_5(VAR_14, "%SFILES\n")) {
   FUNC_1(VAR_11, "SFILES=", 's');
   FUNC_3(VAR_11, "SOBJS=", 's');
  } else if (FUNC_5(VAR_14, "%MACHDEP\n")) {
   FUNC_2(VAR_11);
  } else if (FUNC_5(VAR_14, "%RULES\n"))
   FUNC_4(VAR_11);
  else
   FUNC_11(VAR_9,
       "Unknown %% construct in generic makefile: %s",
       VAR_14);
 }
 if (VAR_12 != ((void*)0))
 {
  FUNC_0(VAR_12, VAR_11);
  (void) FUNC_7(VAR_12);
 }
 (void) FUNC_7(VAR_10);
 (void) FUNC_7(VAR_11);
}
