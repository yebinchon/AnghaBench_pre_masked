
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
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_24__ {int list_work; int track; TYPE_7__* mux; TYPE_8__* job; } ;
typedef TYPE_4__ hb_work_private_t ;
struct TYPE_25__ {int name; int thread; int done; int fifo_in; TYPE_4__* private_data; } ;
typedef TYPE_5__ hb_work_object_t ;
struct TYPE_23__ {scalar_t__ dest; } ;
struct TYPE_26__ {int mux_data; int fifo_out; TYPE_3__ config; } ;
typedef TYPE_6__ hb_subtitle_t ;
struct TYPE_27__ {int interleave; int pts; int ntracks; TYPE_10__* m; int mutex; void* allEof; void* allRdy; void* eof; void* rdy; } ;
typedef TYPE_7__ hb_mux_t ;
struct TYPE_21__ {int num; scalar_t__ den; } ;
struct TYPE_28__ {scalar_t__ pass_id; int mux; int* die; int h; int list_subtitle; int list_audio; int mux_data; int fifo_mpeg4; TYPE_1__ vrate; int * done_error; } ;
typedef TYPE_8__ hb_job_t ;
struct TYPE_22__ {int mux_data; int fifo_out; } ;
struct TYPE_29__ {TYPE_2__ priv; } ;
typedef TYPE_9__ hb_audio_t ;
struct TYPE_20__ {int (* init ) (TYPE_10__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_7__*,int ,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_7__*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 TYPE_5__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 void* FUNC_9 (int ,int) ;
 int FUNC_10 () ;
 TYPE_10__* FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (int ,int ,TYPE_5__*,int ) ;
 int VAR_6 ;
 int FUNC_13 (TYPE_10__*) ;

__attribute__((used)) static int FUNC_14( hb_work_object_t * VAR_7, hb_job_t * VAR_8 )
{
    VAR_7->private_data = FUNC_1( sizeof( hb_work_private_t ), 1 );
    hb_work_private_t * VAR_9 = VAR_7->private_data;

    hb_mux_t * VAR_10 = FUNC_1( sizeof( hb_mux_t ), 1 );
    int VAR_11;
    hb_work_object_t * VAR_12;


    if( VAR_8->pass_id == VAR_2 || VAR_8->pass_id == VAR_3 )
    {
        switch( VAR_8->mux )
        {
            case 129:
            case 130:
            case 128:
                VAR_10->m = FUNC_11( VAR_8 );
                break;
            default:
                FUNC_4( "No muxer selected, exiting" );
                FUNC_2(VAR_10);
                *VAR_8->done_error = VAR_0;
                *VAR_8->die = 1;
                return -1;
        }
    }

    VAR_9->list_work = FUNC_8();



    int VAR_13 = 1 + FUNC_7(VAR_8->list_audio) +
                           FUNC_7(VAR_8->list_subtitle);
    VAR_10->rdy = FUNC_3(VAR_13);
    VAR_10->eof = FUNC_3(VAR_13);
    VAR_10->allRdy = FUNC_3(VAR_13);
    VAR_10->allEof = FUNC_3(VAR_13);

    VAR_10->mutex = FUNC_10();




    VAR_10->interleave = 90000. * (double)VAR_8->vrate.den / VAR_8->vrate.num;
    VAR_10->pts = VAR_10->interleave;

    if( VAR_8->pass_id == VAR_2 || VAR_8->pass_id == VAR_3 )
    {

        if( VAR_10->m )
        {
            VAR_10->m->init( VAR_10->m );
        }
    }


    VAR_9->job = VAR_8;
    VAR_9->mux = VAR_10;
    VAR_9->track = VAR_10->ntracks;
    VAR_7->fifo_in = VAR_8->fifo_mpeg4;
    FUNC_0( VAR_10, VAR_8->mux_data, 1 );

    for (VAR_11 = 0; VAR_11 < FUNC_7(VAR_8->list_audio); VAR_11++)
    {
        hb_audio_t *VAR_14 = FUNC_9( VAR_8->list_audio, VAR_11 );

        VAR_12 = FUNC_5(VAR_8->h, VAR_5);
        VAR_12->private_data = FUNC_1(sizeof(hb_work_private_t), 1);
        VAR_12->private_data->job = VAR_8;
        VAR_12->private_data->mux = VAR_10;
        VAR_12->private_data->track = VAR_10->ntracks;
        VAR_12->fifo_in = VAR_14->priv.fifo_out;
        FUNC_0(VAR_10, VAR_14->priv.mux_data, 1);
        FUNC_6(VAR_9->list_work, VAR_12);
    }

    for (VAR_11 = 0; VAR_11 < FUNC_7(VAR_8->list_subtitle); VAR_11++)
    {
        hb_subtitle_t *VAR_15 = FUNC_9( VAR_8->list_subtitle, VAR_11 );

        if (VAR_15->config.dest != VAR_4)
            continue;

        VAR_12 = FUNC_5(VAR_8->h, VAR_5);
        VAR_12->private_data = FUNC_1(sizeof(hb_work_private_t), 1);
        VAR_12->private_data->job = VAR_8;
        VAR_12->private_data->mux = VAR_10;
        VAR_12->private_data->track = VAR_10->ntracks;
        VAR_12->fifo_in = VAR_15->fifo_out;
        FUNC_0(VAR_10, VAR_15->mux_data, 0);
        FUNC_6(VAR_9->list_work, VAR_12);
    }


    for (VAR_11 = 0; VAR_11 < FUNC_7(VAR_9->list_work); VAR_11++)
    {
        VAR_12 = FUNC_9(VAR_9->list_work, VAR_11);
        VAR_12->done = VAR_7->done;
        VAR_12->thread = FUNC_12(VAR_12->name, VAR_6, VAR_12, VAR_1);
    }
    return 0;
}
