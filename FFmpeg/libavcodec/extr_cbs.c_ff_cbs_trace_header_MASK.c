
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int trace_level; int log_ctx; int trace_enable; } ;
typedef TYPE_1__ CodedBitstreamContext ;


 int FUNC_0 (int ,int ,char*,char const*) ;

void FUNC_1(CodedBitstreamContext *VAR_0,
                         const char *VAR_1)
{
    if (!VAR_0->trace_enable)
        return;

    FUNC_0(VAR_0->log_ctx, VAR_0->trace_level, "%s\n", VAR_1);
}
