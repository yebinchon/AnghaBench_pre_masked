
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int code; } ;
struct TYPE_5__ {int ** pixel_model3; TYPE_2__ rc; } ;
typedef TYPE_1__ SCPRContext ;
typedef TYPE_2__ RangeCoder ;


 int FUNC_0 (TYPE_1__*,int *,int,int*) ;

__attribute__((used)) static int FUNC_1(SCPRContext * VAR_0, uint32_t *VAR_1,
                         uint32_t *VAR_2, uint32_t *VAR_3,
                         int *VAR_4, int *VAR_5)
{
    RangeCoder *VAR_6 = &VAR_0->rc;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_0, &VAR_0->pixel_model3[0][*VAR_4 + *VAR_5], VAR_6->code & 0xFFF, VAR_1);
    if (VAR_7 < 0)
        return VAR_7;

    *VAR_5 = (*VAR_4 << 6) & 0xFC0;
    *VAR_4 = *VAR_1 >> 2;

    VAR_7 = FUNC_0(VAR_0, &VAR_0->pixel_model3[1][*VAR_4 + *VAR_5], VAR_6->code & 0xFFF, VAR_2);
    if (VAR_7 < 0)
        return VAR_7;

    *VAR_5 = (*VAR_4 << 6) & 0xFC0;
    *VAR_4 = *VAR_2 >> 2;

    VAR_7 = FUNC_0(VAR_0, &VAR_0->pixel_model3[2][*VAR_4 + *VAR_5], VAR_6->code & 0xFFF, VAR_3);
    if (VAR_7 < 0)
        return VAR_7;

    *VAR_5 = (*VAR_4 << 6) & 0xFC0;
    *VAR_4 = *VAR_3 >> 2;

    return 0;
}
