
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int (* int32_to_float_fmul_scalar ) (float*,int const*,int ,int) ;} ;
typedef TYPE_1__ FmtConvertContext ;


 int FUNC_0 (float*,int const*,int ,int) ;

__attribute__((used)) static void FUNC_1(FmtConvertContext *VAR_0, float *VAR_1,
                                         const int32_t *VAR_2, const float *VAR_3,
                                         int VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 8)
        VAR_0->int32_to_float_fmul_scalar(&VAR_1[VAR_5], &VAR_2[VAR_5], *VAR_3++, 8);
}
