
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int * data; int stream_index; } ;
struct TYPE_6__ {int index; } ;
typedef int PayloadContext ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int const*,int) ;

int FUNC_5(AVFormatContext *VAR_3, PayloadContext *VAR_4,
                          AVStream *VAR_5, AVPacket *VAR_6, uint32_t *VAR_7,
                          const uint8_t *VAR_8, int VAR_9, uint16_t VAR_10, int VAR_11)
{
    uint8_t *VAR_12;
    uint16_t VAR_13;
    int VAR_14, VAR_15, VAR_16;

    if (VAR_9 < 2) {
        FUNC_2(VAR_3, VAR_1, "Too short H.263 RTP packet\n");
        return VAR_0;
    }
    VAR_13 = FUNC_1(VAR_8);
    VAR_14 = (VAR_13 & 0x0400) >> 9;
    VAR_15 = VAR_13 & 0x0200;
    VAR_16 = (VAR_13 & 0x01f8) >> 3;
    VAR_8 += 2;
    VAR_9 -= 2;

    if (VAR_15) {

        VAR_8 += 1;
        VAR_9 -= 1;
    }
    if (VAR_16) {

        VAR_8 += VAR_16;
        VAR_9 -= VAR_16;
    }

    if (VAR_9 < 0) {
        FUNC_2(VAR_3, VAR_1, "Too short H.263 RTP packet\n");
        return VAR_0;
    }

    if (FUNC_3(VAR_6, VAR_9 + VAR_14)) {
        FUNC_2(VAR_3, VAR_1, "Out of memory\n");
        return FUNC_0(VAR_2);
    }
    VAR_6->stream_index = VAR_5->index;
    VAR_12 = VAR_6->data;

    if (VAR_14) {
        *VAR_12++ = 0;
        *VAR_12++ = 0;
    }
    FUNC_4(VAR_12, VAR_8, VAR_9);

    return 0;
}
