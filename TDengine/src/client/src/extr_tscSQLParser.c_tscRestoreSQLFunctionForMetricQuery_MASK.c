
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_11__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_14__ {TYPE_1__ fieldsInfo; } ;
struct TYPE_13__ {scalar_t__ functionId; int resType; int resBytes; } ;
struct TYPE_12__ {int type; int bytes; } ;
typedef TYPE_2__ TAOS_FIELD ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;
typedef int SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_4__*,scalar_t__) ;
 int * FUNC_2 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,scalar_t__) ;

void FUNC_4(SSqlCmd* VAR_4) {
  SMeterMetaInfo* VAR_5 = FUNC_2(VAR_4, 0);
  if (!FUNC_0(VAR_5)) {
    return;
  }

  for (int32_t VAR_6 = 0; VAR_6 < VAR_4->fieldsInfo.numOfOutputCols; ++VAR_6) {
    SSqlExpr* VAR_7 = FUNC_3(VAR_4, VAR_6);
    TAOS_FIELD* VAR_8 = FUNC_1(VAR_4, VAR_6);

    if ((VAR_7->functionId >= VAR_0 && VAR_7->functionId <= VAR_1) ||
        (VAR_7->functionId >= VAR_3 && VAR_7->functionId <= VAR_2)) {
      VAR_7->resBytes = VAR_8->bytes;
      VAR_7->resType = VAR_8->type;
    }
  }
}
