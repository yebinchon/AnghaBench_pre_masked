
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_17__ {TYPE_3__* pMeterMeta; } ;
struct TYPE_16__ {scalar_t__ member_0; scalar_t__ member_1; } ;
struct TYPE_15__ {scalar_t__ numOfColumns; } ;
struct TYPE_14__ {int bytes; int type; } ;
struct TYPE_13__ {int type; } ;
typedef int SSqlExpr ;
typedef TYPE_1__ SSqlCmd ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SMeterMeta ;
typedef TYPE_4__ SColumnIndex ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,scalar_t__) ;
 TYPE_7__* FUNC_2 (TYPE_1__*,scalar_t__) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,TYPE_4__*,int ,int ,int ) ;

SSqlExpr* FUNC_4(SSqlCmd* VAR_4, int32_t VAR_5, int32_t VAR_6, int32_t VAR_7) {
  SMeterMeta* VAR_8 = FUNC_2(VAR_4, VAR_7)->pMeterMeta;

  SSchema* VAR_9 = FUNC_1(VAR_8, VAR_6);
  int32_t VAR_10 = VAR_8->numOfColumns;

  int16_t VAR_11 = (int16_t)((VAR_6 >= VAR_10) ? VAR_1 : VAR_0);

  if (VAR_11 == VAR_1) {
    FUNC_0(VAR_4, VAR_6 - VAR_10, VAR_7);
    VAR_4->type = VAR_3;
  } else {
    VAR_4->type = VAR_2;
  }

  SColumnIndex VAR_12 = {VAR_7, VAR_6};
  SSqlExpr* VAR_13 =
      FUNC_3(VAR_4, VAR_5, VAR_11, &VAR_12, VAR_9->type, VAR_9->bytes, VAR_9->bytes);

  return VAR_13;
}
