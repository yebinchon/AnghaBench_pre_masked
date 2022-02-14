
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_9__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_11__ {TYPE_2__ fieldsInfo; int type; } ;
struct TYPE_8__ {scalar_t__ colIdx; } ;
struct TYPE_10__ {scalar_t__ functionId; TYPE_1__ colInfo; } ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_3(SSqlCmd* VAR_4, bool* VAR_5) {
  FUNC_1(FUNC_0(VAR_4->type));

  *VAR_5 = 1;
  for (int32_t VAR_6 = 0; VAR_6 < VAR_4->fieldsInfo.numOfOutputCols; ++VAR_6) {
    SSqlExpr* VAR_7 = FUNC_2(VAR_4, VAR_6);

    if (VAR_7->functionId != VAR_2 &&
        !(VAR_7->functionId == VAR_1 && VAR_7->colInfo.colIdx == VAR_3)) {
      *VAR_5 = 0;
      break;
    }
  }

  return VAR_0;
}
