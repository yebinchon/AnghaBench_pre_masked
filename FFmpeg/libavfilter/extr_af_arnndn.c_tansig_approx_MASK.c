
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float) ;
 scalar_t__ FUNC_1 (float) ;
 float* VAR_0 ;

__attribute__((used)) static inline float FUNC_2(float VAR_1)
{
    float VAR_2, VAR_3;
    float VAR_4=1;
    int VAR_5;


    if (!(VAR_1<8))
        return 1;
    if (!(VAR_1>-8))
        return -1;


    if (FUNC_1(VAR_1))
       return 0;

    if (VAR_1 < 0) {
       VAR_1=-VAR_1;
       VAR_4=-1;
    }
    VAR_5 = (int)FUNC_0(.5f+25*VAR_1);
    VAR_1 -= .04f*VAR_5;
    VAR_2 = VAR_0[VAR_5];
    VAR_3 = 1-VAR_2*VAR_2;
    VAR_2 = VAR_2 + VAR_1*VAR_3*(1 - VAR_2*VAR_1);
    return VAR_4*VAR_2;
}
