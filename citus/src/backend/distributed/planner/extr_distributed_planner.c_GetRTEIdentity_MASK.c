
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rtekind; int values_lists; } ;
typedef TYPE_1__ RangeTblEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(RangeTblEntry *VAR_2)
{
 FUNC_0(VAR_2->rtekind == VAR_1);
 FUNC_0(FUNC_1(VAR_2->values_lists, VAR_0));
 FUNC_0(FUNC_3(VAR_2->values_lists) == 1);

 return FUNC_2(VAR_2->values_lists);
}
