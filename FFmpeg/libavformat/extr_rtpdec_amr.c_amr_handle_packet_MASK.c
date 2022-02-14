
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int* data; int size; int stream_index; } ;
struct TYPE_8__ {int index; TYPE_1__* codecpar; } ;
struct TYPE_7__ {scalar_t__ codec_id; int channels; int channel_layout; } ;
typedef int PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_9, PayloadContext *VAR_10,
                             AVStream *VAR_11, AVPacket *VAR_12, uint32_t *VAR_13,
                             const uint8_t *VAR_14, int VAR_15, uint16_t VAR_16,
                             int VAR_17)
{
    const uint8_t *VAR_18 = ((void*)0);
    int VAR_19;
    int VAR_20;
    const uint8_t *VAR_21;
    uint8_t *VAR_22;

    if (VAR_11->codecpar->codec_id == VAR_2) {
        VAR_18 = VAR_7;
    } else if (VAR_11->codecpar->codec_id == VAR_3) {
        VAR_18 = VAR_8;
    } else {
        FUNC_1(VAR_9, VAR_4, "Bad codec ID\n");
        return VAR_0;
    }

    if (VAR_11->codecpar->channels != 1) {
        FUNC_1(VAR_9, VAR_4, "Only mono AMR is supported\n");
        return VAR_0;
    }
    VAR_11->codecpar->channel_layout = VAR_1;
    for (VAR_19 = 1; VAR_19 < VAR_15 && (VAR_14[VAR_19] & 0x80); VAR_19++) ;

    if (1 + VAR_19 >= VAR_15) {

        FUNC_1(VAR_9, VAR_4, "No speech data found\n");
        return VAR_0;
    }

    VAR_21 = VAR_14 + 1 + VAR_19;


    if (FUNC_2(VAR_12, VAR_15 - 1)) {
        FUNC_1(VAR_9, VAR_4, "Out of memory\n");
        return FUNC_0(VAR_6);
    }
    VAR_12->stream_index = VAR_11->index;
    VAR_22 = VAR_12->data;

    for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
        uint8_t VAR_23 = VAR_14[1 + VAR_20];
        int VAR_24 = VAR_18[(VAR_23 >> 3) & 0x0f];

        if (VAR_21 + VAR_24 > VAR_14 + VAR_15) {

            FUNC_1(VAR_9, VAR_5, "Too little speech data in the RTP packet\n");

            FUNC_4(VAR_22, 0, VAR_12->data + VAR_12->size - VAR_22);
            VAR_12->size = VAR_22 - VAR_12->data;
            return 0;
        }


        *VAR_22++ = VAR_23 & 0x7C;


        FUNC_3(VAR_22, VAR_21, VAR_24);
        VAR_21 += VAR_24;
        VAR_22 += VAR_24;
    }

    if (VAR_21 < VAR_14 + VAR_15) {
        FUNC_1(VAR_9, VAR_5, "Too much speech data in the RTP packet?\n");

        FUNC_4(VAR_22, 0, VAR_12->data + VAR_12->size - VAR_22);
        VAR_12->size = VAR_22 - VAR_12->data;
    }

    return 0;
}
