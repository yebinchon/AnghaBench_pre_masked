
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* stream; } ;
typedef TYPE_3__ sync_delta_t ;
typedef TYPE_3__ hb_work_private_t ;
struct TYPE_13__ {TYPE_3__* private_data; } ;
typedef TYPE_5__ hb_work_object_t ;
struct TYPE_10__ {scalar_t__ resample; } ;
struct TYPE_11__ {int scr_delay_queue; int in_queue; int delta_list; TYPE_1__ audio; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6( hb_work_object_t * VAR_0 )
{
    hb_work_private_t * VAR_1 = VAR_0->private_data;

    if (VAR_1 == ((void*)0))
    {
        return;
    }


    if (VAR_1->stream->audio.resample)
    {
        FUNC_1(VAR_1->stream->audio.resample);
    }

    sync_delta_t * VAR_2;
    while ((VAR_2 = FUNC_4(VAR_1->stream->delta_list, 0)) != ((void*)0))
    {
        FUNC_5(VAR_1->stream->delta_list, VAR_2);
        FUNC_0(VAR_2);
    }
    FUNC_2(&VAR_1->stream->delta_list);
    FUNC_3(&VAR_1->stream->in_queue);
    FUNC_3(&VAR_1->stream->scr_delay_queue);
    FUNC_0(VAR_1);
    VAR_0->private_data = ((void*)0);
}
