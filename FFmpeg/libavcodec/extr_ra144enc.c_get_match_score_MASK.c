
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,float const*,float*,int,int ) ;
 int FUNC_1 (float*,float const*) ;

__attribute__((used)) static void FUNC_2(float *VAR_2, const float *VAR_3, float *VAR_4,
                            const float *VAR_5, const float *VAR_6,
                            const float *VAR_7, float *VAR_8, float *VAR_9)
{
    float VAR_10, VAR_11;
    int VAR_12;

    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0, VAR_1);
    if (VAR_5)
        FUNC_1(VAR_2, VAR_5);
    if (VAR_6)
        FUNC_1(VAR_2, VAR_6);
    VAR_10 = VAR_11 = 0;
    for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
        VAR_11 += VAR_2[VAR_12] * VAR_2[VAR_12];
        VAR_10 += VAR_7[VAR_12] * VAR_2[VAR_12];
    }
    if (VAR_10 <= 0) {
        *VAR_8 = 0;
        return;
    }
    *VAR_9 = VAR_10 / VAR_11;
    *VAR_8 = *VAR_9 * VAR_10;
}
