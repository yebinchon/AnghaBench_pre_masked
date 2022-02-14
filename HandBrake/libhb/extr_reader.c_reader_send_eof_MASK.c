
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int scr_changes; } ;
struct TYPE_12__ {TYPE_2__ demux; TYPE_3__* job; } ;
typedef TYPE_4__ hb_work_private_t ;
struct TYPE_13__ {scalar_t__ fifo_in; } ;
typedef TYPE_5__ hb_subtitle_t ;
struct TYPE_9__ {scalar_t__ fifo_in; } ;
struct TYPE_14__ {TYPE_1__ priv; } ;
typedef TYPE_6__ hb_audio_t ;
struct TYPE_11__ {int list_subtitle; int list_audio; scalar_t__ fifo_mpeg2; } ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4( hb_work_private_t * VAR_0 )
{
    int VAR_1;


    FUNC_3(VAR_0, VAR_0->job->fifo_mpeg2, FUNC_0());

    hb_audio_t *VAR_2;
    for (VAR_1 = 0; (VAR_2 = FUNC_1(VAR_0->job->list_audio, VAR_1)); ++VAR_1)
    {
        if (VAR_2->priv.fifo_in)
            FUNC_3(VAR_0, VAR_2->priv.fifo_in, FUNC_0());
    }

    hb_subtitle_t *VAR_3;
    for (VAR_1 = 0; (VAR_3 = FUNC_1(VAR_0->job->list_subtitle, VAR_1)); ++VAR_1)
    {
        if (VAR_3->fifo_in)
        {
            FUNC_3(VAR_0, VAR_3->fifo_in, FUNC_0());
        }
    }
    FUNC_2("reader: done. %d scr changes", VAR_0->demux.scr_changes);
}
