
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {char* f_fn; int f_type; struct file_list* f_next; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,char const*,...) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 char* FUNC_9 (char const*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char const*) ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5;
 const char *VAR_6;
 char *VAR_7;
 struct file_list *VAR_8 = ((void*)0);
 struct file_list *VAR_9, *VAR_10;
 FILE *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 VAR_4 = FUNC_12(VAR_2);
 VAR_5 = FUNC_13(VAR_1?VAR_1:VAR_2) + (VAR_1 == ((void*)0));
 VAR_11 = FUNC_4(VAR_4, "r");
 VAR_14 = -1;
 if (VAR_11 == 0) {
  (void) FUNC_14(VAR_4);
  VAR_12 = FUNC_4(VAR_4, "w");
  if (VAR_12 == 0) {
   FUNC_11(VAR_4);
   FUNC_2(1);
  }
  FUNC_5(VAR_12, "#define %s %d\n", VAR_5, VAR_3);
  (void) FUNC_3(VAR_12);
  VAR_4 = FUNC_10("meta_features.h");
  VAR_12 = FUNC_4(VAR_4, "a");
  if (VAR_12 == 0) {
   FUNC_11(VAR_4);
   FUNC_2(1);
  }
  FUNC_5(VAR_12, "#include <%s.h>\n", VAR_2);
  (void) FUNC_3(VAR_12);
  return;
 }
 VAR_9 = 0;
 for (;;) {
  const char *VAR_15;
  if ((VAR_6 = FUNC_7(VAR_11)) == 0 || VAR_6 == (char *)VAR_0)
   break;
  if ((VAR_6 = FUNC_7(VAR_11)) == 0 || VAR_6 == (char *)VAR_0)
   break;
  VAR_7 = FUNC_9(VAR_6);
  VAR_15 = FUNC_7(VAR_11);
  if (VAR_15 == 0 || VAR_15 == (char *)VAR_0)
   break;
  VAR_13 = FUNC_0(VAR_15);
  if (FUNC_1(VAR_7, VAR_5)) {
   VAR_14 = VAR_13;
   VAR_13 = VAR_3;
  }
  VAR_15 = FUNC_7(VAR_11);
  if (VAR_15 == (char *)VAR_0)
   break;
  VAR_8 = (struct file_list *) FUNC_8(sizeof *VAR_8);
  VAR_8->f_fn = VAR_7;
  VAR_8->f_type = VAR_13;
  VAR_8->f_next = VAR_9;
  VAR_9 = VAR_8;
 }
 (void) FUNC_3(VAR_11);
 if (VAR_3 == VAR_14) {
  while (VAR_8 !=0) {
   VAR_10 = VAR_8;
   VAR_8 = VAR_8->f_next;
   FUNC_6((char *)VAR_10);
  }
  return;
 }
 if (VAR_14 == -1) {
  VAR_8 = (struct file_list *) FUNC_8(sizeof *VAR_8);
  VAR_8->f_fn = VAR_5;
  VAR_8->f_type = VAR_3;
  VAR_8->f_next = VAR_9;
  VAR_9 = VAR_8;
 }
 FUNC_14(VAR_4);
 VAR_12 = FUNC_4(VAR_4, "w");
 if (VAR_12 == 0) {
  FUNC_11(VAR_4);
  FUNC_2(1);
 }
 for (VAR_8 = VAR_9; VAR_8 != 0; VAR_8 = VAR_8->f_next) {
  FUNC_5(VAR_12, "#define %s %d\n",
      VAR_8->f_fn, VAR_3 ? VAR_8->f_type : 0);
  FUNC_6((char *)VAR_8);
 }
 (void) FUNC_3(VAR_12);
}
