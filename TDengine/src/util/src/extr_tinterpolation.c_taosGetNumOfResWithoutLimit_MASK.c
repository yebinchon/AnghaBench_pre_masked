
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ order; int numOfRawDataInRows; scalar_t__ startTimestamp; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SInterpolationInfo ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

int32_t FUNC_3(SInterpolationInfo* VAR_1, int64_t* VAR_2,
                                    int32_t VAR_3, int64_t VAR_4, int64_t VAR_5) {
  if (VAR_3 > 0) {
    int32_t VAR_6 = 0;

    if (VAR_1->order == VAR_0) {

      int64_t VAR_7 = VAR_2[VAR_1->numOfRawDataInRows - 1];
      VAR_6 = (int32_t)((VAR_7 - VAR_1->startTimestamp) / VAR_4) + 1;
    } else {
      TSKEY VAR_8 = VAR_2[0];
      VAR_6 = (int32_t)((VAR_1->startTimestamp - VAR_8) / VAR_4) + 1;
    }

    FUNC_1(VAR_6 >= VAR_3);
    return VAR_6;
  } else {

    if ((VAR_5 < VAR_1->startTimestamp && FUNC_0(VAR_1)) ||
        (VAR_5 > VAR_1->startTimestamp && !FUNC_0(VAR_1))) {
      return 0;
    } else {
      return (int32_t)(FUNC_2(VAR_5 - VAR_1->startTimestamp) / VAR_4) + 1;
    }
  }
}
