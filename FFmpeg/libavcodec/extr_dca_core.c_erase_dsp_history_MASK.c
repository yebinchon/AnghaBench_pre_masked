
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ output_history_lfe_float; scalar_t__ output_history_lfe_fixed; int dcadsp_data; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(DCACoreDecoder *VAR_0)
{
    FUNC_0(VAR_0->dcadsp_data, 0, sizeof(VAR_0->dcadsp_data));
    VAR_0->output_history_lfe_fixed = 0;
    VAR_0->output_history_lfe_float = 0;
}
