
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* dstpad; } ;
struct TYPE_6__ {int * (* get_audio_buffer ) (TYPE_2__*,int) ;} ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int * FUNC_0 (TYPE_2__*,int) ;
 int * FUNC_1 (TYPE_2__*,int) ;

AVFrame *FUNC_2(AVFilterLink *VAR_0, int VAR_1)
{
    AVFrame *VAR_2 = ((void*)0);

    if (VAR_0->dstpad->get_audio_buffer)
        VAR_2 = VAR_0->dstpad->get_audio_buffer(VAR_0, VAR_1);

    if (!VAR_2)
        VAR_2 = FUNC_0(VAR_0, VAR_1);

    return VAR_2;
}
