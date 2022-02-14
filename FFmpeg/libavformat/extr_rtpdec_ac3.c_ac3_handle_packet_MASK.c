
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int data; int stream_index; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {int last_frame; unsigned int nr_frames; int fragment; int timestamp; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int const*,int) ;
 int FUNC_5 (TYPE_3__*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_7, PayloadContext *VAR_8,
                             AVStream *VAR_9, AVPacket *VAR_10, uint32_t *VAR_11,
                             const uint8_t *VAR_12, int VAR_13, uint16_t VAR_14,
                             int VAR_15)
{
    unsigned VAR_16;
    unsigned VAR_17;
    int VAR_18;

    if (VAR_13 < VAR_5 + 1) {
        FUNC_1(VAR_7, VAR_1, "Invalid %d bytes packet\n", VAR_13);
        return VAR_0;
    }

    VAR_16 = VAR_12[0] & 0x3;
    VAR_17 = VAR_12[1];
    VAR_12 += VAR_5;
    VAR_13 -= VAR_5;

    switch (VAR_16) {
    case 0:
        if (!VAR_17) {
            FUNC_1(VAR_7, VAR_1, "Invalid AC3 packet data\n");
            return VAR_0;
        }
        if (FUNC_2(VAR_10, VAR_13)) {
            FUNC_1(VAR_7, VAR_1, "Out of memory.\n");
            return FUNC_0(VAR_4);
        }

        VAR_10->stream_index = VAR_9->index;
        FUNC_7(VAR_10->data, VAR_12, VAR_13);
        return 0;

    case 1:
    case 2:
        FUNC_6(&VAR_8->fragment);

        VAR_8->last_frame = 1;
        VAR_8->nr_frames = VAR_17;
        VAR_18 = FUNC_3(&VAR_8->fragment);
        if (VAR_18 < 0)
            return VAR_18;

        FUNC_4(VAR_8->fragment, VAR_12, VAR_13);
        VAR_8->timestamp = *VAR_11;
        return FUNC_0(VAR_3);

    case 3:
        if (!VAR_8->fragment) {
            FUNC_1(VAR_7, VAR_2,
                   "Received packet without a start fragment; dropping.\n");
            return FUNC_0(VAR_3);
        }
        if (VAR_17 != VAR_8->nr_frames ||
            VAR_8->timestamp != *VAR_11) {
            FUNC_6(&VAR_8->fragment);
            FUNC_1(VAR_7, VAR_1, "Invalid packet received\n");
            return VAR_0;
        }

        FUNC_4(VAR_8->fragment, VAR_12, VAR_13);
        VAR_8->last_frame++;
    }

    if (!(VAR_15 & VAR_6))
        return FUNC_0(VAR_3);

    if (VAR_8->last_frame != VAR_8->nr_frames) {
        FUNC_6(&VAR_8->fragment);
        FUNC_1(VAR_7, VAR_1, "Missed %d packets\n",
               VAR_8->nr_frames - VAR_8->last_frame);
        return VAR_0;
    }

    VAR_18 = FUNC_5(VAR_10, &VAR_8->fragment, VAR_9->index);
    if (VAR_18 < 0) {
        FUNC_1(VAR_7, VAR_1,
               "Error occurred when getting fragment buffer.\n");
        return VAR_18;
    }

    return 0;
}
