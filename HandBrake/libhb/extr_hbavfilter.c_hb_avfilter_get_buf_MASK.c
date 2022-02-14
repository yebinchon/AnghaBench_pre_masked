
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_buffer_t ;
struct TYPE_3__ {int frame; int out_time_base; int output; } ;
typedef TYPE_1__ hb_avfilter_graph_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;

hb_buffer_t * FUNC_3(hb_avfilter_graph_t * VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_0(VAR_0->output, VAR_0->frame);
    if (VAR_1 >= 0)
    {
        hb_buffer_t * VAR_2;
        VAR_2 = FUNC_2(VAR_0->frame, VAR_0->out_time_base);
        FUNC_1(VAR_0->frame);
        return VAR_2;
    }

    return ((void*)0);
}
