
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {void*** lut_v10; void*** lut_u10; void*** lut_v; void*** lut_u; } ;
typedef TYPE_1__ HueContext ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(HueContext *VAR_0, const int32_t VAR_1,
                                          const int32_t VAR_2)
{
    int32_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;





    for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {

            VAR_5 = VAR_3 - 128;
            VAR_6 = VAR_4 - 128;







            VAR_7 = ((VAR_1 * VAR_5) - (VAR_2 * VAR_6) + (1 << 15) + (128 << 16)) >> 16;
            VAR_8 = ((VAR_2 * VAR_5) + (VAR_1 * VAR_6) + (1 << 15) + (128 << 16)) >> 16;


            VAR_0->lut_u[VAR_3][VAR_4] = FUNC_0(VAR_7);
            VAR_0->lut_v[VAR_3][VAR_4] = FUNC_0(VAR_8);
        }
    }
    for (VAR_3 = 0; VAR_3 < 1024; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < 1024; VAR_4++) {
            VAR_5 = VAR_3 - 512;
            VAR_6 = VAR_4 - 512;







            VAR_7 = ((VAR_1 * VAR_5) - (VAR_2 * VAR_6) + (1 << 15) + (512 << 16)) >> 16;
            VAR_8 = ((VAR_2 * VAR_5) + (VAR_1 * VAR_6) + (1 << 15) + (512 << 16)) >> 16;


            VAR_0->lut_u10[VAR_3][VAR_4] = FUNC_1(VAR_7, 10);
            VAR_0->lut_v10[VAR_3][VAR_4] = FUNC_1(VAR_8, 10);
        }
    }
}
