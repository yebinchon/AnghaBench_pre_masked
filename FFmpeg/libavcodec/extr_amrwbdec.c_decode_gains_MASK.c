
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef float int16_t ;
typedef enum Mode { ____Placeholder_Mode } Mode ;


 int const VAR_0 ;
 float** VAR_1 ;
 float** VAR_2 ;

__attribute__((used)) static void FUNC_0(const uint8_t VAR_3, const enum Mode VAR_4,
                         float *VAR_5, float *VAR_6)
{
    const int16_t *VAR_7 = (VAR_4 <= VAR_0 ? VAR_1[VAR_3] :
                                                VAR_2[VAR_3]);

    *VAR_6 = VAR_7[0] * (1.0f / (1 << 14));
    *VAR_5 = VAR_7[1] * (1.0f / (1 << 11));
}
