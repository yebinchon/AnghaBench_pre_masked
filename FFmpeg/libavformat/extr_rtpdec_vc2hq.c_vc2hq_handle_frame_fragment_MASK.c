
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_11__ {int * data; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {scalar_t__ frame_nr; scalar_t__ frame_size; scalar_t__ buf; scalar_t__ timestamp; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,char*,...) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int const*,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,scalar_t__*,int ) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (TYPE_1__*,int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_9, PayloadContext *VAR_10, AVStream *VAR_11,
                                       AVPacket *VAR_12, uint32_t *VAR_13, const uint8_t *VAR_14, int VAR_15,
                                       int VAR_16)
{
    int VAR_17;
    uint32_t VAR_18;
    uint16_t VAR_19;
    uint16_t VAR_20;


    if (VAR_15 < 16) {
        FUNC_4(VAR_9, VAR_1, "Too short RTP/VC2hq packet, got %d bytes\n", VAR_15);
        return VAR_0;
    }

    VAR_18 = FUNC_2(&VAR_14[4]);
    VAR_19 = FUNC_1(&VAR_14[12]);
    VAR_20 = FUNC_1(&VAR_14[14]);

    if (VAR_10->buf && VAR_10->frame_nr != VAR_18) {
        FUNC_4(VAR_9, VAR_2, "Dropping buffered RTP/VC2hq packet fragments - non-continuous picture numbers\n");
        FUNC_9(&VAR_10->buf);
    }


    if (VAR_20 == 0) {
        if (VAR_15 < VAR_19 + 16) {
            FUNC_4(VAR_9, VAR_1, "Too short RTP/VC2hq packet, got %d bytes\n", VAR_15);
            return VAR_0;
        }


        if (!VAR_10->buf) {

            VAR_17 = FUNC_5(&VAR_10->buf);
            if (VAR_17 < 0)
                return VAR_17;


            VAR_17 = FUNC_6(VAR_10->buf, VAR_3 + VAR_5, VAR_8);
            if (VAR_17 < 0)
                return VAR_17;

            VAR_10->frame_nr = VAR_18;
            VAR_10->timestamp = *VAR_13;
            VAR_10->frame_size = VAR_3 + VAR_5;
        }

        FUNC_7(VAR_10->buf, VAR_14 + 16 , VAR_19);
        VAR_10->frame_size += VAR_19;

        return FUNC_0(VAR_6);
    } else {
        if (VAR_15 < VAR_19 + 20) {
            FUNC_4(VAR_9, VAR_1, "Too short RTP/VC2hq packet, got %d bytes\n", VAR_15);
            return VAR_0;
        }


        if (!VAR_10->buf)
            return VAR_0;

        FUNC_7(VAR_10->buf, VAR_14 + 20 , VAR_19);
        VAR_10->frame_size += VAR_19;



        if (!(VAR_16 & VAR_7))
            return FUNC_0(VAR_6);
    }


    VAR_17 = FUNC_8(VAR_12, &VAR_10->buf, VAR_11->index);
    if (VAR_17 < 0)
        return VAR_17;

    FUNC_10(VAR_10, VAR_12->data, VAR_4, VAR_10->frame_size);
    FUNC_3(&VAR_12->data[13], VAR_10->frame_nr);

    VAR_10->frame_size = 0;

    return 0;
}
