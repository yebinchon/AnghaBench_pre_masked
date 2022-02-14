
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * graph; } ;
struct TYPE_7__ {int nframes; int frame; int list; TYPE_1__ video_filters; } ;
typedef TYPE_2__ hb_work_private_t ;
typedef int hb_buffer_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(hb_work_private_t *VAR_0)
{
    FUNC_5(VAR_0);
    if (VAR_0->video_filters.graph != ((void*)0))
    {
        int VAR_1;

        FUNC_2(VAR_0->video_filters.graph, VAR_0->frame);
        VAR_1 = FUNC_3(VAR_0->video_filters.graph, VAR_0->frame);
        while (VAR_1 >= 0)
        {
            hb_buffer_t * VAR_2 = FUNC_1(VAR_0);
            FUNC_4(&VAR_0->list, VAR_2);
            FUNC_0(VAR_0->frame);
            ++VAR_0->nframes;
            VAR_1 = FUNC_3(VAR_0->video_filters.graph, VAR_0->frame);
        }
    }
    else
    {
        hb_buffer_t * VAR_3 = FUNC_1(VAR_0);
        FUNC_4(&VAR_0->list, VAR_3);
        FUNC_0(VAR_0->frame);
        ++VAR_0->nframes;
    }
}
