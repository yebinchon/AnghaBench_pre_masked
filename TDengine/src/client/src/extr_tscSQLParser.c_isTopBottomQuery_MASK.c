
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_8__ {scalar_t__ functionId; } ;
struct TYPE_6__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_7__ {TYPE_1__ fieldsInfo; } ;
typedef TYPE_2__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(SSqlCmd* VAR_2) {
  for (int32_t VAR_3 = 0; VAR_3 < VAR_2->fieldsInfo.numOfOutputCols; ++VAR_3) {
    int32_t VAR_4 = FUNC_0(VAR_2, VAR_3)->functionId;

    if (VAR_4 == VAR_1 || VAR_4 == VAR_0) {
      return 1;
    }
  }

  return 0;
}
