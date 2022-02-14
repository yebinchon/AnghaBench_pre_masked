
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_10__ {int nStatus; } ;
struct TYPE_9__ {scalar_t__ functionId; } ;
struct TYPE_7__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_8__ {TYPE_1__ fieldsInfo; } ;
typedef TYPE_2__ SSqlCmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,scalar_t__) ;

bool FUNC_1(SSqlCmd* VAR_3) {
  bool VAR_4 = 0;
  int32_t VAR_5 = 0;

  for (int32_t VAR_6 = 0; VAR_6 < VAR_3->fieldsInfo.numOfOutputCols; ++VAR_6) {
    int32_t VAR_7 = FUNC_0(VAR_3, VAR_6)->functionId;
    if (VAR_7 == VAR_1) {
      VAR_4 = 1;
      continue;
    }

    if ((VAR_2[VAR_7].nStatus & VAR_0) != 0) {
      VAR_5++;
    }
  }

  if (VAR_5 > 0 && VAR_4) {
    return 1;
  }

  return 0;
}
