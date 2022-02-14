
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct G722Band {int scale_factor; scalar_t__ s_predictor; } ;
typedef int diff ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(const struct G722Band *VAR_0, int VAR_1)
{
    int VAR_2 = FUNC_0(VAR_1 - VAR_0->s_predictor);
    int VAR_3 = 141 * VAR_0->scale_factor >> 8;

    return ((VAR_2 ^ (VAR_2 >> (sizeof(VAR_2)*8-1))) < VAR_3) + 2*(VAR_2 >= 0);
}
