
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* sum_square_butterfly_float ) (float*,float const*,float const*,int) ;} ;
struct TYPE_5__ {TYPE_1__ ac3dsp; } ;
typedef TYPE_2__ AC3EncodeContext ;


 int FUNC_0 (float*,float const*,float const*,int) ;

__attribute__((used)) static void FUNC_1(AC3EncodeContext *VAR_0, float VAR_1[4],
                                 const float *VAR_2, const float *VAR_3,
                                 int VAR_4)
{
    VAR_0->ac3dsp.sum_square_butterfly_float(VAR_1, VAR_2, VAR_3, VAR_4);
}
