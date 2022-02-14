
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_11__ {int nStatus; } ;
struct TYPE_10__ {scalar_t__ functionId; } ;
struct TYPE_8__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_9__ {int nAggTimeInterval; TYPE_1__ fieldsInfo; } ;
typedef TYPE_2__ SSqlCmd ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_7__* VAR_2 ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,scalar_t__) ;

int32_t FUNC_3(SSqlCmd* VAR_3) {
  const char* VAR_4 = "sample interval can not be less than 10ms.";
  const char* VAR_5 = "functions not allowed in select clause";

  if (VAR_3->nAggTimeInterval != 0 && VAR_3->nAggTimeInterval < 10) {
    FUNC_1(VAR_3, VAR_4);
    return VAR_0;
  }

  for (int32_t VAR_6 = 0; VAR_6 < VAR_3->fieldsInfo.numOfOutputCols; ++VAR_6) {
    int32_t VAR_7 = FUNC_2(VAR_3, VAR_6)->functionId;
    if (!FUNC_0(VAR_2[VAR_7].nStatus)) {
      FUNC_1(VAR_3, VAR_5);
      return VAR_0;
    }
  }

  return VAR_1;
}
