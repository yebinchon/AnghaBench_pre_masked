
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pNode; } ;
typedef TYPE_3__ tSQLExprItem ;
struct TYPE_9__ {int n; int z; void* type; } ;
struct TYPE_7__ {int nLen; int pz; } ;
struct TYPE_6__ {scalar_t__ nSQLOptr; TYPE_2__ val; TYPE_4__ colInfo; } ;
typedef TYPE_4__ SSQLToken ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(tSQLExprItem* VAR_2) {
  if (VAR_2->pNode->nSQLOptr == VAR_1) {
    VAR_2->pNode->val.nLen = FUNC_0(VAR_2->pNode->val.pz);
    VAR_2->pNode->nSQLOptr = VAR_0;

    SSQLToken* VAR_3 = &VAR_2->pNode->colInfo;
    VAR_3->type = VAR_0;
    VAR_3->z = VAR_2->pNode->val.pz;
    VAR_3->n = VAR_2->pNode->val.nLen;
  }
}
