
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct speex_params {int packet_size; scalar_t__ final_packet_duration; } ;
struct ogg_stream {int flags; scalar_t__ lastpts; scalar_t__ granule; scalar_t__ lastdts; scalar_t__ segp; scalar_t__ nsegs; scalar_t__ pduration; struct speex_params* private; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_3__ {struct ogg* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ogg_stream*) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2, int VAR_3)
{
    struct ogg *VAR_4 = VAR_2->priv_data;
    struct ogg_stream *VAR_5 = VAR_4->streams + VAR_3;
    struct speex_params *VAR_6 = VAR_5->private;
    int VAR_7 = VAR_6->packet_size;

    if (VAR_5->flags & VAR_1 && VAR_5->lastpts != VAR_0 &&
        VAR_5->granule > 0) {



        VAR_6->final_packet_duration = VAR_5->granule - VAR_5->lastpts -
                                      VAR_7 * (FUNC_0(VAR_5) - 1);
    }

    if (!VAR_5->lastpts && VAR_5->granule > 0)

        VAR_5->lastpts = VAR_5->lastdts = VAR_5->granule - VAR_7 *
                                    FUNC_0(VAR_5);
    if (VAR_5->flags & VAR_1 && VAR_5->segp == VAR_5->nsegs &&
        VAR_6->final_packet_duration)

        VAR_5->pduration = VAR_6->final_packet_duration;
    else
        VAR_5->pduration = VAR_7;

    return 0;
}
