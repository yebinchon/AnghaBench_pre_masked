
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const*,float const*,int) ;
 int FUNC_1 (float*,float const*,float,int) ;

__attribute__((used)) static void FUNC_2(float *VAR_0, const float *VAR_1, const float *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 160; VAR_3 += 40) {
        float VAR_4 = FUNC_0(VAR_1 + VAR_3, VAR_1 + VAR_3, 40);
        FUNC_1(VAR_0 + VAR_3, VAR_2 + VAR_3, VAR_4, 40);
    }
}
