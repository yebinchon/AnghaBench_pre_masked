
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int dKey; } ;
struct TYPE_11__ {scalar_t__ n; int z; } ;
struct TYPE_14__ {scalar_t__ nSQLOptr; TYPE_3__ val; TYPE_1__ colInfo; } ;
typedef TYPE_4__ tSQLExpr ;
typedef size_t int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_16__ {int num; TYPE_2__* ids; } ;
struct TYPE_17__ {TYPE_6__ list; } ;
struct TYPE_15__ {scalar_t__ type; int name; } ;
struct TYPE_12__ {scalar_t__ columnIndex; } ;
typedef TYPE_5__ SSchema ;
typedef TYPE_6__ SColumnList ;
typedef TYPE_7__ SColumnIdListRes ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_4(tSQLExpr* VAR_8, SSchema* VAR_9, int32_t VAR_10, SColumnIdListRes* VAR_11) {
  if (VAR_8->nSQLOptr == VAR_1) {
    bool VAR_12 = 0;

    SColumnList* VAR_13 = &VAR_11->list;

    for (int32_t VAR_14 = 0; VAR_14 < VAR_10; ++VAR_14) {
      if (FUNC_3(VAR_8->colInfo.z, VAR_9[VAR_14].name, VAR_8->colInfo.n) == 0 &&
          VAR_8->colInfo.n == FUNC_2(VAR_9[VAR_14].name)) {
        if (VAR_9[VAR_14].type < VAR_7 || VAR_9[VAR_14].type > VAR_6) {
          return VAR_4;
        }

        if (VAR_11 != ((void*)0)) {
          VAR_13->ids[VAR_13->num++].columnIndex = (int16_t)VAR_14;
        }

        VAR_12 = 1;
      }
    }

    if (!VAR_12) {
      return VAR_4;
    }

  } else if (VAR_8->nSQLOptr == VAR_0 && (FUNC_1(VAR_8->val.dKey) || FUNC_0(VAR_8->val.dKey))) {
    return VAR_4;
  } else if (VAR_8->nSQLOptr >= VAR_3 && VAR_8->nSQLOptr <= VAR_2) {
    return VAR_4;
  }

  return VAR_5;
}
