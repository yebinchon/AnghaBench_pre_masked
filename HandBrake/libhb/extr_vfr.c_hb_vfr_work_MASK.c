
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_19__ {scalar_t__* last_start; scalar_t__* last_stop; int* lost_time; int total_lost_time; int extended_frames; int total_gained_time; int delay_queue; int drops; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_20__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_filter_object_t ;
struct TYPE_18__ {int flags; scalar_t__ start; scalar_t__ stop; } ;
struct TYPE_21__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8( hb_filter_object_t * VAR_3,
                        hb_buffer_t ** VAR_4,
                        hb_buffer_t ** VAR_5 )
{
    hb_filter_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t * VAR_7 = *VAR_4;
    hb_buffer_t * VAR_8 = ((void*)0);

    *VAR_4 = ((void*)0);
    *VAR_5 = ((void*)0);

    if (VAR_7->s.flags & VAR_0)
    {
        hb_buffer_list_t VAR_9;
        hb_buffer_t * VAR_10;
        int VAR_11 = 2;


        FUNC_4(&VAR_9);
        while ((VAR_10 = FUNC_5(VAR_6->delay_queue)) != ((void*)0))
        {
            VAR_10->s.start = VAR_6->last_start[VAR_11];
            VAR_10->s.stop = VAR_6->last_stop[VAR_11--];

            FUNC_3(&VAR_9, FUNC_0(VAR_6, VAR_10));
        }
        FUNC_3(&VAR_9, FUNC_1(VAR_6));
        FUNC_3(&VAR_9, VAR_7);
        *VAR_5 = FUNC_4(&VAR_9);
        return VAR_1;
    }



    if (FUNC_7(VAR_6->delay_queue) > 0 && VAR_7->s.start > VAR_6->last_stop[0])
    {
        int64_t VAR_12 = VAR_7->s.start - VAR_6->last_stop[0];
        VAR_6->lost_time[0] += (VAR_12 / 4);
        VAR_6->lost_time[1] += (VAR_12 / 4);
        VAR_6->lost_time[2] += (VAR_12 / 4);
        VAR_6->lost_time[3] += ( VAR_12 - 3 * (VAR_12 / 4) );

        VAR_6->total_lost_time += VAR_12;
    }
    else if ( VAR_7->s.stop <= VAR_6->last_stop[0] )
    {


        ++VAR_6->drops;
        FUNC_2(&VAR_7);
        return VAR_2;
    }



    int VAR_13;
    for( VAR_13 = 3; VAR_13 >= 1; VAR_13-- )
    {
        VAR_6->last_start[VAR_13] = VAR_6->last_start[VAR_13-1];
        VAR_6->last_stop[VAR_13] = VAR_6->last_stop[VAR_13-1];
    }



    if (FUNC_7(VAR_6->delay_queue) == 0)
    {
        VAR_6->last_start[0] = VAR_7->s.start;
        VAR_6->last_stop[0] = VAR_7->s.stop;
    }
    else
    {
        VAR_6->last_start[0] = VAR_6->last_stop[1];
        VAR_6->last_stop[0] = VAR_6->last_start[0] + (VAR_7->s.stop - VAR_7->s.start);
    }

    FUNC_6( VAR_6->delay_queue, VAR_7 );







    if (FUNC_7(VAR_6->delay_queue) < 4)
    {
        *VAR_5 = ((void*)0);
        return VAR_2;
    }

    VAR_8 = FUNC_5(VAR_6->delay_queue);



    if( VAR_6->lost_time[3] > 0 )
    {
        int VAR_14 = 0;

        for( VAR_13 = 3; VAR_13 >= 0; VAR_13-- )
        {
            VAR_6->last_start[VAR_13] += VAR_14;
            VAR_6->last_stop[VAR_13] += VAR_6->lost_time[VAR_13] + VAR_14;


            VAR_6->total_gained_time += VAR_6->lost_time[VAR_13];
            VAR_14 += VAR_6->lost_time[VAR_13];

            VAR_6->lost_time[VAR_13] = 0;


            VAR_6->extended_frames++;
        }
    }
    VAR_8->s.start = VAR_6->last_start[3];
    VAR_8->s.stop = VAR_6->last_stop[3];

    *VAR_5 = FUNC_0(VAR_6, VAR_8);

    return VAR_2;
}
