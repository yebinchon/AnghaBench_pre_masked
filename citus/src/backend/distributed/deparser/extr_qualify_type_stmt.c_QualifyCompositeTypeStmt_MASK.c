
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * schemaname; } ;
struct TYPE_4__ {TYPE_2__* typevar; } ;
typedef int Oid ;
typedef TYPE_1__ CompositeTypeStmt ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ) ;

void
FUNC_2(CompositeTypeStmt *VAR_0)
{
 if (VAR_0->typevar->schemaname == ((void*)0))
 {
  Oid VAR_1 = FUNC_0(VAR_0->typevar);
  VAR_0->typevar->schemaname = FUNC_1(VAR_1);
 }
}
