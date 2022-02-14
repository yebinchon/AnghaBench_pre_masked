
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_1__ scope_t ;
typedef TYPE_2__* path_entry_t ;
struct TYPE_11__ {int quoted_includes_only; scalar_t__ type; int * directory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* VAR_6 ;
 int FUNC_6 () ;
 int VAR_7 ;
 int FUNC_7 (TYPE_2__*) ;
 void* FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,char*,char*,...) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 char* VAR_11 ;
 int FUNC_12 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 char* VAR_15 ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int VAR_16 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_2__*) ;
 int * VAR_17 ;
 char* VAR_18 ;
 int * VAR_19 ;
 char* VAR_20 ;
 TYPE_1__* FUNC_17 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 char* VAR_25 ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (char*,char*) ;
 int * FUNC_20 (char*) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_24 () ;

int
FUNC_25(int VAR_28, char *VAR_29[])
{
 extern char *VAR_30;
 extern int VAR_31;
 int VAR_32;
 int VAR_33;
 char *VAR_34;
 scope_t *VAR_35;

 FUNC_4(&VAR_16);
 FUNC_1(&VAR_22);
 FUNC_4(&VAR_23);
 FUNC_5(&VAR_7);
 FUNC_1(&VAR_21);


 VAR_35 = FUNC_17();
 VAR_35->type = VAR_4;

 VAR_8 = 1;
 VAR_6 = *VAR_29;
 VAR_19 = ((void*)0);
 VAR_10 = ((void*)0);






 while ((VAR_32 = FUNC_10(VAR_28, VAR_29, "d:i:l:n:o:p:r:I:")) != -1) {
  switch(VAR_32) {
  case 'd':
   FUNC_18("-d: Assembler not built with debugging "
        "information", VAR_3);

   break;
  case 'i':
   VAR_25 = VAR_30;
   break;
  case 'l':

   if ((VAR_10 = FUNC_8(VAR_30, "w")) == ((void*)0)) {
    FUNC_15(VAR_30);
    FUNC_18(((void*)0), VAR_0);
   }
   VAR_11 = VAR_30;
   break;
  case 'n':

   if (FUNC_19(VAR_30, "ostdinc")) {
    FUNC_9(VAR_24, "%s: Unknown option -%c%s\n",
     VAR_6, VAR_32, VAR_30);
    FUNC_23();

   }
   break;
  case 'o':
   if ((VAR_14 = FUNC_8(VAR_30, "w")) == ((void*)0)) {
    FUNC_15(VAR_30);
    FUNC_18(((void*)0), VAR_0);
   }
   VAR_15 = VAR_30;
   break;
  case 'p':

   if ((VAR_17 = FUNC_8(VAR_30, "w")) == ((void*)0)) {
    FUNC_15(VAR_30);
    FUNC_18(((void*)0), VAR_0);
   }
   VAR_18 = VAR_30;
   break;
  case 'r':
   if ((VAR_19 = FUNC_8(VAR_30, "w")) == ((void*)0)) {
    FUNC_15(VAR_30);
    FUNC_18(((void*)0), VAR_0);
   }
   VAR_20 = VAR_30;
   break;
  case 'I':
  {
   path_entry_t VAR_36;

   if (FUNC_19(VAR_30, "-") == 0) {
    if (VAR_8 == 0) {
     FUNC_9(VAR_24, "%s: Warning - '-I-' "
       "specified multiple "
       "times\n", VAR_6);
    }
    VAR_8 = 0;
    for (VAR_36 = FUNC_0(&VAR_22);
         VAR_36 != ((void*)0);
         VAR_36 = FUNC_3(VAR_36,
             VAR_9))





     VAR_36->quoted_includes_only = 1;
   } else {
    VAR_36 =
        (path_entry_t)FUNC_12(sizeof(*VAR_36));
    if (VAR_36 == ((void*)0)) {
     FUNC_15(VAR_30);
     FUNC_18(((void*)0), VAR_2);
    }
    VAR_36->directory = FUNC_20(VAR_30);
    if (VAR_36->directory == ((void*)0)) {
     FUNC_15(VAR_30);
     FUNC_18(((void*)0), VAR_2);
    }
    VAR_36->quoted_includes_only = 0;
    FUNC_2(&VAR_22, VAR_36,
        VAR_9);
   }
   break;
  }
  case '?':
  default:
   FUNC_23();

  }
 }
 VAR_28 -= VAR_31;
 VAR_29 += VAR_31;

 if (VAR_28 != 1) {
  FUNC_9(VAR_24, "%s: No input file specifiled\n", VAR_6);
  FUNC_23();

 }

 if (VAR_17 != ((void*)0)
  && (VAR_19 == ((void*)0) || VAR_25 == ((void*)0))) {
  FUNC_9(VAR_24,
   "%s: The -p option requires the -r and -i options.\n",
   VAR_6);
  FUNC_23();

 }
 FUNC_22();
 VAR_34 = *VAR_29;
 FUNC_11(*VAR_29, VAR_5);
 VAR_33 = FUNC_24();
 if (VAR_33 == 0) {
  if (FUNC_0(&VAR_21) == ((void*)0)
   || FUNC_0(&VAR_21)->type != VAR_4) {
   FUNC_18("Unterminated conditional expression", VAR_1);

  }


  FUNC_16(FUNC_0(&VAR_21));






  FUNC_7(FUNC_0(&VAR_21));


  FUNC_6();

  if (VAR_14 != ((void*)0))
   FUNC_13();
  if (VAR_19 != ((void*)0))
   FUNC_21(VAR_19, VAR_17);
  if (VAR_10 != ((void*)0))
   FUNC_14(VAR_34);
 }

 FUNC_18(((void*)0), 0);

 return (0);
}
