
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ nSQLOptr; struct TYPE_16__* pRight; int colInfo; struct TYPE_16__* pLeft; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;
struct TYPE_20__ {int tableIndex; } ;
struct TYPE_19__ {int precision; } ;
struct TYPE_18__ {TYPE_4__* pMeterMeta; } ;
struct TYPE_17__ {scalar_t__ stime; scalar_t__ etime; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_2__ SSqlCmd ;
typedef TYPE_3__ SMeterMetaInfo ;
typedef TYPE_4__ SMeterMeta ;
typedef TYPE_5__ SColumnIndex ;


 TYPE_5__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int32_t FUNC_5(SSqlCmd* VAR_5, tSQLExpr* VAR_6) {
  const char* VAR_7 = "invalid timestamp";
  const char* VAR_8 = "only one time stamp window allowed";

  if (VAR_6 == ((void*)0)) {
    return VAR_4;
  }

  if (!FUNC_2(VAR_6)) {
    if (VAR_6->nSQLOptr == VAR_2) {
      FUNC_3(VAR_5, VAR_8);
      return VAR_3;
    }

    FUNC_5(VAR_5, VAR_6->pLeft);

    return FUNC_5(VAR_5, VAR_6->pRight);
  } else {
    SColumnIndex VAR_9 = VAR_0;
    if (FUNC_0(&VAR_6->pLeft->colInfo, VAR_5, &VAR_9) != VAR_4) {
      return VAR_3;
    }

    SMeterMetaInfo* VAR_10 = FUNC_4(VAR_5, VAR_9.tableIndex);
    SMeterMeta* VAR_11 = VAR_10->pMeterMeta;

    tSQLExpr* VAR_12 = VAR_6->pRight;

    TSKEY VAR_13 = 0;
    TSKEY VAR_14 = VAR_1;

    if (FUNC_1(&VAR_13, &VAR_14, VAR_12, VAR_6->nSQLOptr, VAR_11->precision) != VAR_4) {
      FUNC_3(VAR_5, VAR_7);
      return VAR_3;
    }


    if (VAR_5->stime < VAR_13) {
      VAR_5->stime = VAR_13;
    }

    if (VAR_5->etime > VAR_14) {
      VAR_5->etime = VAR_14;
    }
  }

  return VAR_4;
}
