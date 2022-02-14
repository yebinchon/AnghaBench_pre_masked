
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef double int64_t ;
struct TYPE_19__ {int cfr; double out_last_stop; int frame_analysis_depth; double frame_duration; int count_frames; int dups; scalar_t__* frame_metric; int frame_rate_list; int drops; int gamma_lut; int sequence; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_18__ {double stop; double start; double pcr; scalar_t__ new_chap; } ;
struct TYPE_20__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_3__**) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (int ,int) ;
 int FUNC_10 (int ,TYPE_3__*) ;
 int FUNC_11 (char*,double,double,...) ;
 scalar_t__ FUNC_12 (int ,TYPE_3__*,TYPE_3__*) ;
 int VAR_1 ;

__attribute__((used)) static hb_buffer_t * FUNC_13( hb_filter_private_t * VAR_2,
                                        hb_buffer_t * VAR_3 )
{

    if (VAR_2->cfr == 0)
    {
        ++VAR_2->count_frames;
        VAR_2->out_last_stop = VAR_3->s.stop;
        return VAR_3;
    }

    int VAR_4;


    if (VAR_3 != ((void*)0))
    {
        if (VAR_2->out_last_stop == (int64_t)VAR_0)
        {
            VAR_2->out_last_stop = VAR_3->s.start;
        }




        FUNC_7(VAR_2->frame_rate_list, VAR_3);
        VAR_4 = FUNC_8(VAR_2->frame_rate_list);
        if (VAR_4 < 2)
        {
            return ((void*)0);
        }

        hb_buffer_t * VAR_5, * VAR_6;
        VAR_5 = FUNC_9(VAR_2->frame_rate_list, VAR_4 - 2);
        VAR_6 = FUNC_9(VAR_2->frame_rate_list, VAR_4 - 1);

        VAR_2->frame_metric[VAR_4 - 1] = FUNC_12(VAR_2->gamma_lut,
                                                    VAR_5, VAR_6);

        if (VAR_4 < VAR_2->frame_analysis_depth)
        {
            return ((void*)0);
        }
    }
    else
    {
        VAR_4 = FUNC_8(VAR_2->frame_rate_list);
    }

    hb_buffer_list_t VAR_7;
    hb_buffer_t * VAR_8;
    double VAR_9;
    int VAR_10;

    FUNC_6(&VAR_7);

    VAR_10 = FUNC_1(VAR_2, VAR_4);
    if (VAR_10 >= 0)
    {
        VAR_8 = FUNC_9(VAR_2->frame_rate_list, VAR_10);
        FUNC_10(VAR_2->frame_rate_list, VAR_8);
        FUNC_3(&VAR_8);
        FUNC_0(VAR_2->frame_metric, VAR_10, VAR_4);
        ++VAR_2->drops;
        return ((void*)0);
    }

    VAR_8 = FUNC_9(VAR_2->frame_rate_list, 0);







    FUNC_10(VAR_2->frame_rate_list, VAR_8);
    FUNC_5(&VAR_7, VAR_8);
    FUNC_0(VAR_2->frame_metric, 0, VAR_4);


    VAR_8->s.start = VAR_2->out_last_stop;
    VAR_9 = VAR_2->out_last_stop + VAR_2->frame_duration;





    ++VAR_2->count_frames;
    if (VAR_2->cfr > 1)
    {


        if (VAR_8->s.stop < VAR_9)
        {
            VAR_8->s.stop = VAR_2->out_last_stop = VAR_9;
        }
        else
        {
            VAR_2->out_last_stop = VAR_8->s.stop;
        }
    }
    else
    {




        double VAR_11 = (double)VAR_8->s.stop - VAR_9;
        VAR_8->s.stop = VAR_2->out_last_stop = VAR_9;
        for (; VAR_11 >= VAR_2->frame_duration; VAR_11 -= VAR_2->frame_duration)
        {

            hb_buffer_t *VAR_12 = FUNC_4( VAR_8 );
            VAR_12->s.new_chap = 0;
            VAR_12->s.start = VAR_9;
            VAR_9 += VAR_2->frame_duration;
            VAR_12->s.stop = VAR_2->out_last_stop = VAR_9;
            FUNC_5(&VAR_7, VAR_12);
            ++VAR_2->dups;
            ++VAR_2->count_frames;
        }
    }

    return FUNC_6(&VAR_7);
}
