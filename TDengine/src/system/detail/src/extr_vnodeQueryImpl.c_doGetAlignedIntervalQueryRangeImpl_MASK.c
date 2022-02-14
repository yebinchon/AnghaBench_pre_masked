
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ nAggTimeInterval; int precision; int intervalTimeUnit; } ;
typedef TYPE_1__ SQuery ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(SQuery *VAR_1, int64_t VAR_2, int64_t VAR_3, int64_t VAR_4,
                                               int64_t *VAR_5, int64_t *VAR_6) {
  FUNC_0(VAR_2 >= VAR_3 && VAR_2 <= VAR_4);

  if (VAR_3 > (VAR_0 - VAR_1->nAggTimeInterval)) {




    FUNC_0(VAR_4 - VAR_3 < VAR_1->nAggTimeInterval);

    *VAR_5 = VAR_3;
    *VAR_6 = VAR_4;
    return;
  }

  *VAR_5 = FUNC_1(VAR_2, VAR_1->nAggTimeInterval, VAR_1->intervalTimeUnit,
                                        VAR_1->precision);
  int64_t VAR_7 = *VAR_5 + VAR_1->nAggTimeInterval - 1;

  if (*VAR_5 < VAR_3) {
    *VAR_5 = VAR_3;
  }

  if (VAR_7 < VAR_4) {
    *VAR_6 = VAR_7;
  } else {
    *VAR_6 = VAR_4;
  }
}
