
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_15__ {int time_base; TYPE_7__* dst; } ;
struct TYPE_14__ {int pts; } ;
struct TYPE_13__ {scalar_t__ drop_count; TYPE_2__* ref; } ;
typedef TYPE_1__ DecimateContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_7__*,int ,char*,char*,int ,int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (TYPE_7__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    DecimateContext *VAR_3 = VAR_1->dst->priv;
    AVFilterLink *VAR_4 = VAR_1->dst->outputs[0];
    int VAR_5;

    if (VAR_3->ref && FUNC_7(VAR_1->dst, VAR_2, VAR_3->ref)) {
        VAR_3->drop_count = FUNC_0(1, VAR_3->drop_count+1);
    } else {
        FUNC_3(&VAR_3->ref);
        VAR_3->ref = VAR_2;
        VAR_3->drop_count = FUNC_1(-1, VAR_3->drop_count-1);

        if ((VAR_5 = FUNC_8(VAR_4, FUNC_2(VAR_2))) < 0)
            return VAR_5;
    }

    FUNC_4(VAR_1->dst, VAR_0,
           "%s pts:%s pts_time:%s drop_count:%d\n",
           VAR_3->drop_count > 0 ? "drop" : "keep",
           FUNC_5(VAR_2->pts), FUNC_6(VAR_2->pts, &VAR_1->time_base),
           VAR_3->drop_count);

    if (VAR_3->drop_count > 0)
        FUNC_3(&VAR_2);

    return 0;
}
