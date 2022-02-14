
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct G722Band {int scale_factor; scalar_t__ s_predictor; } ;
typedef int diff ;


 int FUNC_0 (scalar_t__) ;
 int* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(const struct G722Band* VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_0(VAR_2 - VAR_1->s_predictor);

    int VAR_4 = VAR_3 ^ (VAR_3 >> (sizeof(VAR_3)*8-1));
    int VAR_5 = 0;
    VAR_4 = (VAR_4 + 1) << 10;
    if (VAR_4 > VAR_0[8] * VAR_1->scale_factor)
        VAR_5 = 9;
    while (VAR_5 < 29 && VAR_4 > VAR_0[VAR_5] * VAR_1->scale_factor)
        VAR_5++;
    return (VAR_3 < 0 ? (VAR_5 < 2 ? 63 : 33) : 61) - VAR_5;
}
