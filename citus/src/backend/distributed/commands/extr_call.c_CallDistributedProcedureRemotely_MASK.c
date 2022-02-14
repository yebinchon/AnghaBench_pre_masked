
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* funcexpr; } ;
struct TYPE_10__ {int isDistributed; } ;
struct TYPE_9__ {int funcid; } ;
typedef int Oid ;
typedef TYPE_1__ FuncExpr ;
typedef TYPE_2__ DistObjectCacheEntry ;
typedef int DestReceiver ;
typedef TYPE_3__ CallStmt ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;

bool
FUNC_2(CallStmt *VAR_1, DestReceiver *VAR_2)
{
 DistObjectCacheEntry *VAR_3 = ((void*)0);
 FuncExpr *VAR_4 = VAR_1->funcexpr;
 Oid VAR_5 = VAR_4->funcid;

 VAR_3 = FUNC_1(VAR_0, VAR_5, 0);
 if (VAR_3 == ((void*)0) || !VAR_3->isDistributed)
 {
  return 0;
 }

 return FUNC_0(VAR_1, VAR_3, VAR_4, VAR_2);
}
