
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {double* frame_metric; int out_last_stop; int frame_duration; scalar_t__ frame_analysis_duration; int frame_rate_list; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_6__ {scalar_t__ stop; scalar_t__ start; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;


 TYPE_3__* FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(hb_filter_private_t * VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;
    double * VAR_4 = VAR_0->frame_metric;
    hb_buffer_t * VAR_5, * VAR_6;
    double VAR_7;






    VAR_7 = VAR_0->out_last_stop + VAR_0->frame_duration * (VAR_1 - 1);



    VAR_5 = FUNC_0(VAR_0->frame_rate_list, VAR_1 - 1);


    if (VAR_5->s.stop >= (int64_t)VAR_7)
    {
        return -1;
    }

    VAR_6 = FUNC_0(VAR_0->frame_rate_list, 0);
    VAR_3 = 0;
    for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++)
    {
        hb_buffer_t * VAR_8 = FUNC_0(VAR_0->frame_rate_list, VAR_2);

        if (VAR_8->s.stop - VAR_6->s.start > VAR_0->frame_analysis_duration)
        {
            break;
        }
        if (VAR_3 < 0 || VAR_4[VAR_2] < VAR_4[VAR_3])
        {
            VAR_3 = VAR_2;
        }
    }

    VAR_7 = VAR_0->out_last_stop + VAR_0->frame_duration * (VAR_2 - 1);
    VAR_5 = FUNC_0(VAR_0->frame_rate_list, VAR_2 - 1);


    if (VAR_5->s.stop >= (int64_t)VAR_7)
    {
        return -1;
    }

    return VAR_3;
}
