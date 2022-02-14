
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int flags; } ;
struct stat {int st_mode; } ;
struct menu {struct menu* next; struct menu* parent; struct menu* list; struct symbol* sym; } ;
struct TYPE_2__ {struct menu* list; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,struct symbol*,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,char const*) ;
 char* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 () ;
 int VAR_3 ;
 int FUNC_12 (char*,char const*,int) ;
 char* FUNC_13 (struct menu*) ;
 int FUNC_14 (struct menu*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_16 (char*,char*,char*,...) ;
 int FUNC_17 (char const*,struct stat*) ;
 int FUNC_18 (char*,char const*) ;
 int FUNC_19 (char*,char const*) ;
 char* FUNC_20 (char const*,char) ;
 int FUNC_21 (struct symbol*) ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;

int FUNC_24(const char *VAR_5)
{
 FILE *VAR_6;
 struct symbol *VAR_7;
 struct menu *VAR_8;
 const char *VAR_9;
 const char *VAR_10;
 char VAR_11[VAR_0+1], VAR_12[VAR_0+1], VAR_13[VAR_0+1];
 char *VAR_14;

 VAR_11[0] = 0;
 if (VAR_5 && VAR_5[0]) {
  struct stat VAR_15;
  char *VAR_16;

  if (!FUNC_17(VAR_5, &VAR_15) && FUNC_0(VAR_15.st_mode)) {
   FUNC_19(VAR_11, VAR_5);
   FUNC_18(VAR_11, "/");
   VAR_9 = FUNC_3();
  } else if ((VAR_16 = FUNC_20(VAR_5, '/'))) {
   int VAR_17 = VAR_16 - VAR_5 + 1;
   FUNC_12(VAR_11, VAR_5, VAR_17);
   VAR_11[VAR_17] = 0;
   if (VAR_16[1])
    VAR_9 = VAR_16 + 1;
   else
    VAR_9 = FUNC_3();
  } else
   VAR_9 = VAR_5;
 } else
  VAR_9 = FUNC_3();

 FUNC_16(VAR_13, "%s%s", VAR_11, VAR_9);
 VAR_14 = FUNC_10("KCONFIG_OVERWRITECONFIG");
 if (!VAR_14 || !*VAR_14) {
  FUNC_16(VAR_12, "%s.tmpconfig.%d", VAR_13, (int)FUNC_11());
  VAR_6 = FUNC_8(VAR_12, "w");
 } else {
  *VAR_12 = 0;
  VAR_6 = FUNC_8(VAR_13, "w");
 }
 if (!VAR_6)
  return 1;

 FUNC_5(VAR_6, &VAR_3, ((void*)0));

 if (!FUNC_2())
  FUNC_22();

 VAR_8 = VAR_4.list;
 while (VAR_8) {
  VAR_7 = VAR_8->sym;
  if (!VAR_7) {
   if (!FUNC_14(VAR_8))
    goto next;
   VAR_10 = FUNC_13(VAR_8);
   FUNC_9(VAR_6, "\n"
         "#\n"
         "# %s\n"
         "#\n", VAR_10);
  } else if (!(VAR_7->flags & VAR_1)) {
   FUNC_21(VAR_7);
   if (!(VAR_7->flags & VAR_2))
    goto next;
   VAR_7->flags &= ~VAR_2;

   FUNC_6(VAR_6, VAR_7, &VAR_3, ((void*)0));
  }

next:
  if (VAR_8->list) {
   VAR_8 = VAR_8->list;
   continue;
  }
  if (VAR_8->next)
   VAR_8 = VAR_8->next;
  else while ((VAR_8 = VAR_8->parent)) {
   if (VAR_8->next) {
    VAR_8 = VAR_8->next;
    break;
   }
  }
 }
 FUNC_7(VAR_6);

 if (*VAR_12) {
  FUNC_18(VAR_11, VAR_9);
  FUNC_18(VAR_11, ".old");
  FUNC_15(VAR_13, VAR_11);
  if (FUNC_15(VAR_12, VAR_13))
   return 1;
 }

 FUNC_4(FUNC_1("configuration written to %s"), VAR_13);

 FUNC_23(0);

 return 0;
}
