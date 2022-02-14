
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relid; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef int Query ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

Oid
FUNC_7(Query *VAR_2)
{
 RangeTblEntry *VAR_3 = ((void*)0);


 if (!FUNC_2(VAR_2))
 {
  FUNC_4(VAR_1, (FUNC_5(VAR_0),
      FUNC_6("input query is not a modification query")));
 }

 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(FUNC_3(VAR_3->relid));

 return VAR_3->relid;
}
