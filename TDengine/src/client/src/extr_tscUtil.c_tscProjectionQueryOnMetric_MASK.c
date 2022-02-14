
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_11__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_10__ {scalar_t__ numOfExprs; } ;
struct TYPE_13__ {scalar_t__ command; TYPE_2__ fieldsInfo; TYPE_1__ exprsInfo; } ;
struct TYPE_12__ {scalar_t__ functionId; } ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;
typedef int SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,scalar_t__) ;

bool FUNC_5(SSqlCmd* VAR_5) {
  FUNC_1(VAR_5 != ((void*)0));

  SMeterMetaInfo* VAR_6 = FUNC_2(VAR_5, 0);





  if (VAR_6 == ((void*)0) || !FUNC_0(VAR_6) ||
      VAR_5->command == VAR_4 || VAR_5->exprsInfo.numOfExprs == 0) {
    return 0;
  }


  if (FUNC_3(VAR_5)) {
    return 0;
  }


  for (int32_t VAR_7 = 0; VAR_7 < VAR_5->fieldsInfo.numOfOutputCols; ++VAR_7) {
    SSqlExpr* VAR_8 = FUNC_4(VAR_5, VAR_7);
    int32_t VAR_9 = VAR_8->functionId;
    if (VAR_9 != VAR_0 && VAR_9 != VAR_2 &&
        VAR_9 != VAR_1 && VAR_9 != VAR_3) {
      return 0;
    }
  }

  return 1;
}
