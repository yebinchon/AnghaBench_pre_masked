
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* predictor_reset_count; } ;
typedef TYPE_1__ IndividualChannelStream ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(IndividualChannelStream *VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 1; VAR_3 < 31; VAR_3++) {
        VAR_1->predictor_reset_count[VAR_3] += VAR_2;
        if (VAR_1->predictor_reset_count[VAR_3] > VAR_0)
            return VAR_3;
    }
    return 0;
}
