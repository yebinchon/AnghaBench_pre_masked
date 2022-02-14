
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tristate ;
struct symbol {int dummy; } ;
struct menu {struct symbol* sym; } ;
typedef scalar_t__ gint ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int * VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct symbol*) ;
 int FUNC_3 (struct symbol*,int ) ;
 int FUNC_4 (struct symbol*,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_6(struct menu *VAR_12, gint VAR_13)
{
 struct symbol *VAR_14 = VAR_12->sym;
 tristate VAR_15;

 if (!VAR_14)
  return;

 if (VAR_13 == VAR_1)
  VAR_15 = VAR_8;
 else if (VAR_13 == VAR_0)
  VAR_15 = VAR_7;
 else if (VAR_13 == VAR_2)
  VAR_15 = VAR_11;
 else
  return;

 switch (FUNC_2(VAR_14)) {
 case 132:
 case 128:
  if (!FUNC_4(VAR_14, VAR_15))
   VAR_15 = VAR_11;
  FUNC_3(VAR_14, VAR_15);
  if (VAR_10 == VAR_3)
   FUNC_5(&VAR_9, ((void*)0));
  else if (VAR_10 == VAR_5) {
   FUNC_5(VAR_6, ((void*)0));
   FUNC_0();
  }
  else if (VAR_10 == VAR_4)
   FUNC_1();
  break;
 case 130:
 case 131:
 case 129:
 default:
  break;
 }
}
