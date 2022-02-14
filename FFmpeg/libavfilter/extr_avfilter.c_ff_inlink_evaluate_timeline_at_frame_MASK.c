
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int* var_values; int enable; int enable_str; } ;
struct TYPE_7__ {int frame_count_out; int w; int h; int time_base; TYPE_3__* dst; } ;
struct TYPE_6__ {int pts; int pkt_pos; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,int*,int *) ;
 int FUNC_1 (int ) ;
 double FUNC_2 (int ) ;

int FUNC_3(AVFilterLink *VAR_7, const AVFrame *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_7->dst;
    int64_t VAR_10 = VAR_8->pts;
    int64_t VAR_11 = VAR_8->pkt_pos;

    if (!VAR_9->enable_str)
        return 1;

    VAR_9->var_values[VAR_3] = VAR_7->frame_count_out;
    VAR_9->var_values[VAR_5] = VAR_10 == VAR_0 ? VAR_1 : VAR_10 * FUNC_1(VAR_7->time_base);
    VAR_9->var_values[VAR_6] = VAR_7->w;
    VAR_9->var_values[VAR_2] = VAR_7->h;
    VAR_9->var_values[VAR_4] = VAR_11 == -1 ? VAR_1 : VAR_11;

    return FUNC_2(FUNC_0(VAR_9->enable, VAR_9->var_values, ((void*)0))) >= 0.5;
}
