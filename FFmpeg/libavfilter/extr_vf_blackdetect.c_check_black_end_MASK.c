
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_7__ {int time_base; } ;
struct TYPE_6__ {scalar_t__ black_end; scalar_t__ black_start; scalar_t__ black_min_duration; } ;
typedef TYPE_1__ BlackDetectContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(AVFilterContext *VAR_1)
{
    BlackDetectContext *VAR_2 = VAR_1->priv;
    AVFilterLink *VAR_3 = VAR_1->inputs[0];

    if ((VAR_2->black_end - VAR_2->black_start) >= VAR_2->black_min_duration) {
        FUNC_0(VAR_2, VAR_0,
               "black_start:%s black_end:%s black_duration:%s\n",
               FUNC_1(VAR_2->black_start, &VAR_3->time_base),
               FUNC_1(VAR_2->black_end, &VAR_3->time_base),
               FUNC_1(VAR_2->black_end - VAR_2->black_start, &VAR_3->time_base));
    }
}
