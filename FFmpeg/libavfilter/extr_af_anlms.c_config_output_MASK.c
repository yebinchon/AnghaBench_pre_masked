
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* src; } ;
struct TYPE_6__ {int kernel_size; void* tmp; void* offset; void* coeffs; void* delay; int order; } ;
typedef TYPE_1__ AudioNLMSContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    AudioNLMSContext *VAR_3 = VAR_2->priv;

    VAR_3->kernel_size = FUNC_1(VAR_3->order, 16);

    if (!VAR_3->offset)
        VAR_3->offset = FUNC_2(VAR_1, 1);
    if (!VAR_3->delay)
        VAR_3->delay = FUNC_2(VAR_1, 2 * VAR_3->kernel_size);
    if (!VAR_3->coeffs)
        VAR_3->coeffs = FUNC_2(VAR_1, 2 * VAR_3->kernel_size);
    if (!VAR_3->tmp)
        VAR_3->tmp = FUNC_2(VAR_1, VAR_3->kernel_size);
    if (!VAR_3->delay || !VAR_3->coeffs || !VAR_3->offset || !VAR_3->tmp)
        return FUNC_0(VAR_0);

    return 0;
}
