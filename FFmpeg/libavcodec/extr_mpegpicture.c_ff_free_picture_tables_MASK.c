
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ref_index_buf; int * motion_val_buf; int mb_type_buf; int qscale_table_buf; int mbskip_table_buf; int mb_mean_buf; int mc_mb_var_buf; int mb_var_buf; scalar_t__ alloc_mb_height; scalar_t__ alloc_mb_width; } ;
typedef TYPE_1__ Picture ;


 int FUNC_0 (int *) ;

void FUNC_1(Picture *VAR_0)
{
    int VAR_1;

    VAR_0->alloc_mb_width =
    VAR_0->alloc_mb_height = 0;

    FUNC_0(&VAR_0->mb_var_buf);
    FUNC_0(&VAR_0->mc_mb_var_buf);
    FUNC_0(&VAR_0->mb_mean_buf);
    FUNC_0(&VAR_0->mbskip_table_buf);
    FUNC_0(&VAR_0->qscale_table_buf);
    FUNC_0(&VAR_0->mb_type_buf);

    for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
        FUNC_0(&VAR_0->motion_val_buf[VAR_1]);
        FUNC_0(&VAR_0->ref_index_buf[VAR_1]);
    }
}
