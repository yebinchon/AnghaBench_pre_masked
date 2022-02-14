
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int metric_length; } ;
struct TYPE_5__ {void* vars; void* combs; void* diffs; } ;
typedef TYPE_1__ PullupField ;
typedef TYPE_2__ PullupContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (void**) ;

__attribute__((used)) static int FUNC_4(PullupContext *VAR_1, PullupField *VAR_2)
{
    VAR_2->diffs = FUNC_2(FUNC_1(VAR_1->metric_length, 16), sizeof(*VAR_2->diffs));
    VAR_2->combs = FUNC_2(FUNC_1(VAR_1->metric_length, 16), sizeof(*VAR_2->combs));
    VAR_2->vars = FUNC_2(FUNC_1(VAR_1->metric_length, 16), sizeof(*VAR_2->vars));

    if (!VAR_2->diffs || !VAR_2->combs || !VAR_2->vars) {
        FUNC_3(&VAR_2->diffs);
        FUNC_3(&VAR_2->combs);
        FUNC_3(&VAR_2->vars);
        return FUNC_0(VAR_0);
    }
    return 0;
}
