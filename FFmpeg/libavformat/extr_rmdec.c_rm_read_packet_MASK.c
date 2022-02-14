
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_16__ {scalar_t__ discard; TYPE_1__* priv_data; } ;
struct TYPE_15__ {size_t audio_stream_num; scalar_t__ old_format; scalar_t__ audio_pkt_cnt; } ;
struct TYPE_14__ {int coded_framesize; int sub_packet_h; int audio_framesize; } ;
typedef TYPE_1__ RMStream ;
typedef TYPE_2__ RMDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,TYPE_3__*,TYPE_1__*,int,int *,int*,int,int ) ;
 int FUNC_6 (TYPE_4__*,int ,TYPE_3__*,TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_4__*,int *,int*,int*,int *) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_7, AVPacket *VAR_8)
{
    RMDemuxContext *VAR_9 = VAR_7->priv_data;
    AVStream *VAR_10 = ((void*)0);
    int VAR_11, VAR_12, VAR_13, VAR_14 = 1;
    int64_t VAR_15, VAR_16;
    int VAR_17;

    for (;;) {
        if (VAR_9->audio_pkt_cnt) {

            VAR_10 = VAR_7->streams[VAR_9->audio_stream_num];
            VAR_13 = FUNC_6(VAR_7, VAR_7->pb, VAR_10, VAR_10->priv_data, VAR_8);
            if(VAR_13 < 0)
                return VAR_13;
            VAR_17 = 0;
        } else {
            if (VAR_9->old_format) {
                RMStream *VAR_18;

                VAR_10 = VAR_7->streams[0];
                VAR_18 = VAR_10->priv_data;
                VAR_15 = VAR_4;
                VAR_12 = !VAR_18->audio_framesize ? VAR_6 :
                    VAR_18->coded_framesize * VAR_18->sub_packet_h / 2;
                VAR_17 = (VAR_14++ == 1) ? 2 : 0;
                VAR_16 = FUNC_4(VAR_7->pb);
            } else {
                VAR_12 = FUNC_7(VAR_7, &VAR_15, &VAR_17, &VAR_11, &VAR_16);
                if (VAR_12 > 0)
                    VAR_10 = VAR_7->streams[VAR_11];
            }

            if (FUNC_3(VAR_7->pb))
                return VAR_2;
            if (VAR_12 <= 0)
                return FUNC_0(VAR_5);

            VAR_13 = FUNC_5 (VAR_7, VAR_7->pb, VAR_10, VAR_10->priv_data, VAR_12, VAR_8,
                                      &VAR_14, VAR_17, VAR_15);
            if (VAR_13 < -1)
                return VAR_13;
            if((VAR_17&2) && (VAR_14&0x7F) == 1)
                FUNC_1(VAR_10, VAR_16, VAR_15, 0, 0, VAR_3);
            if (VAR_13)
                continue;
        }

        if( (VAR_10->discard >= VAR_1 && !(VAR_17&2))
           || VAR_10->discard >= VAR_0){
            FUNC_2(VAR_8);
        } else
            break;
    }

    return 0;
}
