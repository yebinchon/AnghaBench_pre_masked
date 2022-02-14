
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct block {struct block* link; } ;
struct TYPE_7__ {char* name; int reached; int * rules; struct TYPE_7__* link; } ;
typedef TYPE_1__* Nonterm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (char*,char*) ;
 int FUNC_13 (struct block*) ;
 int FUNC_14 (int *) ;
 int * VAR_3 ;
 struct block* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int * VAR_8 ;
 char* VAR_9 ;
 int FUNC_15 (int,int *) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 scalar_t__ FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (char*,char*,int) ;
 int VAR_14 ;
 int FUNC_18 (char*,char*,...) ;
 int FUNC_19 () ;

int FUNC_20(int VAR_15, char *VAR_16[]) {
 int VAR_17, VAR_18;
 Nonterm VAR_19;

 for (VAR_18 = 1; VAR_18 < VAR_15; VAR_18++)
  if (FUNC_16(VAR_16[VAR_18], "-T") == 0)
   VAR_1 = 1;
  else if (FUNC_17(VAR_16[VAR_18], "-p", 2) == 0 && VAR_16[VAR_18][2])
   VAR_9 = &VAR_16[VAR_18][2];
  else if (FUNC_17(VAR_16[VAR_18], "-p", 2) == 0 && VAR_18 + 1 < VAR_15)
   VAR_9 = VAR_16[++VAR_18];
  else if (*VAR_16[VAR_18] == '-' && VAR_16[VAR_18][1]) {
   FUNC_18("usage: %s [-T | -p prefix]... [ [ input ] output ] \n",
    VAR_16[0]);
   FUNC_10(1);
  } else if (VAR_3 == ((void*)0)) {
   if (FUNC_16(VAR_16[VAR_18], "-") == 0)
    VAR_3 = VAR_12;
   else if ((VAR_3 = FUNC_12(VAR_16[VAR_18], "r")) == ((void*)0)) {
    FUNC_18("%s: can't read `%s'\n", VAR_16[0], VAR_16[VAR_18]);
    FUNC_10(1);
   }
  } else if (VAR_8 == ((void*)0)) {
   if (FUNC_16(VAR_16[VAR_18], "-") == 0)
    VAR_8 = VAR_13;
   if ((VAR_8 = FUNC_12(VAR_16[VAR_18], "w")) == ((void*)0)) {
    FUNC_18("%s: can't write `%s'\n", VAR_16[0], VAR_16[VAR_18]);
    FUNC_10(1);
   }
  }
 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_12;
 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_13;
 FUNC_19();
 if (VAR_11)
  FUNC_0(VAR_11);
 for (VAR_19 = VAR_7; VAR_19; VAR_19 = VAR_19->link) {
  if (VAR_19->rules == ((void*)0))
   FUNC_18("undefined nonterminal `%s'\n", VAR_19->name);
  if (!VAR_19->reached)
   FUNC_18("can't reach nonterminal `%s'\n", VAR_19->name);
 }
 FUNC_3();
 FUNC_2(VAR_7, VAR_6);
 FUNC_9(VAR_7, VAR_6);
 FUNC_6(VAR_10, VAR_5);
 FUNC_8(VAR_10);
 FUNC_7(VAR_7);
 FUNC_1(VAR_7);
 if (VAR_11)
  FUNC_5(VAR_14, VAR_11, VAR_6);
 FUNC_4(VAR_10, VAR_5);
 if (!FUNC_11(VAR_3))
  while ((VAR_17 = FUNC_14(VAR_3)) != VAR_0)
   FUNC_15(VAR_17, VAR_8);
 while (VAR_4) {
  struct block *VAR_20 = VAR_4->link;
  FUNC_13(VAR_4);
  VAR_4 = VAR_20;
 }
 return VAR_2 > 0;
}
