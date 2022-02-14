
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ subtype; scalar_t__ def; } ;
struct TYPE_5__ {int missing_ok; int cmds; } ;
struct TYPE_4__ {scalar_t__ contype; int * pktable; } ;
typedef int RangeVar ;
typedef int Oid ;
typedef int Node ;
typedef TYPE_1__ Constraint ;
typedef TYPE_2__ AlterTableStmt ;
typedef TYPE_3__ AlterTableCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

Oid
FUNC_3(char *VAR_4)
{
 Node *VAR_5 = FUNC_0(VAR_4);
 AlterTableStmt *VAR_6 = (AlterTableStmt *) VAR_5;
 AlterTableCmd *VAR_7 = (AlterTableCmd *) FUNC_2(VAR_6->cmds);

 if (VAR_7->subtype == VAR_0)
 {
  Constraint *VAR_8 = (Constraint *) VAR_7->def;
  if (VAR_8->contype == VAR_1)
  {
   RangeVar *VAR_9 = VAR_8->pktable;

   return FUNC_1(VAR_9, VAR_3,
         VAR_6->missing_ok);
  }
 }

 return VAR_2;
}
