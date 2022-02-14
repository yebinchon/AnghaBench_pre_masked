
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; int number; struct TYPE_7__* link; } ;
typedef TYPE_1__* Nonterm ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (char*,char*) ;

Nonterm FUNC_4(char *VAR_5) {
 Nonterm VAR_6 = FUNC_2(VAR_5), *VAR_7 = &VAR_3;

 if (VAR_6 && VAR_6->kind == VAR_0)
  return VAR_6;
 if (VAR_6 && VAR_6->kind == VAR_1)
  FUNC_3("`%s' is a terminal\n", VAR_5);
 VAR_6 = FUNC_1(VAR_5);
 VAR_6->kind = VAR_0;
 VAR_6->number = ++VAR_2;
 if (VAR_6->number == 1)
  VAR_4 = VAR_6;
 while (*VAR_7 && (*VAR_7)->number < VAR_6->number)
  VAR_7 = &(*VAR_7)->link;
 FUNC_0(*VAR_7 == 0 || (*VAR_7)->number != VAR_6->number);
 VAR_6->link = *VAR_7;
 *VAR_7 = VAR_6;
 return VAR_6;
}
