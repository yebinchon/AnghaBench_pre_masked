
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(enum AVSampleFormat VAR_2, enum AVSampleFormat VAR_3)
{
    int VAR_4 = 0;

    if (FUNC_2(VAR_2) != FUNC_2(VAR_3))
        VAR_4 ++;

    if (FUNC_0(VAR_2) < FUNC_0(VAR_3)) {
        VAR_4 += 100 * (FUNC_0(VAR_3) - FUNC_0(VAR_2));
    }else
        VAR_4 += 10 * (FUNC_0(VAR_2) - FUNC_0(VAR_3));

    if (FUNC_1(VAR_2) == VAR_1 &&
        FUNC_1(VAR_3) == VAR_0)
        VAR_4 += 20;

    if (FUNC_1(VAR_2) == VAR_0 &&
        FUNC_1(VAR_3) == VAR_1)
        VAR_4 += 2;

    return VAR_4;
}
