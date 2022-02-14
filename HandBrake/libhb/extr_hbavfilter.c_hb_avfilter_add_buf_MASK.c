
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_buffer_t ;
struct TYPE_3__ {int input; int * frame; } ;
typedef TYPE_1__ hb_avfilter_graph_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(hb_avfilter_graph_t * VAR_0, hb_buffer_t * VAR_1)
{
    if (VAR_1 != ((void*)0))
    {
        FUNC_1(VAR_0->frame, VAR_1);
        return FUNC_0(VAR_0->input, VAR_0->frame);
    }
    else
    {
        return FUNC_0(VAR_0->input, ((void*)0));
    }
}
