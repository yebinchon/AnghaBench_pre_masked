
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;


struct TYPE_26__ {TYPE_16__* context; int file; TYPE_5__* job; int frameno_in; int chapter_queue; } ;
typedef TYPE_6__ hb_work_private_t ;
struct TYPE_27__ {TYPE_6__* private_data; } ;
typedef TYPE_7__ hb_work_object_t ;
struct TYPE_24__ {scalar_t__ new_chap; } ;
struct TYPE_22__ {int height; int width; } ;
struct TYPE_28__ {TYPE_4__ s; TYPE_3__* plane; TYPE_2__ f; } ;
typedef TYPE_8__ hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_21__ {int member_0; } ;
struct TYPE_29__ {int key_frame; scalar_t__ pts; int quality; int pict_type; int * linesize; int * data; int height; int width; TYPE_1__ member_0; } ;
struct TYPE_25__ {scalar_t__ pass_id; scalar_t__ chapter_markers; } ;
struct TYPE_23__ {int stride; int data; } ;
struct TYPE_20__ {char* stats_out; int global_quality; } ;
typedef TYPE_9__ AVFrame ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_16__*,TYPE_9__*) ;
 int FUNC_1 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_7__*,int *) ;
 int FUNC_4 (int ,TYPE_8__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_6__*,TYPE_8__*) ;

__attribute__((used)) static void FUNC_7( hb_work_object_t *VAR_2, hb_buffer_t *VAR_3,
                    hb_buffer_list_t *VAR_4 )
{
    hb_work_private_t * VAR_5 = VAR_2->private_data;
    AVFrame VAR_6 = {0};
    int VAR_7;

    VAR_6.width = VAR_3->f.width;
    VAR_6.height = VAR_3->f.height;
    VAR_6.data[0] = VAR_3->plane[0].data;
    VAR_6.data[1] = VAR_3->plane[1].data;
    VAR_6.data[2] = VAR_3->plane[2].data;
    VAR_6.linesize[0] = VAR_3->plane[0].stride;
    VAR_6.linesize[1] = VAR_3->plane[1].stride;
    VAR_6.linesize[2] = VAR_3->plane[2].stride;

    if (VAR_3->s.new_chap > 0 && VAR_5->job->chapter_markers)
    {





        VAR_6.pict_type = VAR_0;
        VAR_6.key_frame = 1;
        FUNC_4(VAR_5->chapter_queue, VAR_3);
    }



    VAR_6.quality = VAR_5->context->global_quality;
    FUNC_6(VAR_5, VAR_3);
    FUNC_1(VAR_5, VAR_3);

    VAR_6.pts = VAR_5->frameno_in++;


    VAR_7 = FUNC_0(VAR_5->context, &VAR_6);
    if (VAR_7 < 0)
    {
        FUNC_5("encavcodec: avcodec_send_frame failed");
        return;
    }


    if (VAR_5->job->pass_id == VAR_1 &&
        VAR_5->context->stats_out != ((void*)0))
    {
        FUNC_2( VAR_5->file, "%s", VAR_5->context->stats_out );
    }

    FUNC_3(VAR_2, VAR_4);
}
