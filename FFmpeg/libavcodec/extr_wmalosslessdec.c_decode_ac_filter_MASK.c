
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int acfilter_order; void* acfilter_scaling; int gb; scalar_t__* acfilter_coeffs; } ;
typedef TYPE_1__ WmallDecodeCtx ;


 void* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,void*) ;

__attribute__((used)) static void FUNC_2(WmallDecodeCtx *VAR_0)
{
    int VAR_1;
    VAR_0->acfilter_order = FUNC_0(&VAR_0->gb, 4) + 1;
    VAR_0->acfilter_scaling = FUNC_0(&VAR_0->gb, 4);

    for (VAR_1 = 0; VAR_1 < VAR_0->acfilter_order; VAR_1++)
        VAR_0->acfilter_coeffs[VAR_1] = FUNC_1(&VAR_0->gb, VAR_0->acfilter_scaling) + 1;
}
