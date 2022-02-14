
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,float*,float*,int ,int) ;
 float const* VAR_2 ;
 float const* VAR_3 ;
 int FUNC_1 (float*,int ,int) ;
 int FUNC_2 (int,float,float*) ;

__attribute__((used)) static void FUNC_3(const float *VAR_4, int VAR_5, float *VAR_6,
                    float VAR_7)
{
    float VAR_8[VAR_1+1], VAR_9[VAR_0+1];
    int VAR_10;

    VAR_8[0] = 1.0;
    for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        VAR_8[VAR_10+1] = VAR_4[VAR_10] * VAR_2[VAR_10];
        VAR_9[VAR_10 ] = VAR_4[VAR_10] * VAR_3 [VAR_10];
    }
    FUNC_1(VAR_8 + 11, 0, 37 * sizeof(float));

    FUNC_0(VAR_6, VAR_9, VAR_8, VAR_1,
                                 VAR_0);

    FUNC_2(VAR_5, VAR_7, VAR_6);
}
