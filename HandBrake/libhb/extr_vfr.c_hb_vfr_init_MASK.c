
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hb_filter_private_s {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {double num; double den; } ;
struct TYPE_8__ {int cfr; int frame_analysis_depth; int frame_analysis_duration; double frame_duration; scalar_t__ out_last_stop; TYPE_6__ vrate; scalar_t__* lost_time; scalar_t__ total_gained_time; scalar_t__ total_lost_time; scalar_t__* last_stop; scalar_t__* last_start; scalar_t__ extended_frames; scalar_t__ dropped_frames; int frame_rate_list; int delay_queue; int job; int * frame_metric; TYPE_6__ input_vrate; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_9__ {int settings; TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
struct TYPE_10__ {int cfr; TYPE_6__ vrate; int job; } ;
typedef TYPE_3__ hb_filter_init_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (double) ;
 int FUNC_3 (int*,int ,char*) ;
 int FUNC_4 (TYPE_6__*,int ,char*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(hb_filter_object_t *VAR_3, hb_filter_init_t *VAR_4)
{
    VAR_3->private_data = FUNC_1(1, sizeof(struct hb_filter_private_s));
    hb_filter_private_t *VAR_5 = VAR_3->private_data;
    FUNC_0(VAR_5);

    VAR_5->cfr = VAR_4->cfr;
    VAR_5->input_vrate = VAR_5->vrate = VAR_4->vrate;
    FUNC_3(&VAR_5->cfr, VAR_3->settings, "mode");
    FUNC_4(&VAR_5->vrate, VAR_3->settings, "rate");


    VAR_5->frame_analysis_depth = 2;



    double VAR_6 = (double)VAR_5->input_vrate.num / VAR_5->input_vrate.den;
    double VAR_7 = (double)VAR_5->vrate.num / VAR_5->vrate.den;
    if (VAR_6 > VAR_7)
    {





        double VAR_8 = VAR_6 / VAR_7;
        if (VAR_8 > 1.0 && VAR_8 < 2.0)
        {
            VAR_8 = 1 / (VAR_8 - 1);
        }
        VAR_5->frame_analysis_depth = FUNC_2(VAR_8) + 1;


        if (VAR_5->frame_analysis_depth > VAR_2)
        {
            VAR_5->frame_analysis_depth = VAR_2;
        }
    }
    VAR_5->frame_analysis_duration = VAR_5->frame_analysis_depth * 90000 / VAR_6;
    VAR_5->frame_metric = FUNC_1(VAR_5->frame_analysis_depth, sizeof(double));
    VAR_5->frame_metric[0] = VAR_1;

    VAR_5->job = VAR_4->job;


    VAR_5->delay_queue = FUNC_5( 8, 1 );
    VAR_5->frame_rate_list = FUNC_6();







    VAR_5->dropped_frames = 0;
    VAR_5->extended_frames = 0;
    VAR_5->last_start[0] = 0;
    VAR_5->last_stop[0] = 0;
    VAR_5->total_lost_time = 0;
    VAR_5->total_gained_time = 0;
    VAR_5->lost_time[0] = 0;
    VAR_5->lost_time[1] = 0;
    VAR_5->lost_time[2] = 0;
    VAR_5->lost_time[3] = 0;

    if (VAR_5->cfr == 2)
    {


        double VAR_9 = (double)VAR_4->vrate.num / VAR_4->vrate.den;
        double VAR_10 = (double)VAR_5->vrate.num / VAR_5->vrate.den;
        if (VAR_9 > VAR_10)
        {


            VAR_4->vrate = VAR_5->vrate;
        }
    }
    else
    {
        VAR_4->vrate = VAR_5->vrate;
    }
    VAR_5->frame_duration = (double)VAR_5->vrate.den * 90000. / VAR_5->vrate.num;
    VAR_5->out_last_stop = (int64_t)VAR_0;
    VAR_4->cfr = VAR_5->cfr;

    return 0;
}
