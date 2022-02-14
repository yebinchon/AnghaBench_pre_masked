
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int int64_t ;
struct TYPE_8__ {int pb; int * streams; TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ track_gain; scalar_t__ album_gain; int track_peak; } ;
struct TYPE_6__ {int xing_offset; long long frames; long long size; int pos; long long* bag; int delay; int padding; long long audio_size; int audio_crc; int xing_frame_size; scalar_t__* xing_frame; int xing_frame_offset; int has_variable_bitrate; } ;
typedef TYPE_1__ MP3Context ;
typedef TYPE_2__ AVReplayGain ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,long long) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char,char,float,char) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,scalar_t__*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int ,char*) ;
 long long FUNC_10 (int ,int,int) ;
 scalar_t__ FUNC_11 (int ,int ,int*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,scalar_t__*,int ) ;

__attribute__((used)) static void FUNC_15(AVFormatContext *VAR_7)
{
    MP3Context *VAR_8 = VAR_7->priv_data;
    AVReplayGain *VAR_9;
    uint16_t VAR_10;
    uint8_t *VAR_11;
    int VAR_12, VAR_13;
    int64_t VAR_14 = FUNC_13(VAR_7->pb);


    if (!VAR_8->has_variable_bitrate)
        FUNC_3(VAR_8->xing_frame + VAR_8->xing_offset, FUNC_6('I', 'n', 'f', 'o'));

    FUNC_2(VAR_8->xing_frame + VAR_8->xing_offset + 8, VAR_8->frames);
    FUNC_2(VAR_8->xing_frame + VAR_8->xing_offset + 12, VAR_8->size);

    VAR_11 = VAR_8->xing_frame + VAR_8->xing_offset + 16;
    VAR_11[0] = 0;
    for (VAR_12 = 1; VAR_12 < VAR_6; ++VAR_12) {
        int VAR_15 = VAR_12 * VAR_8->pos / VAR_6;
        int VAR_16 = 256LL * VAR_8->bag[VAR_15] / VAR_8->size;
        VAR_11[VAR_12] = FUNC_5(VAR_16, 255);
    }


    VAR_9 = (AVReplayGain*)FUNC_11(VAR_7->streams[0], VAR_2,
                                                &VAR_13);
    if (VAR_9 && VAR_13 >= sizeof(*VAR_9)) {
        uint16_t VAR_17;

        FUNC_2(VAR_8->xing_frame + VAR_8->xing_offset + 131,
                FUNC_10(VAR_9->track_peak, 1 << 23, 100000));

        if (VAR_9->track_gain != VAR_3) {
            VAR_17 = FUNC_4(VAR_9->track_gain / 10000) & ((1 << 9) - 1);
            VAR_17 |= (VAR_9->track_gain < 0) << 9;
            VAR_17 |= 1 << 13;
            FUNC_0(VAR_8->xing_frame + VAR_8->xing_offset + 135, VAR_17);
        }

        if (VAR_9->album_gain != VAR_3) {
            VAR_17 = FUNC_4(VAR_9->album_gain / 10000) & ((1 << 9) - 1);
            VAR_17 |= (VAR_9->album_gain < 0) << 9;
            VAR_17 |= 1 << 14;
            FUNC_0(VAR_8->xing_frame + VAR_8->xing_offset + 137, VAR_17);
        }
    }


    if (VAR_8->delay >= 1 << 12) {
        VAR_8->delay = (1 << 12) - 1;
        FUNC_9(VAR_7, VAR_1, "Too many samples of initial padding.\n");
    }
    if (VAR_8->padding >= 1 << 12) {
        VAR_8->padding = (1 << 12) - 1;
        FUNC_9(VAR_7, VAR_1, "Too many samples of trailing padding.\n");
    }
    FUNC_1(VAR_8->xing_frame + VAR_8->xing_offset + 141, (VAR_8->delay << 12) + VAR_8->padding);

    FUNC_2(VAR_8->xing_frame + VAR_8->xing_offset + VAR_5 - 8, VAR_8->audio_size);
    FUNC_0(VAR_8->xing_frame + VAR_8->xing_offset + VAR_5 - 4, VAR_8->audio_crc);

    VAR_10 = FUNC_7(FUNC_8(VAR_0), 0, VAR_8->xing_frame, 190);
    FUNC_0(VAR_8->xing_frame + VAR_8->xing_offset + VAR_5 - 2, VAR_10);

    FUNC_12(VAR_7->pb, VAR_8->xing_frame_offset, VAR_4);
    FUNC_14(VAR_7->pb, VAR_8->xing_frame, VAR_8->xing_frame_size);
    FUNC_12(VAR_7->pb, VAR_14, VAR_4);
}
