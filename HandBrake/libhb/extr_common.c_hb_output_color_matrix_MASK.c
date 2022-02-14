
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ color_matrix_override; int color_matrix; } ;
typedef TYPE_1__ hb_job_t ;


 scalar_t__ VAR_0 ;

int FUNC_0(hb_job_t * VAR_1)
{
    if (VAR_1->color_matrix_override != VAR_0)
        return VAR_1->color_matrix_override;
    else
        return VAR_1->color_matrix;
}
