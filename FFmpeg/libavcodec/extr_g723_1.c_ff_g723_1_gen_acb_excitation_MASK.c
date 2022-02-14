
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
typedef enum Rate { ____Placeholder_Rate } Rate ;
struct TYPE_3__ {int ad_cb_lag; int ad_cb_gain; } ;
typedef TYPE_1__ G723_1_Subframe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int*,int const*,int ) ;
 int FUNC_3 (int*,int*,int) ;

void FUNC_4(int16_t *VAR_5, int16_t *VAR_6,
                                  int VAR_7, G723_1_Subframe *VAR_8,
                                  enum Rate VAR_9)
{
    int16_t VAR_10[VAR_2 + VAR_0 - 1];
    const int16_t *VAR_11;
    int VAR_12 = VAR_7 + VAR_8->ad_cb_lag - 1;

    int VAR_13;
    int VAR_14;

    FUNC_3(VAR_10, VAR_6, VAR_12);


    if (VAR_9 == VAR_1 && VAR_7 < VAR_2 - 2) {
        VAR_11 = VAR_4;
    } else
        VAR_11 = VAR_3;


    VAR_11 += VAR_8->ad_cb_gain * 20;
    for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
        VAR_14 = FUNC_2(VAR_10 + VAR_13, VAR_11, VAR_0);
        VAR_5[VAR_13] = FUNC_1(1 << 15, FUNC_0(VAR_14, VAR_14)) >> 16;
    }
}
