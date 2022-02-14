
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; int z; } ;
struct TYPE_5__ {scalar_t__ nSQLOptr; int val; TYPE_1__ colInfo; } ;
typedef TYPE_2__ tSQLExpr ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int32_t FUNC_3(tSQLExpr* VAR_4, char** VAR_5) {
  if (VAR_4->nSQLOptr == VAR_1) {
    FUNC_1(*VAR_5, VAR_4->colInfo.z, VAR_4->colInfo.n);
    *VAR_5 += VAR_4->colInfo.n;

  } else if (VAR_4->nSQLOptr >= VAR_0 && VAR_4->nSQLOptr <= VAR_2) {
    *VAR_5 += FUNC_2(&VAR_4->val, *VAR_5);

  } else {
    FUNC_0(0);
  }

  return VAR_3;
}
