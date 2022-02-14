
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int flags; int type; } ;
struct property {int type; } ;
struct menu {int flags; struct symbol* sym; struct property* prompt; struct menu* next; struct menu* list; } ;
typedef enum prop_type { ____Placeholder_prop_type } prop_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct menu* VAR_10 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct menu*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (struct menu*) ;
 scalar_t__ FUNC_5 (struct menu*) ;
 scalar_t__ FUNC_6 (struct menu*) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (struct menu*,int ) ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (int) ;
 struct menu VAR_14 ;
 char* FUNC_10 (int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void FUNC_11(struct menu *VAR_19)
{
 struct symbol *VAR_20;
 struct property *VAR_21;
 struct menu *VAR_22;
 enum prop_type VAR_23;

 if (VAR_19 == &VAR_14) {
  VAR_12 = 1;
  VAR_10 = &VAR_14;
 }

 for (VAR_22 = VAR_19->list; VAR_22; VAR_22 = VAR_22->next) {
  VAR_21 = VAR_22->prompt;
  VAR_20 = VAR_22->sym;
  VAR_23 = VAR_21 ? VAR_21->type : VAR_6;

  if (VAR_20)
   VAR_20->flags &= ~VAR_9;

  if ((VAR_18 == VAR_8)
      && !(VAR_22->flags & VAR_1) && (VAR_15 == VAR_16))
   continue;

  if ((VAR_18 == VAR_8) && (VAR_22->flags & VAR_1)
      && (VAR_15 == VAR_17))
   continue;

  if ((VAR_13 == VAR_3 && FUNC_6(VAR_22)) ||
      (VAR_13 == VAR_4 && FUNC_5(VAR_22)) ||
      (VAR_13 == VAR_2 && FUNC_4(VAR_22)))
   FUNC_7(VAR_22, FUNC_2(VAR_22));
  if ((VAR_18 != VAR_0) && (VAR_23 == VAR_5)
      && (VAR_15 == VAR_17))
   continue;






  if (VAR_18 == VAR_7 || VAR_18 == VAR_0) {
   FUNC_3(FUNC_0(VAR_11), 0);
  }

  if (((VAR_18 == VAR_7) && (VAR_19->flags & VAR_1))
      || (VAR_18 == VAR_0)
      || (VAR_18 == VAR_8)) {
   VAR_12++;
   FUNC_11(VAR_22);
   VAR_12--;
  }
 }
}
