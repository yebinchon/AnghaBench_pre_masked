
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ audio_codec; int packet_size; int swap; int dss_sp_swap_byte; scalar_t__ counter; scalar_t__ dss_header_size; } ;
typedef TYPE_1__ DSSDemuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_5, int VAR_6,
                         int64_t VAR_7, int VAR_8)
{
    DSSDemuxContext *VAR_9 = VAR_5->priv_data;
    int64_t VAR_10, VAR_11;
    uint8_t VAR_12[VAR_2];
    int VAR_13;

    if (VAR_9->audio_codec == VAR_1)
        VAR_11 = VAR_7 / 264 * 41 / 506 * 512;
    else
        VAR_11 = VAR_7 / 240 * VAR_9->packet_size / 506 * 512;

    if (VAR_11 < 0)
        VAR_11 = 0;

    VAR_11 += VAR_9->dss_header_size;

    VAR_10 = FUNC_1(VAR_5->pb, VAR_11, VAR_4);
    if (VAR_10 < 0)
        return VAR_10;

    FUNC_0(VAR_5->pb, VAR_12, VAR_2);
    VAR_9->swap = !!(VAR_12[0] & 0x80);
    VAR_13 = 2*VAR_12[1] + 2*VAR_9->swap;
    if (VAR_13 < VAR_2)
        return VAR_0;
    if (VAR_13 == VAR_2) {
        VAR_9->counter = 0;
        VAR_13 = FUNC_2(VAR_5->pb, -VAR_2);
    } else {
        VAR_9->counter = VAR_3 - VAR_13;
        VAR_13 = FUNC_2(VAR_5->pb, VAR_13 - VAR_2);
    }
    VAR_9->dss_sp_swap_byte = -1;
    return 0;
}
