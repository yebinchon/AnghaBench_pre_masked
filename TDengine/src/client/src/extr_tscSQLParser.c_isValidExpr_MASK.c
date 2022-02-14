
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nSQLOptr; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool FUNC_0(tSQLExpr* VAR_5, tSQLExpr* VAR_6, int32_t VAR_7) {
  if (VAR_5 == ((void*)0) || (VAR_6 == ((void*)0) && VAR_7 != VAR_3)) {
    return 0;
  }
  if ((VAR_5->nSQLOptr >= VAR_2 && VAR_5->nSQLOptr <= VAR_4) ||
      (VAR_6->nSQLOptr >= VAR_2 && VAR_6->nSQLOptr <= VAR_4) ||
      (VAR_5->nSQLOptr >= VAR_1 && VAR_5->nSQLOptr <= VAR_0 && VAR_6->nSQLOptr >= VAR_1 &&
       VAR_6->nSQLOptr <= VAR_0)) {
    return 0;
  }

  return 1;
}
