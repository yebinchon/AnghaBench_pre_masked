
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum CeltSpread { ____Placeholder_CeltSpread } CeltSpread ;


 int VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (float*,int,int,float,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;

__attribute__((used)) static inline void FUNC_3(float *VAR_2, uint32_t VAR_3,
                                     uint32_t VAR_4, uint32_t VAR_5,
                                     enum CeltSpread VAR_6, const int VAR_7)
{
    uint32_t VAR_8 = 0;
    float VAR_9, VAR_10;
    float VAR_11, VAR_12;
    int VAR_13;

    if (2*VAR_5 >= VAR_3 || VAR_6 == VAR_0)
        return;

    VAR_11 = (float)VAR_3 / (VAR_3 + (20 - 5*VAR_6) * VAR_5);
    VAR_12 = VAR_1 * VAR_11 * VAR_11 / 4;

    VAR_9 = FUNC_1(VAR_12);
    VAR_10 = FUNC_2(VAR_12);

    if (VAR_3 >= VAR_4 << 3) {
        VAR_8 = 1;


        while ((VAR_8 * VAR_8 + VAR_8) * VAR_4 + (VAR_4 >> 2) < VAR_3)
            VAR_8++;
    }

    VAR_3 /= VAR_4;
    for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
        if (VAR_7) {
            FUNC_0(VAR_2 + VAR_13 * VAR_3, VAR_3, 1, VAR_9, -VAR_10);
            if (VAR_8)
                FUNC_0(VAR_2 + VAR_13 * VAR_3, VAR_3, VAR_8, VAR_10, -VAR_9);
        } else {
            if (VAR_8)
                FUNC_0(VAR_2 + VAR_13 * VAR_3, VAR_3, VAR_8, VAR_10, VAR_9);
            FUNC_0(VAR_2 + VAR_13 * VAR_3, VAR_3, 1, VAR_9, VAR_10);
        }
    }
}
