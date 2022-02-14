
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dstpad; } ;
struct TYPE_7__ {int * (* get_video_buffer ) (TYPE_2__*,int,int) ;} ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 int * FUNC_3 (TYPE_2__*,int,int) ;

AVFrame *FUNC_4(AVFilterLink *VAR_1, int VAR_2, int VAR_3)
{
    AVFrame *VAR_4 = ((void*)0);

    FUNC_0(((void*)0), VAR_0); FUNC_2(((void*)0), VAR_1, 0);

    if (VAR_1->dstpad->get_video_buffer)
        VAR_4 = VAR_1->dstpad->get_video_buffer(VAR_1, VAR_2, VAR_3);

    if (!VAR_4)
        VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

    return VAR_4;
}
