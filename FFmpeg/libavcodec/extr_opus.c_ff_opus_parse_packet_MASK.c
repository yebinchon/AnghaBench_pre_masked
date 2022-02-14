
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* i ;
struct TYPE_4__ {int code; int stereo; int config; int frame_count; int vbr; int* frame_offset; int* frame_size; int packet_size; int data_size; int frame_duration; int bandwidth; int mode; } ;
typedef TYPE_1__ OpusPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int* VAR_8 ;
 int FUNC_1 (int const**,int const*) ;
 int FUNC_2 (int const**,int const*) ;

int FUNC_3(OpusPacket *VAR_9, const uint8_t *VAR_10, int VAR_11,
                         int VAR_12)
{
    const uint8_t *VAR_13 = VAR_10;
    const uint8_t *VAR_14 = VAR_10 + VAR_11;
    int VAR_15 = 0;
    int VAR_16, VAR_17;

    if (VAR_11 < 1)
        goto fail;


    VAR_17 = *VAR_13++;
    VAR_9->code = (VAR_17 ) & 0x3;
    VAR_9->stereo = (VAR_17 >> 2) & 0x1;
    VAR_9->config = (VAR_17 >> 3) & 0x1F;


    if (VAR_9->code >= 2 && VAR_11 < 2)
        goto fail;

    switch (VAR_9->code) {
    case 0:

        VAR_9->frame_count = 1;
        VAR_9->vbr = 0;

        if (VAR_12) {
            int VAR_18 = FUNC_1(&VAR_13, VAR_14);
            if (VAR_18 < 0 || VAR_18 > VAR_14 - VAR_13)
                goto fail;
            VAR_14 = VAR_13 + VAR_18;
            VAR_11 = VAR_14 - VAR_10;
        }

        VAR_16 = VAR_14 - VAR_13;
        if (VAR_16 > VAR_2)
            goto fail;
        VAR_9->frame_offset[0] = VAR_13 - VAR_10;
        VAR_9->frame_size[0] = VAR_16;
        break;
    case 1:

        VAR_9->frame_count = 2;
        VAR_9->vbr = 0;

        if (VAR_12) {
            int VAR_19 = FUNC_1(&VAR_13, VAR_14);
            if (VAR_19 < 0 || 2 * VAR_19 > VAR_14 - VAR_13)
                goto fail;
            VAR_14 = VAR_13 + 2 * VAR_19;
            VAR_11 = VAR_14 - VAR_10;
        }

        VAR_16 = VAR_14 - VAR_13;
        if (VAR_16 & 1 || VAR_16 >> 1 > VAR_2)
            goto fail;
        VAR_9->frame_offset[0] = VAR_13 - VAR_10;
        VAR_9->frame_size[0] = VAR_16 >> 1;
        VAR_9->frame_offset[1] = VAR_9->frame_offset[0] + VAR_9->frame_size[0];
        VAR_9->frame_size[1] = VAR_16 >> 1;
        break;
    case 2:

        VAR_9->frame_count = 2;
        VAR_9->vbr = 1;


        VAR_16 = FUNC_1(&VAR_13, VAR_14);
        if (VAR_16 < 0)
            goto fail;

        if (VAR_12) {
            int VAR_20 = FUNC_1(&VAR_13, VAR_14);
            if (VAR_20 < 0 || VAR_20 + VAR_16 > VAR_14 - VAR_13)
                goto fail;
            VAR_14 = VAR_13 + VAR_16 + VAR_20;
            VAR_11 = VAR_14 - VAR_10;
        }

        VAR_9->frame_offset[0] = VAR_13 - VAR_10;
        VAR_9->frame_size[0] = VAR_16;


        VAR_16 = VAR_14 - VAR_13 - VAR_9->frame_size[0];
        if (VAR_16 < 0 || VAR_16 > VAR_2)
            goto fail;
        VAR_9->frame_offset[1] = VAR_9->frame_offset[0] + VAR_9->frame_size[0];
        VAR_9->frame_size[1] = VAR_16;
        break;
    case 3:

        VAR_17 = *VAR_13++;
        VAR_9->frame_count = (VAR_17 ) & 0x3F;
        VAR_15 = (VAR_17 >> 6) & 0x01;
        VAR_9->vbr = (VAR_17 >> 7) & 0x01;

        if (VAR_9->frame_count == 0 || VAR_9->frame_count > VAR_1)
            goto fail;


        if (VAR_15) {
            VAR_15 = FUNC_2(&VAR_13, VAR_14);
            if (VAR_15 < 0)
                goto fail;
        }


        if (VAR_9->vbr) {


            int VAR_21 = 0;
            for (VAR_17 = 0; VAR_17 < VAR_9->frame_count - 1; VAR_17++) {
                VAR_16 = FUNC_1(&VAR_13, VAR_14);
                if (VAR_16 < 0)
                    goto fail;
                VAR_9->frame_size[VAR_17] = VAR_16;
                VAR_21 += VAR_16;
            }

            if (VAR_12) {
                int VAR_22 = FUNC_1(&VAR_13, VAR_14);
                if (VAR_22 < 0 || VAR_22 + VAR_21 + VAR_15 > VAR_14 - VAR_13)
                    goto fail;
                VAR_14 = VAR_13 + VAR_21 + VAR_22 + VAR_15;
                VAR_11 = VAR_14 - VAR_10;
            }

            VAR_16 = VAR_14 - VAR_13 - VAR_15;
            if (VAR_21 > VAR_16)
                goto fail;
            VAR_9->frame_offset[0] = VAR_13 - VAR_10;
            for (VAR_17 = 1; VAR_17 < VAR_9->frame_count; VAR_17++)
                VAR_9->frame_offset[VAR_17] = VAR_9->frame_offset[VAR_17-1] + VAR_9->frame_size[VAR_17-1];
            VAR_9->frame_size[VAR_9->frame_count-1] = VAR_16 - VAR_21;
        } else {


            if (VAR_12) {
                VAR_16 = FUNC_1(&VAR_13, VAR_14);
                if (VAR_16 < 0 || VAR_9->frame_count * VAR_16 + VAR_15 > VAR_14 - VAR_13)
                    goto fail;
                VAR_14 = VAR_13 + VAR_9->frame_count * VAR_16 + VAR_15;
                VAR_11 = VAR_14 - VAR_10;
            } else {
                VAR_16 = VAR_14 - VAR_13 - VAR_15;
                if (VAR_16 % VAR_9->frame_count ||
                    VAR_16 / VAR_9->frame_count > VAR_2)
                    goto fail;
                VAR_16 /= VAR_9->frame_count;
            }

            VAR_9->frame_offset[0] = VAR_13 - VAR_10;
            VAR_9->frame_size[0] = VAR_16;
            for (VAR_17 = 1; VAR_17 < VAR_9->frame_count; VAR_17++) {
                VAR_9->frame_offset[VAR_17] = VAR_9->frame_offset[VAR_17-1] + VAR_9->frame_size[VAR_17-1];
                VAR_9->frame_size[VAR_17] = VAR_16;
            }
        }
    }

    VAR_9->packet_size = VAR_11;
    VAR_9->data_size = VAR_9->packet_size - VAR_15;


    VAR_9->frame_duration = VAR_8[VAR_9->config];
    if (VAR_9->frame_duration * VAR_9->frame_count > VAR_3)
        goto fail;


    if (VAR_9->config < 12) {
        VAR_9->mode = VAR_7;
        VAR_9->bandwidth = VAR_9->config >> 2;
    } else if (VAR_9->config < 16) {
        VAR_9->mode = VAR_6;
        VAR_9->bandwidth = VAR_4 + (VAR_9->config >= 14);
    } else {
        VAR_9->mode = VAR_5;
        VAR_9->bandwidth = (VAR_9->config - 16) >> 2;

        if (VAR_9->bandwidth)
            VAR_9->bandwidth++;
    }

    return 0;

fail:
    FUNC_0(VAR_9, 0, sizeof(*VAR_9));
    return VAR_0;
}
