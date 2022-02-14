
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int rtable; TYPE_1__* jointree; } ;
struct TYPE_8__ {int rtindex; } ;
struct TYPE_7__ {int * fromlist; } ;
typedef TYPE_2__ RangeTblRef ;
typedef int RangeTblEntry ;
typedef TYPE_3__ Query ;
typedef int List ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;

RangeTblEntry *
FUNC_4(Query *VAR_0)
{
 List *VAR_1 = ((void*)0);
 RangeTblRef *VAR_2 = ((void*)0);
 RangeTblEntry *VAR_3 = ((void*)0);

 FUNC_0(FUNC_1(VAR_0));





 VAR_1 = VAR_0->jointree->fromlist;
 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_3(VAR_2->rtindex, VAR_0->rtable);

 return VAR_3;
}
