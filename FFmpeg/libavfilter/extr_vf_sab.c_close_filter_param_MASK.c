
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dist_coeff; int pre_filter_buf; int * pre_filter_context; } ;
typedef TYPE_1__ FilterParam ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(FilterParam *VAR_0)
{
    if (VAR_0->pre_filter_context) {
        FUNC_1(VAR_0->pre_filter_context);
        VAR_0->pre_filter_context = ((void*)0);
    }
    FUNC_0(&VAR_0->pre_filter_buf);
    FUNC_0(&VAR_0->dist_coeff);
}
