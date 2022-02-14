
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ coded; scalar_t__ prev_voiced; scalar_t__ primarylag; scalar_t__ log_gain; int nlsf; int lpc; int lpc_history; int output; } ;
typedef TYPE_1__ SilkFrame ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(SilkFrame *VAR_0)
{
    if (!VAR_0->coded)
        return;

    FUNC_0(VAR_0->output, 0, sizeof(VAR_0->output));
    FUNC_0(VAR_0->lpc_history, 0, sizeof(VAR_0->lpc_history));

    FUNC_0(VAR_0->lpc, 0, sizeof(VAR_0->lpc));
    FUNC_0(VAR_0->nlsf, 0, sizeof(VAR_0->nlsf));

    VAR_0->log_gain = 0;

    VAR_0->primarylag = 0;
    VAR_0->prev_voiced = 0;
    VAR_0->coded = 0;
}
