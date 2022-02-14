
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int frame_count_out; TYPE_1__* dst; } ;
struct TYPE_12__ {int pts; } ;
struct TYPE_11__ {int is_disabled; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_3(AVFilterLink *VAR_0, const AVFrame *VAR_1)
{
    FUNC_2(VAR_0, VAR_1->pts);
    FUNC_1(VAR_0, VAR_1);
    VAR_0->dst->is_disabled = !FUNC_0(VAR_0, VAR_1);
    VAR_0->frame_count_out++;
}
