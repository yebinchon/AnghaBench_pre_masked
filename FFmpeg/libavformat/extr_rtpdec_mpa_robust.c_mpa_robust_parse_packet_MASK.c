
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_12__ {int * data; int stream_index; } ;
struct TYPE_11__ {int index; } ;
struct TYPE_10__ {size_t split_pos; int split_buf_size; unsigned int adu_size; int cur_size; scalar_t__ timestamp; int fragment; int * split_buf; } ;
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
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int ,char*) ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,unsigned int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int const*,int) ;
 int FUNC_8 (TYPE_3__*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int const*,unsigned int) ;
 int FUNC_11 (int *,int const*,int,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_5, PayloadContext *VAR_6,
                                   AVStream *VAR_7, AVPacket *VAR_8,
                                   uint32_t *VAR_9, const uint8_t *VAR_10,
                                   int VAR_11, uint16_t VAR_12, int VAR_13)
{
    unsigned VAR_14, VAR_15;
    int VAR_16, VAR_17;

    if (!VAR_10) {
        VAR_10 = &VAR_6->split_buf[VAR_6->split_pos];
        VAR_11 = VAR_6->split_buf_size - VAR_6->split_pos;

        VAR_17 = FUNC_11(VAR_5, VAR_10, VAR_11, &VAR_14,
                                                  &VAR_15);
        if (VAR_17 < 0) {
            FUNC_1(&VAR_6->split_buf);
            return VAR_17;
        }
        VAR_10 += VAR_17;
        VAR_11 -= VAR_17;

        if (VAR_15 || VAR_14 > VAR_11) {
            FUNC_1(&VAR_6->split_buf);
            FUNC_2(VAR_5, VAR_1, "Invalid frame\n");
            return VAR_0;
        }

        if (FUNC_4(VAR_8, VAR_14)) {
            FUNC_2(VAR_5, VAR_1, "Out of memory.\n");
            return FUNC_0(VAR_4);
        }

        VAR_8->stream_index = VAR_7->index;
        FUNC_10(VAR_8->data, VAR_10, VAR_14);

        VAR_6->split_pos += VAR_17 + VAR_14;

        if (VAR_6->split_pos == VAR_6->split_buf_size) {
            FUNC_1(&VAR_6->split_buf);
            return 0;
        }

        return 1;
    }


    VAR_17 = FUNC_11(VAR_5, VAR_10, VAR_11, &VAR_14,
                                              &VAR_15);
    if (VAR_17 < 0)
        return VAR_17;

    VAR_10 += VAR_17;
    VAR_11 -= VAR_17;

    if (!VAR_15 && VAR_14 <= VAR_11) {


        if (FUNC_4(VAR_8, VAR_14)) {
            FUNC_2(VAR_5, VAR_1, "Out of memory.\n");
            return FUNC_0(VAR_4);
        }

        VAR_8->stream_index = VAR_7->index;
        FUNC_10(VAR_8->data, VAR_10, VAR_14);

        VAR_10 += VAR_14;
        VAR_11 -= VAR_14;
        if (VAR_11) {
            VAR_6->split_buf_size = VAR_11;
            VAR_6->split_buf = FUNC_3(VAR_6->split_buf_size);
            VAR_6->split_pos = 0;
            if (!VAR_6->split_buf) {
                FUNC_2(VAR_5, VAR_1, "Out of memory.\n");
                FUNC_5(VAR_8);
                return FUNC_0(VAR_4);
            }
            FUNC_10(VAR_6->split_buf, VAR_10, VAR_6->split_buf_size);
            return 1;
        }
        return 0;
    } else if (!VAR_15) {

        FUNC_9(&VAR_6->fragment);

        VAR_6->adu_size = VAR_14;
        VAR_6->cur_size = VAR_11;
        VAR_6->timestamp = *VAR_9;

        VAR_16 = FUNC_6(&VAR_6->fragment);
        if (VAR_16 < 0)
            return VAR_16;

        FUNC_7(VAR_6->fragment, VAR_10, VAR_11);
        return FUNC_0(VAR_3);
    }



    if (!VAR_6->fragment) {
        FUNC_2(VAR_5, VAR_2,
            "Received packet without a start fragment; dropping.\n");
        return FUNC_0(VAR_3);
    }
    if (VAR_14 != VAR_6->adu_size ||
        VAR_6->timestamp != *VAR_9) {
        FUNC_9(&VAR_6->fragment);
        FUNC_2(VAR_5, VAR_1, "Invalid packet received\n");
        return VAR_0;
    }

    FUNC_7(VAR_6->fragment, VAR_10, VAR_11);
    VAR_6->cur_size += VAR_11;

    if (VAR_6->cur_size < VAR_6->adu_size)
        return FUNC_0(VAR_3);

    VAR_16 = FUNC_8(VAR_8, &VAR_6->fragment, VAR_7->index);
    if (VAR_16 < 0) {
        FUNC_2(VAR_5, VAR_1,
               "Error occurred when getting fragment buffer.\n");
        return VAR_16;
    }

    return 0;
}
