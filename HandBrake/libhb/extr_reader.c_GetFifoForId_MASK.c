
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ** fifos; scalar_t__ start_found; TYPE_5__* job; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_10__ {int video_id; } ;
typedef TYPE_3__ hb_title_t ;
struct TYPE_11__ {int id; int * fifo_in; } ;
typedef TYPE_4__ hb_subtitle_t ;
struct TYPE_12__ {int list_audio; scalar_t__ indepth_scan; int list_subtitle; int * fifo_mpeg2; TYPE_3__* title; } ;
typedef TYPE_5__ hb_job_t ;
typedef int hb_fifo_t ;
struct TYPE_8__ {int * fifo_in; } ;
struct TYPE_13__ {int id; TYPE_1__ priv; } ;
typedef TYPE_6__ hb_audio_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int) ;

__attribute__((used)) static hb_fifo_t ** FUNC_2( hb_work_private_t * VAR_0, int VAR_1 )
{
    hb_job_t * VAR_2 = VAR_0->job;
    hb_title_t * VAR_3 = VAR_2->title;
    hb_audio_t * VAR_4;
    hb_subtitle_t * VAR_5;
    int VAR_6, VAR_7;

    if (VAR_1 == VAR_3->video_id)
    {
        if (VAR_2->indepth_scan && VAR_0->start_found)
        {







            return ((void*)0);
        }
        else
        {
            VAR_0->fifos[0] = VAR_2->fifo_mpeg2;
            VAR_0->fifos[1] = ((void*)0);
            return VAR_0->fifos;
        }
    }

    for (VAR_6 = VAR_7 = 0; VAR_6 < FUNC_0( VAR_2->list_subtitle ); VAR_6++)
    {
        VAR_5 = FUNC_1( VAR_2->list_subtitle, VAR_6 );
        if (VAR_1 == VAR_5->id)
        {

            VAR_0->fifos[VAR_7++] = VAR_5->fifo_in;
        }
    }
    if (VAR_7 != 0)
    {
        VAR_0->fifos[VAR_7] = ((void*)0);
        return VAR_0->fifos;
    }

    if (!VAR_2->indepth_scan)
    {
        for (VAR_6 = VAR_7 = 0; VAR_6 < FUNC_0( VAR_2->list_audio ); VAR_6++)
        {
            VAR_4 = FUNC_1( VAR_2->list_audio, VAR_6 );
            if (VAR_1 == VAR_4->id)
            {
                VAR_0->fifos[VAR_7++] = VAR_4->priv.fifo_in;
            }
        }

        if (VAR_7 != 0)
        {
            VAR_0->fifos[VAR_7] = ((void*)0);
            return VAR_0->fifos;
        }
    }

    return ((void*)0);
}
