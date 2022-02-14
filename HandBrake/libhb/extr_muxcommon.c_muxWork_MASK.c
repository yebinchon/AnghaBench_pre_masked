
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_24__ {int track; TYPE_8__* mux; TYPE_9__* job; } ;
typedef TYPE_5__ hb_work_private_t ;
struct TYPE_25__ {int* done; TYPE_5__* private_data; } ;
typedef TYPE_6__ hb_work_object_t ;
struct TYPE_23__ {int out; int in; int flen; TYPE_3__** fifo; } ;
struct TYPE_26__ {TYPE_4__ mf; } ;
typedef TYPE_7__ hb_track_t ;
struct TYPE_27__ {int done; scalar_t__ buffered_size; int ntracks; scalar_t__ pts; scalar_t__ interleave; int mutex; TYPE_7__** track; int * allEof; int * eof; int * rdy; int * allRdy; int m; } ;
typedef TYPE_8__ hb_mux_t ;
struct TYPE_28__ {scalar_t__ pass_id; } ;
typedef TYPE_9__ hb_job_t ;
struct TYPE_20__ {int flags; } ;
struct TYPE_19__ {TYPE_1__ s; } ;
typedef TYPE_10__ hb_buffer_t ;
typedef int hb_bitvec_t ;
struct TYPE_21__ {scalar_t__ start; } ;
struct TYPE_22__ {TYPE_2__ s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,TYPE_8__*,TYPE_10__*) ;
 int FUNC_1 (TYPE_8__*,int,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int **) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_10__**) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_16( hb_work_object_t * VAR_6, hb_buffer_t ** VAR_7,
                     hb_buffer_t ** VAR_8 )
{
    hb_work_private_t * VAR_9 = VAR_6->private_data;
    hb_job_t * VAR_10 = VAR_9->job;
    hb_mux_t * VAR_11 = VAR_9->mux;
    hb_track_t * VAR_12;
    int VAR_13;
    hb_buffer_t * VAR_14 = *VAR_7;

    FUNC_13( VAR_11->mutex );
    if ( VAR_11->done )
    {
        FUNC_14( VAR_11->mutex );
        return VAR_3;
    }

    if (VAR_14->s.flags & VAR_0)
    {

        FUNC_12( &VAR_14 );
        FUNC_10(VAR_11->eof, VAR_9->track);
        FUNC_10(VAR_11->rdy, VAR_9->track);
    }
    else if ((VAR_10->pass_id != VAR_1 &&
              VAR_10->pass_id != VAR_2) ||
             FUNC_4(VAR_11->eof, VAR_9->track))
    {
        FUNC_12( &VAR_14 );
    }
    else
    {
        FUNC_0( VAR_9->track, VAR_11, VAR_14 );
    }
    *VAR_7 = ((void*)0);

    if (!FUNC_2(VAR_11->rdy, VAR_11->allRdy, VAR_11->allRdy) &&
        !FUNC_2(VAR_11->eof, VAR_11->allEof, VAR_11->allEof))
    {
        FUNC_14( VAR_11->mutex );
        return VAR_4;
    }

    hb_bitvec_t *VAR_15;
    VAR_15 = FUNC_9(0);
    FUNC_7(VAR_15, VAR_11->rdy);


    while ((FUNC_2(VAR_11->rdy, VAR_11->allRdy, VAR_11->allRdy) &&
            FUNC_3(VAR_15) && VAR_11->buffered_size > VAR_5 ) ||
           (FUNC_6(VAR_11->eof, VAR_11->allEof)))
    {
        FUNC_11(VAR_15);
        for ( VAR_13 = 0; VAR_13 < VAR_11->ntracks; ++VAR_13 )
        {
            VAR_12 = VAR_11->track[VAR_13];
            FUNC_1( VAR_11, VAR_13, VAR_11->m );
            if ( FUNC_15( VAR_12 ) )
            {


                FUNC_7(VAR_11->rdy, VAR_11->allRdy);
                break;
            }




            if (FUNC_4(VAR_11->eof, VAR_13) &&
                (VAR_12->mf.out == VAR_12->mf.in ||
                 VAR_12->mf.fifo[(VAR_12->mf.in-1) & (VAR_12->mf.flen-1)]->s.start
                     < VAR_11->pts + VAR_11->interleave))
            {
                FUNC_5(VAR_11->rdy, VAR_13);
            }
            if ( VAR_12->mf.out != VAR_12->mf.in )
            {
                FUNC_10(VAR_15, VAR_13);
            }
        }



        if (FUNC_6(VAR_11->eof, VAR_11->allEof))
        {
            for ( VAR_13 = 0; VAR_13 < VAR_11->ntracks; ++VAR_13 )
            {
                if ( VAR_11->track[VAR_13]->mf.out != VAR_11->track[VAR_13]->mf.in )
                {
                    break;
                }
            }
            if ( VAR_13 >= VAR_11->ntracks )
            {
                VAR_11->done = 1;
                *VAR_6->done = 1;
                FUNC_14( VAR_11->mutex );
                FUNC_8(&VAR_15);
                return VAR_3;
            }
        }
        VAR_11->pts += VAR_11->interleave;
    }
    FUNC_8(&VAR_15);

    FUNC_14( VAR_11->mutex );
    return VAR_4;
}
