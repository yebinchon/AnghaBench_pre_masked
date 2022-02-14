
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_15__ {scalar_t__ codec_type; scalar_t__ sample_rate; } ;
struct TYPE_14__ {TYPE_3__* priv_data; } ;
struct TYPE_10__ {int den; scalar_t__ num; } ;
struct TYPE_13__ {TYPE_1__ avg_frame_rate; TYPE_9__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int mux_rate; int pcr_period_ms; scalar_t__ first_pcr; } ;
struct TYPE_11__ {int pcr_period; scalar_t__ last_pcr; } ;
typedef TYPE_2__ MpegTSWriteStream ;
typedef TYPE_3__ MpegTSWrite ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_9__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_5, AVStream *VAR_6)
{
    MpegTSWrite *VAR_7 = VAR_5->priv_data;
    MpegTSWriteStream *VAR_8 = VAR_6->priv_data;

    if (VAR_7->mux_rate > 1 || VAR_7->pcr_period_ms >= 0) {
        int VAR_9 = VAR_7->pcr_period_ms == -1 ? VAR_3 : VAR_7->pcr_period_ms;
        VAR_8->pcr_period = FUNC_2(VAR_9, VAR_4, 1000);
    } else {

        int64_t VAR_10 = 0;
        if (VAR_6->codecpar->codec_type == VAR_0) {
            int VAR_11 = FUNC_0(VAR_6->codecpar, 0);
            if (!VAR_11) {
               FUNC_1(VAR_5, VAR_1, "frame size not set\n");
               VAR_11 = 512;
            }
            VAR_10 = FUNC_3(VAR_11, VAR_4, VAR_6->codecpar->sample_rate, VAR_2);
        } else if (VAR_6->avg_frame_rate.num) {
            VAR_10 = FUNC_3(VAR_6->avg_frame_rate.den, VAR_4, VAR_6->avg_frame_rate.num, VAR_2);
        }
        if (VAR_10 > 0 && VAR_10 <= VAR_4 / 10)
            VAR_8->pcr_period = VAR_10 * (VAR_4 / 10 / VAR_10);
        else
            VAR_8->pcr_period = 1;
    }


    VAR_8->last_pcr = VAR_7->first_pcr - VAR_8->pcr_period;
}
