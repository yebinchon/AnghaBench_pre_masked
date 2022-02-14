
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int pts; unsigned char* data; int stream_index; int pos; } ;
struct TYPE_12__ {int video_pts; unsigned int track_count; TYPE_1__* tracks; int video_stream_index; } ;
struct TYPE_11__ {int channels; int audio_pts; int bits; int adpcm; int stream_index; } ;
typedef TYPE_2__ FourxmDemuxContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned char*) ;
 int VAR_0 ;

 int FUNC_2 (int *,TYPE_3__*,unsigned int) ;
 int FUNC_3 (TYPE_3__*,unsigned int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned char*,unsigned int) ;
 unsigned int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (int *) ;




 int FUNC_11 (unsigned char*,unsigned char*,int) ;




__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_1,
                              AVPacket *VAR_2)
{
    FourxmDemuxContext *VAR_3 = VAR_1->priv_data;
    AVIOContext *VAR_4 = VAR_1->pb;
    unsigned int VAR_5;
    unsigned int VAR_6;
    int VAR_7 = 0;
    unsigned int VAR_8;
    int VAR_9 = 0;
    unsigned char VAR_10[8];
    int VAR_11;

    while (!VAR_9) {
        if ((VAR_7 = FUNC_7(VAR_1->pb, VAR_10, 8)) < 0)
            return VAR_7;
        VAR_5 = FUNC_1(&VAR_10[0]);
        VAR_6 = FUNC_1(&VAR_10[4]);
        if (FUNC_6(VAR_4))
            return FUNC_0(VAR_0);
        switch (VAR_5) {
        case 135:

            VAR_3->video_pts++;


            FUNC_8(VAR_4);
            break;

        case 131:
        case 129:
        case 133:
        case 132:
        case 130:
        case 134:


            if (VAR_6 + 8 < VAR_6 || FUNC_3(VAR_2, VAR_6 + 8))
                return FUNC_0(VAR_0);
            VAR_2->stream_index = VAR_3->video_stream_index;
            VAR_2->pts = VAR_3->video_pts;
            VAR_2->pos = FUNC_10(VAR_1->pb);
            FUNC_11(VAR_2->data, VAR_10, 8);
            VAR_7 = FUNC_7(VAR_1->pb, &VAR_2->data[8], VAR_6);

            if (VAR_7 < 0) {
                FUNC_4(VAR_2);
            } else {
                VAR_9 = 1;
                FUNC_5(VAR_2, VAR_7 + 8);
            }
            break;

        case 128:
            VAR_8 = FUNC_8(VAR_4);
            FUNC_9(VAR_4, 4);
            VAR_6 -= 8;

            if (VAR_8 < VAR_3->track_count &&
                VAR_3->tracks[VAR_8].channels > 0) {
                VAR_7 = FUNC_2(VAR_1->pb, VAR_2, VAR_6);
                if (VAR_7 < 0)
                    return FUNC_0(VAR_0);
                VAR_2->stream_index =
                    VAR_3->tracks[VAR_8].stream_index;
                VAR_2->pts = VAR_3->tracks[VAR_8].audio_pts;
                VAR_9 = 1;


                VAR_11 = VAR_6;
                if (VAR_3->tracks[VAR_8].adpcm)
                    VAR_11 -= 2 * (VAR_3->tracks[VAR_8].channels);
                VAR_11 /= VAR_3->tracks[VAR_8].channels;
                if (VAR_3->tracks[VAR_8].adpcm) {
                    VAR_11 *= 2;
                } else
                    VAR_11 /=
                        (VAR_3->tracks[VAR_8].bits / 8);
                VAR_3->tracks[VAR_8].audio_pts += VAR_11;
            } else {
                FUNC_9(VAR_4, VAR_6);
            }
            break;

        default:
            FUNC_9(VAR_4, VAR_6);
            break;
        }
    }
    return VAR_7;
}
