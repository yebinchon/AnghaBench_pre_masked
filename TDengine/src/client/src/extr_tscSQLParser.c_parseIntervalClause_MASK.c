
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_21__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_31__ {scalar_t__ member_0; int member_1; } ;
struct TYPE_30__ {TYPE_3__* pMeterMeta; } ;
struct TYPE_28__ {scalar_t__ type; int n; int * z; } ;
struct TYPE_29__ {TYPE_6__ interval; } ;
struct TYPE_22__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_27__ {int nAggTimeInterval; scalar_t__ numOfTables; TYPE_1__ fieldsInfo; int intervalTimeUnit; } ;
struct TYPE_24__ {int flag; } ;
struct TYPE_26__ {scalar_t__ functionId; scalar_t__ uid; TYPE_2__ colInfo; } ;
struct TYPE_25__ {scalar_t__ precision; scalar_t__ uid; } ;
struct TYPE_23__ {int aName; } ;
typedef TYPE_4__ SSqlExpr ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SSQLToken ;
typedef TYPE_7__ SQuerySQL ;
typedef TYPE_8__ SMeterMetaInfo ;
typedef int SColumnList ;
typedef TYPE_9__ SColumnIndex ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_21__* VAR_9 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int,int*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,char const*) ;
 int VAR_10 ;
 TYPE_8__* FUNC_6 (TYPE_5__*,scalar_t__) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,scalar_t__) ;
 int FUNC_8 (TYPE_5__*,int ,size_t,TYPE_9__*,int ,int ,int ) ;

int32_t FUNC_9(SSqlCmd* VAR_11, SQuerySQL* VAR_12) {
  const char* VAR_13 = "invalid query expression";
  const char* VAR_14 = "interval cannot be less than 10 ms";

  SMeterMetaInfo* VAR_15 = FUNC_6(VAR_11, 0);

  if (VAR_12->interval.type == 0) {
    return VAR_3;
  }


  SSQLToken* VAR_16 = &VAR_12->interval;
  if (FUNC_2(VAR_16->z, VAR_16->n, &VAR_11->nAggTimeInterval) != VAR_3) {
    return VAR_2;
  }


  if (VAR_15->pMeterMeta->precision == VAR_8) {
    VAR_11->nAggTimeInterval = VAR_11->nAggTimeInterval / 1000;
  }


  VAR_11->intervalTimeUnit = VAR_12->interval.z[VAR_12->interval.n - 1];


  if (VAR_11->nAggTimeInterval < VAR_10) {
    FUNC_5(VAR_11, VAR_14);
    return VAR_2;
  }


  if (FUNC_4(VAR_11)) {
    return VAR_3;
  }


  for (int32_t VAR_17 = 0; VAR_17 < VAR_11->fieldsInfo.numOfOutputCols; ++VAR_17) {
    SSqlExpr* VAR_18 = FUNC_7(VAR_11, VAR_17);
    if (VAR_18->functionId == VAR_5 && FUNC_0(VAR_18->colInfo.flag)) {
      FUNC_5(VAR_11, VAR_13);
      return VAR_2;
    }
  }


  uint64_t VAR_19 = FUNC_7(VAR_11, 0)->uid;

  int32_t VAR_20 = VAR_0;
  for (int32_t VAR_21 = 0; VAR_21 < VAR_11->numOfTables; ++VAR_21) {
    VAR_15 = FUNC_6(VAR_11, VAR_21);
    if (VAR_15->pMeterMeta->uid == VAR_19) {
      VAR_20 = VAR_21;
      break;
    }
  }

  if (VAR_20 == VAR_0) {
    return VAR_2;
  }

  SColumnIndex VAR_22 = {VAR_20, VAR_1};
  FUNC_8(VAR_11, 0, VAR_6, &VAR_22, VAR_4, VAR_7, VAR_7);

  SColumnList VAR_23 = FUNC_1(1, 0, VAR_1);
  int32_t VAR_24 = FUNC_3(VAR_11, 0, &VAR_23, VAR_7, VAR_4, VAR_9[VAR_6].aName);

  return VAR_24;
}
