
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwrContext {double** matrix; double** matrix_flt; int user_in_ch_count; int user_out_ch_count; int rematrix_custom; int user_out_ch_layout; int user_in_ch_layout; scalar_t__ in_convert; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (double**,int ,int) ;

int FUNC_3(struct SwrContext *VAR_1, const double *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;

    if (!VAR_1 || VAR_1->in_convert)
        return FUNC_0(VAR_0);
    FUNC_2(VAR_1->matrix, 0, sizeof(VAR_1->matrix));
    FUNC_2(VAR_1->matrix_flt, 0, sizeof(VAR_1->matrix_flt));
    VAR_4 = (VAR_1->user_in_ch_count > 0) ? VAR_1->user_in_ch_count :
        FUNC_1(VAR_1->user_in_ch_layout);
    VAR_5 = (VAR_1->user_out_ch_count > 0) ? VAR_1->user_out_ch_count :
        FUNC_1(VAR_1->user_out_ch_layout);
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
            VAR_1->matrix_flt[VAR_7][VAR_6] = VAR_1->matrix[VAR_7][VAR_6] = VAR_2[VAR_6];
        VAR_2 += VAR_3;
    }
    VAR_1->rematrix_custom = 1;
    return 0;
}
