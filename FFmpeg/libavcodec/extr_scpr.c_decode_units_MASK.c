
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint32_t ;
struct TYPE_4__ {int cxshift; int ** pixel_model; } ;
typedef TYPE_1__ SCPRContext ;


 int FUNC_0 (TYPE_1__*,int *,int,int const*) ;

__attribute__((used)) static int FUNC_1(SCPRContext *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2, uint32_t *VAR_3,
                        int *VAR_4, int *VAR_5)
{
    const int VAR_6 = VAR_0->cxshift;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_0, &VAR_0->pixel_model[0][*VAR_4 + *VAR_5], 400, VAR_1);
    if (VAR_7 < 0)
        return VAR_7;

    *VAR_5 = (*VAR_4 << 6) & 0xFC0;
    *VAR_4 = *VAR_1 >> VAR_6;
    VAR_7 = FUNC_0(VAR_0, &VAR_0->pixel_model[1][*VAR_4 + *VAR_5], 400, VAR_2);
    if (VAR_7 < 0)
        return VAR_7;

    *VAR_5 = (*VAR_4 << 6) & 0xFC0;
    *VAR_4 = *VAR_2 >> VAR_6;
    VAR_7 = FUNC_0(VAR_0, &VAR_0->pixel_model[2][*VAR_4 + *VAR_5], 400, VAR_3);
    if (VAR_7 < 0)
        return VAR_7;

    *VAR_5 = (*VAR_4 << 6) & 0xFC0;
    *VAR_4 = *VAR_3 >> VAR_6;

    return 0;
}
