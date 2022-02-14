
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* ac3_max_msb_abs_int16 ) (int ,int ) ;int (* ac3_lshift_int16 ) (int ,int ,int) ;} ;
struct TYPE_5__ {int windowed_samples; TYPE_1__ ac3dsp; } ;
typedef TYPE_2__ AC3EncodeContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(AC3EncodeContext *VAR_1)
{
    int VAR_2 = VAR_1->ac3dsp.ac3_max_msb_abs_int16(VAR_1->windowed_samples, VAR_0);
    VAR_2 = 14 - FUNC_0(VAR_2);
    if (VAR_2 > 0)
        VAR_1->ac3dsp.ac3_lshift_int16(VAR_1->windowed_samples, VAR_0, VAR_2);

    return VAR_2 + 6;
}
