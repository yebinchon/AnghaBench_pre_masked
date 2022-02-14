
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef double int16_t ;
struct TYPE_4__ {size_t* lsf; } ;
struct TYPE_5__ {scalar_t__ cur_frame_mode; double* prev_lsf_r; double** lsp; double* prev_lsp_sub4; int lsf_q; int acelpv_ctx; TYPE_1__ frame; } ;
typedef TYPE_2__ AMRContext ;


 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (double*,float*,int) ;
 int FUNC_1 (float*,int ,int) ;
 int FUNC_2 (int *,int ,float*) ;
 double** VAR_5 ;
 double** VAR_6 ;
 double** VAR_7 ;
 double** VAR_8 ;
 double** VAR_9 ;
 double* VAR_10 ;
 int FUNC_3 (double*,double const*,int) ;
 double* VAR_11 ;

__attribute__((used)) static void FUNC_4(AMRContext *VAR_12)
{
    const uint16_t *VAR_13 = VAR_12->frame.lsf;
    int16_t VAR_14[VAR_0];
    float VAR_15[VAR_0];
    const int16_t *VAR_16;
    int VAR_17, VAR_18;

    VAR_16 = (VAR_12->cur_frame_mode == VAR_4 ? VAR_6 : VAR_5)[VAR_13[0]];
    FUNC_3(VAR_14, VAR_16, 3 * sizeof(*VAR_14));

    VAR_16 = VAR_7[VAR_13[1] << (VAR_12->cur_frame_mode <= VAR_3)];
    FUNC_3(VAR_14 + 3, VAR_16, 3 * sizeof(*VAR_14));

    VAR_16 = (VAR_12->cur_frame_mode <= VAR_3 ? VAR_9 : VAR_8)[VAR_13[2]];
    FUNC_3(VAR_14 + 6, VAR_16, 4 * sizeof(*VAR_14));


    for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++)
        VAR_15[VAR_17] = (VAR_14[VAR_17] + VAR_12->prev_lsf_r[VAR_17] * VAR_11[VAR_17]) * (VAR_1 / 8000.0) + VAR_10[VAR_17] * (1.0 / 8000.0);

    FUNC_1(VAR_15, VAR_2, VAR_0);


    FUNC_2(&VAR_12->acelpv_ctx, VAR_12->lsf_q, VAR_15);
    FUNC_3(VAR_12->prev_lsf_r, VAR_14, VAR_0 * sizeof(*VAR_14));

    FUNC_0(VAR_12->lsp[3], VAR_15, VAR_0);


    for (VAR_17 = 1; VAR_17 <= 3; VAR_17++)
        for(VAR_18 = 0; VAR_18 < VAR_0; VAR_18++)
            VAR_12->lsp[VAR_17-1][VAR_18] = VAR_12->prev_lsp_sub4[VAR_18] +
                (VAR_12->lsp[3][VAR_18] - VAR_12->prev_lsp_sub4[VAR_18]) * 0.25 * VAR_17;
}
