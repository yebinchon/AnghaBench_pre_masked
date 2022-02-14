
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_8__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_11__ {int groupbyExpr; TYPE_1__ fieldsInfo; } ;
struct TYPE_9__ {int colId; } ;
struct TYPE_10__ {scalar_t__ functionId; TYPE_2__ colInfo; } ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_3__* FUNC_1 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(SSqlCmd* VAR_1) {
  bool VAR_2 = 1;

  for (int32_t VAR_3 = 0; VAR_3 < VAR_1->fieldsInfo.numOfOutputCols; ++VAR_3) {
    SSqlExpr* VAR_4 = FUNC_1(VAR_1, VAR_3);
    if (VAR_4->functionId != VAR_0) {
      continue;
    }

    if (!FUNC_0(&VAR_1->groupbyExpr, VAR_4->colInfo.colId)) {
      VAR_2 = 0;
      break;
    }
  }


  return VAR_2;
}
