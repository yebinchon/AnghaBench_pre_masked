
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ timestamp; scalar_t__ seen_sequence_header; scalar_t__ frame_size; scalar_t__ buf; } ;
typedef TYPE_1__ PayloadContext ;
typedef int AVStream ;
typedef int AVPacket ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int *,scalar_t__*,int const*,int,int) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_4, PayloadContext *VAR_5,
                               AVStream *VAR_6, AVPacket *VAR_7, uint32_t *VAR_8,
                               const uint8_t *VAR_9, int VAR_10, uint16_t VAR_11,
                               int VAR_12)
{
    uint8_t VAR_13 = 0;
    int VAR_14 = 0;

    if (VAR_5->buf && VAR_5->timestamp != *VAR_8) {
        FUNC_0(VAR_4, VAR_2, "Dropping buffered RTP/VC2hq packet fragments - non-continuous timestamps\n");
        FUNC_1(&VAR_5->buf);
        VAR_5->frame_size = 0;
    }


    if (VAR_10 < VAR_3) {
        FUNC_0(VAR_4, VAR_1, "Too short RTP/VC2hq packet, got %d bytes\n", VAR_10);
        return VAR_0;
    }

    VAR_13 = VAR_9[3];


    if (VAR_5->seen_sequence_header || VAR_13 == 129) {
        switch(VAR_13) {

        case 129:
            VAR_14 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_9 + VAR_3, VAR_10 - VAR_3);
            break;

        case 130:
            VAR_14 = FUNC_4(VAR_5, VAR_6, VAR_7);
            break;

        case 128:
            VAR_14 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);
            break;
        }
    }

    return VAR_14;
}
