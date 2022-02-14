
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ payload_size; int payload_flags; scalar_t__ opus_queued_samples; int payload_dts; int payload_pts; int payload; } ;
typedef TYPE_1__ MpegTSWriteStream ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,scalar_t__,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_1)
{
    int VAR_2;


    for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; VAR_2++) {
        AVStream *VAR_3 = VAR_1->streams[VAR_2];
        MpegTSWriteStream *VAR_4 = VAR_3->priv_data;
        if (VAR_4->payload_size > 0) {
            FUNC_0(VAR_1, VAR_3, VAR_4->payload, VAR_4->payload_size,
                             VAR_4->payload_pts, VAR_4->payload_dts,
                             VAR_4->payload_flags & VAR_0, -1);
            VAR_4->payload_size = 0;
            VAR_4->opus_queued_samples = 0;
        }
    }
}
