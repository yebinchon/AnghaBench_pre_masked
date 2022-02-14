
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_7__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_9__ {TYPE_1__ fieldsInfo; } ;
struct TYPE_8__ {scalar_t__ functionId; } ;
typedef TYPE_2__ SSqlExpr ;
typedef TYPE_3__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(SSqlCmd* VAR_2) {
  for (int32_t VAR_3 = 0; VAR_3 < VAR_2->fieldsInfo.numOfOutputCols; ++VAR_3) {
    SSqlExpr* VAR_4 = FUNC_0(VAR_2, VAR_3);
    if (VAR_4->functionId == VAR_1) {
      VAR_4->functionId = VAR_0;
    }
  }
}
