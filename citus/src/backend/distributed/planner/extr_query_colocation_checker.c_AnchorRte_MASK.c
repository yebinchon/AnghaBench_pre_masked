
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * setOperations; } ;
struct TYPE_9__ {int rtable; int * jointree; } ;
struct TYPE_8__ {scalar_t__ rtekind; int relid; TYPE_4__* subquery; } ;
typedef int Relids ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef int Oid ;
typedef int Node ;
typedef int FromExpr ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int) ;
 TYPE_1__* FUNC_5 (int,int ) ;

__attribute__((used)) static RangeTblEntry *
FUNC_6(Query *VAR_3)
{
 FromExpr *VAR_4 = VAR_3->jointree;
 Relids VAR_5 = FUNC_4((Node *) VAR_4, 0);
 int VAR_6 = -1;
 RangeTblEntry *VAR_7 = ((void*)0);
 while ((VAR_6 = FUNC_3(VAR_5, VAR_6)) >= 0)
 {
  RangeTblEntry *VAR_8 = FUNC_5(VAR_6, VAR_3->rtable);
  if (VAR_7 == ((void*)0) && VAR_8->rtekind == VAR_2 &&
   FUNC_2(VAR_8->subquery) &&
   VAR_8->subquery->setOperations == ((void*)0) &&
   !FUNC_0(VAR_8->subquery))
  {

   VAR_7 = VAR_8;
  }
  else if (VAR_8->rtekind == VAR_1)
  {
   Oid VAR_9 = VAR_8->relid;

   if (FUNC_1(VAR_9) == VAR_0)
   {




    continue;
   }

   VAR_7 = VAR_8;
   break;
  }
 }

 return VAR_7;
}
