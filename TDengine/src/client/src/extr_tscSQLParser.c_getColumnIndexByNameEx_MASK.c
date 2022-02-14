
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {scalar_t__ numOfTables; int * pMeterInfo; } ;
typedef TYPE_1__ SSqlCmd ;
typedef int SSQLToken ;
typedef int SColumnIndex ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;

int32_t FUNC_2(SSQLToken* VAR_2, SSqlCmd* VAR_3, SColumnIndex* VAR_4) {
  if (VAR_3->pMeterInfo == ((void*)0) || VAR_3->numOfTables == 0) {
    return VAR_0;
  }

  SSQLToken VAR_5 = *VAR_2;

  if (FUNC_1(&VAR_5, VAR_3, VAR_4) != VAR_1) {
    return VAR_0;
  }

  return FUNC_0(&VAR_5, VAR_3, VAR_4);
}
