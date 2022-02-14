
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nb_streams; TYPE_1__* internal; int max_probe_packets; TYPE_2__** streams; } ;
struct TYPE_7__ {scalar_t__ first_dts; int inject_global_side_data; scalar_t__ skip_samples; scalar_t__* pts_buffer; int probe_packets; scalar_t__ cur_dts; scalar_t__ last_dts_for_order_check; scalar_t__ last_IP_pts; int * parser; } ;
struct TYPE_6__ {scalar_t__ inject_global_side_data; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(AVFormatContext *VAR_3)
{
    AVStream *VAR_4;
    int VAR_5, VAR_6;

    FUNC_1(VAR_3);


    for (VAR_5 = 0; VAR_5 < VAR_3->nb_streams; VAR_5++) {
        VAR_4 = VAR_3->streams[VAR_5];

        if (VAR_4->parser) {
            FUNC_0(VAR_4->parser);
            VAR_4->parser = ((void*)0);
        }
        VAR_4->last_IP_pts = VAR_0;
        VAR_4->last_dts_for_order_check = VAR_0;
        if (VAR_4->first_dts == VAR_0)
            VAR_4->cur_dts = VAR_2;
        else

            VAR_4->cur_dts = VAR_0;

        VAR_4->probe_packets = VAR_3->max_probe_packets;

        for (VAR_6 = 0; VAR_6 < VAR_1 + 1; VAR_6++)
            VAR_4->pts_buffer[VAR_6] = VAR_0;

        if (VAR_3->internal->inject_global_side_data)
            VAR_4->inject_global_side_data = 1;

        VAR_4->skip_samples = 0;
    }
}
