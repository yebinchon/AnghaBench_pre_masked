
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int limited_range; int bit_rate_scaled; int nchannels_total; int freq_range; int nsubbands; int* sb_scf; int lfe_scale; int * window; int imdct; } ;
typedef TYPE_1__ DCALbrDecoder ;


 double VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int,double) ;
 double FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(DCALbrDecoder *VAR_2)
{
    double VAR_3 = (-1.0 / (1 << 17)) * FUNC_2(1 << (2 - VAR_2->limited_range));
    int VAR_4, VAR_5 = VAR_2->bit_rate_scaled / VAR_2->nchannels_total;

    FUNC_0(&VAR_2->imdct);

    if (FUNC_1(&VAR_2->imdct, VAR_2->freq_range + 6, 1, VAR_3) < 0)
        return -1;

    for (VAR_4 = 0; VAR_4 < 32 << VAR_2->freq_range; VAR_4++)
        VAR_2->window[VAR_4] = VAR_1[VAR_4 << (2 - VAR_2->freq_range)];

    if (VAR_5 < 14000)
        VAR_3 = 0.85;
    else if (VAR_5 < 32000)
        VAR_3 = (VAR_5 - 14000) * (1.0 / 120000) + 0.85;
    else
        VAR_3 = 1.0;

    VAR_3 *= 1.0 / VAR_0;

    for (VAR_4 = 0; VAR_4 < VAR_2->nsubbands; VAR_4++) {
        if (VAR_4 < 2)
            VAR_2->sb_scf[VAR_4] = 0;
        else if (VAR_4 < 5)
            VAR_2->sb_scf[VAR_4] = (VAR_4 - 1) * 0.25 * 0.785 * VAR_3;
        else
            VAR_2->sb_scf[VAR_4] = 0.785 * VAR_3;
    }

    VAR_2->lfe_scale = (16 << VAR_2->freq_range) * 0.0000078265894;

    return 0;
}
