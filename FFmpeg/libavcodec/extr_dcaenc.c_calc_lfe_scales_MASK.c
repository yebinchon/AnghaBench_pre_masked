
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lfe_quant; int lfe_peak_cb; int lfe_scale_factor; scalar_t__ lfe_channel; } ;
typedef TYPE_1__ DCAEncContext ;


 int FUNC_0 (TYPE_1__*,int ,int,int *) ;

__attribute__((used)) static void FUNC_1(DCAEncContext *VAR_0)
{
    if (VAR_0->lfe_channel)
        VAR_0->lfe_scale_factor = FUNC_0(VAR_0, VAR_0->lfe_peak_cb, 11, &VAR_0->lfe_quant);
}
