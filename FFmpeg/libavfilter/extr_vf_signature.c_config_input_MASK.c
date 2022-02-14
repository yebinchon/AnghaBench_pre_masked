
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {int w; int h; int time_base; TYPE_4__* dst; } ;
struct TYPE_9__ {TYPE_1__* streamcontexts; } ;
struct TYPE_8__ {int divide; int w; int h; int time_base; } ;
typedef TYPE_1__ StreamContext ;
typedef TYPE_2__ SignatureContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    SignatureContext *VAR_5 = VAR_4->priv;
    StreamContext *VAR_6 = &(VAR_5->streamcontexts[FUNC_0(VAR_3)]);

    VAR_6->time_base = VAR_3->time_base;

    VAR_6->divide = (((uint64_t) VAR_3->w/32) * (VAR_3->w/32 + 1) * (VAR_3->h/32 * VAR_3->h/32 + 1) > VAR_2 / (VAR_1 * 255));
    if (VAR_6->divide) {
        FUNC_1(VAR_4, VAR_0, "Input dimension too high for precise calculation, numbers will be rounded.\n");
    }
    VAR_6->w = VAR_3->w;
    VAR_6->h = VAR_3->h;
    return 0;
}
