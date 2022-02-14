
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relid; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef int Query ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

bool
FUNC_3(Query *VAR_0)
{
 bool VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
 {
  RangeTblEntry *VAR_2 = FUNC_1(VAR_0);
  if (!FUNC_2(VAR_2->relid))
  {
   return 1;
  }
 }

 return 0;
}
