
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {unsigned char* data; void* pos; int stream_index; scalar_t__ pts; } ;
struct TYPE_8__ {int audio_stream_index; int frame_number; int video_stream_index; } ;
typedef TYPE_1__ FlicDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*) ;
 unsigned int FUNC_2 (unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*,unsigned int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,unsigned int) ;
 int FUNC_7 (int *,unsigned int) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_6,
                            AVPacket *VAR_7)
{
    FlicDemuxContext *VAR_8 = VAR_6->priv_data;
    AVIOContext *VAR_9 = VAR_6->pb;
    int VAR_10 = 0;
    unsigned int VAR_11;
    int VAR_12;
    int VAR_13 = 0;
    unsigned char VAR_14[VAR_4];

    while (!VAR_10 && !FUNC_5(VAR_9)) {

        if ((VAR_13 = FUNC_6(VAR_9, VAR_14, VAR_4)) !=
            VAR_4) {
            VAR_13 = FUNC_0(VAR_1);
            break;
        }

        VAR_11 = FUNC_2(&VAR_14[0]);
        VAR_12 = FUNC_1(&VAR_14[4]);

        if (((VAR_12 == VAR_2) || (VAR_12 == VAR_3)) && VAR_11 > VAR_4) {
            if (FUNC_3(VAR_7, VAR_11)) {
                VAR_13 = FUNC_0(VAR_1);
                break;
            }
            VAR_7->stream_index = VAR_8->video_stream_index;
            VAR_7->pts = VAR_8->frame_number++;
            VAR_7->pos = FUNC_8(VAR_9);
            FUNC_9(VAR_7->data, VAR_14, VAR_4);
            VAR_13 = FUNC_6(VAR_9, VAR_7->data + VAR_4,
                VAR_11 - VAR_4);
            if (VAR_13 != VAR_11 - VAR_4) {
                FUNC_4(VAR_7);
                VAR_13 = FUNC_0(VAR_1);
            }
            VAR_10 = 1;
        } else if (VAR_12 == VAR_5) {
            if (FUNC_3(VAR_7, VAR_11)) {
                VAR_13 = FUNC_0(VAR_1);
                break;
            }


            FUNC_7(VAR_9, 10);

            VAR_7->stream_index = VAR_8->audio_stream_index;
            VAR_7->pos = FUNC_8(VAR_9);
            VAR_13 = FUNC_6(VAR_9, VAR_7->data, VAR_11);

            if (VAR_13 != VAR_11) {
                FUNC_4(VAR_7);
                VAR_13 = FUNC_0(VAR_1);
            }

            VAR_10 = 1;
        } else {

            FUNC_7(VAR_9, VAR_11 - 6);
        }
    }

    return FUNC_5(VAR_9) ? VAR_0 : VAR_13;
}
