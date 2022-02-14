
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {struct TYPE_14__* private_data; struct TYPE_14__* common; struct TYPE_14__* streams; int mutex; int list_work; int (* close ) (TYPE_2__*) ;int * thread; TYPE_1__* stream; int est_frame_count; TYPE_5__* job; } ;
typedef TYPE_2__ sync_delta_t ;
typedef TYPE_2__ hb_work_private_t ;
typedef TYPE_2__ hb_work_object_t ;
struct TYPE_15__ {scalar_t__ pass_id; int h; } ;
typedef TYPE_5__ hb_job_t ;
struct TYPE_16__ {int frame_count; } ;
typedef TYPE_6__ hb_interjob_t ;
struct TYPE_13__ {int frame_count; int min_frame_duration; int max_frame_duration; int current_duration; int scr_delay_queue; int in_queue; int delta_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int,...) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10( hb_work_object_t * VAR_1 )
{
    hb_work_private_t * VAR_2 = VAR_1->private_data;
    hb_job_t * VAR_3;

    if (VAR_2 == ((void*)0))
    {
        return;
    }
    VAR_3 = VAR_2->common->job;

    FUNC_7("sync: got %d frames, %d expected",
           VAR_2->stream->frame_count, VAR_2->common->est_frame_count );
    if (VAR_2->stream->min_frame_duration > 0 &&
        VAR_2->stream->max_frame_duration > 0 &&
        VAR_2->stream->current_duration > 0)
    {
        FUNC_7("sync: framerate min %.3f fps, max %.3f fps, avg %.3f fps",
               90000. / VAR_2->stream->max_frame_duration,
               90000. / VAR_2->stream->min_frame_duration,
               (VAR_2->stream->frame_count * 90000.) /
                VAR_2->stream->current_duration);
    }


    if( VAR_3->pass_id == VAR_0 )
    {

        hb_interjob_t * VAR_4 = FUNC_1( VAR_3->h );
        VAR_4->frame_count = VAR_2->stream->frame_count;
    }
    sync_delta_t * VAR_5;
    while ((VAR_5 = FUNC_4(VAR_2->stream->delta_list, 0)) != ((void*)0))
    {
        FUNC_5(VAR_2->stream->delta_list, VAR_5);
        FUNC_0(VAR_5);
    }
    FUNC_2(&VAR_2->stream->delta_list);
    FUNC_3(&VAR_2->stream->in_queue);
    FUNC_3(&VAR_2->stream->scr_delay_queue);


    hb_work_object_t * VAR_6;
    while ((VAR_6 = FUNC_4(VAR_2->common->list_work, 0)))
    {
        FUNC_5(VAR_2->common->list_work, VAR_6);
        if (VAR_6->thread != ((void*)0))
        {
            FUNC_8(&VAR_6->thread);
        }
        if (VAR_6->close) VAR_6->close(VAR_6);
        FUNC_0(VAR_6);
    }
    FUNC_2(&VAR_2->common->list_work);

    FUNC_6(&VAR_2->common->mutex);
    FUNC_0(VAR_2->common->streams);
    FUNC_0(VAR_2->common);
    FUNC_0(VAR_2);
    VAR_1->private_data = ((void*)0);
}
