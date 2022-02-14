
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int script_initialized; TYPE_5__* current_sub; int ssaTrack; } ;
typedef TYPE_3__ hb_filter_private_t ;
struct TYPE_18__ {TYPE_1__* subtitle; TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_filter_object_t ;
struct TYPE_16__ {int flags; int start; long long stop; } ;
struct TYPE_19__ {TYPE_2__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_15__ {int fifo_out; int extradata_size; scalar_t__ extradata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_5__**) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(hb_filter_object_t * VAR_5,
                    hb_buffer_t ** VAR_6,
                    hb_buffer_t ** VAR_7)
{
    hb_filter_private_t * VAR_8 = VAR_5->private_data;
    hb_buffer_t * VAR_9 = *VAR_6;
    hb_buffer_t * VAR_10;

    if (!VAR_8->script_initialized)
    {
        FUNC_1(VAR_8->ssaTrack,
                                  (char*)VAR_5->subtitle->extradata,
                                  VAR_5->subtitle->extradata_size);
        VAR_8->script_initialized = 1;
    }

    if (VAR_9->s.flags & VAR_1)
    {
        *VAR_6 = ((void*)0);
        *VAR_7 = VAR_9;
        return VAR_3;
    }

    int VAR_11 = VAR_9->s.start / 90;



    while ((VAR_10 = FUNC_3(VAR_5->subtitle->fifo_out)))
    {
        if (VAR_10->s.flags & VAR_1)
        {
            FUNC_2(&VAR_10);
            if (VAR_8->current_sub != ((void*)0))
            {

                VAR_8->current_sub->s.stop = VAR_8->current_sub->s.start +
                                          90000LL * 10;
                FUNC_4(VAR_8, VAR_8->current_sub);
                FUNC_2(&VAR_8->current_sub);
            }
            break;
        }



        VAR_10->s.start /= 90;
        if (VAR_10->s.stop != VAR_0)
        {
            VAR_10->s.stop /= 90;
        }







        if (VAR_8->current_sub != ((void*)0))
        {


            VAR_8->current_sub->s.stop = VAR_10->s.start;
            FUNC_4(VAR_8, VAR_8->current_sub);
            FUNC_2(&VAR_8->current_sub);
        }
        if (VAR_10->s.flags & VAR_2)
        {


            FUNC_2(&VAR_10);
        }
        else if (VAR_10->s.stop == VAR_0)
        {


            VAR_8->current_sub = VAR_10;
            VAR_8->current_sub->s.stop = VAR_8->current_sub->s.start;
        }
        else
        {


            FUNC_4(VAR_8, VAR_10);
            FUNC_2(&VAR_10);
        }
    }
    if (VAR_8->current_sub != ((void*)0) && VAR_8->current_sub->s.start <= VAR_11)
    {



        VAR_8->current_sub->s.start = VAR_8->current_sub->s.stop;
        VAR_8->current_sub->s.stop = VAR_11 + 1;
        FUNC_4(VAR_8, VAR_8->current_sub);
    }

    FUNC_0(VAR_8, VAR_9);
    *VAR_6 = ((void*)0);
    *VAR_7 = VAR_9;

    return VAR_4;
}
