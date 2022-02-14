
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int scalarproduct_fixed; int butterflies_fixed; int vector_fmul_reverse; int vector_fmul_add; int vector_fmul; int vector_fmul_window; int vector_fmul_window_scaled; } ;
typedef TYPE_1__ AVFixedDSPContext ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

AVFixedDSPContext * FUNC_2(int VAR_8)
{
    AVFixedDSPContext * VAR_9 = FUNC_0(sizeof(AVFixedDSPContext));

    if (!VAR_9)
        return ((void*)0);

    VAR_9->vector_fmul_window_scaled = VAR_7;
    VAR_9->vector_fmul_window = VAR_6;
    VAR_9->vector_fmul = VAR_4;
    VAR_9->vector_fmul_add = VAR_3;
    VAR_9->vector_fmul_reverse = VAR_5;
    VAR_9->butterflies_fixed = VAR_1;
    VAR_9->scalarproduct_fixed = VAR_2;

    if (VAR_0)
        FUNC_1(VAR_9);

    return VAR_9;
}
