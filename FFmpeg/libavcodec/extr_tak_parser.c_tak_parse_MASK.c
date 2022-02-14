
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int flags; int key_frame; scalar_t__ duration; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int index; int* buffer; int frame_start_found; int overread; } ;
struct TYPE_8__ {int flags; scalar_t__ frame_samples; scalar_t__ last_frame_samples; } ;
struct TYPE_9__ {int index; TYPE_1__ ti; TYPE_3__ pc; } ;
typedef TYPE_1__ TAKStreamInfo ;
typedef TYPE_2__ TAKParseContext ;
typedef TYPE_3__ ParseContext ;
typedef int GetBitContext ;
typedef TYPE_4__ AVCodecParserContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,int const**,int*) ;
 int FUNC_3 (int const*,int) ;
 int FUNC_4 (int *,int *,TYPE_1__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_7(AVCodecParserContext *VAR_4, AVCodecContext *VAR_5,
                     const uint8_t **VAR_6, int *VAR_7,
                     const uint8_t *VAR_8, int VAR_9)
{
    TAKParseContext *VAR_10 = VAR_4->priv_data;
    ParseContext *VAR_11 = &VAR_10->pc;
    int VAR_12 = VAR_0;
    GetBitContext VAR_13;
    int VAR_14 = 0;
    int VAR_15 = VAR_9 ? VAR_3 : 8;
    int VAR_16;

    *VAR_6 = VAR_8;
    *VAR_7 = VAR_9;

    if (VAR_4->flags & VAR_1) {
        TAKStreamInfo VAR_17;
        if ((VAR_16 = FUNC_6(&VAR_13, VAR_8, VAR_9)) < 0)
            return VAR_9;
        if (!FUNC_4(VAR_5, &VAR_13, &VAR_17, 127))
            VAR_4->duration = VAR_10->ti.last_frame_samples ? VAR_10->ti.last_frame_samples
                                                   : VAR_10->ti.frame_samples;
        return VAR_9;
    }

    while (VAR_9 || VAR_10->index + VAR_15 <= VAR_11->index) {
        if (VAR_9 && VAR_10->index + VAR_3 > VAR_11->index) {
            int VAR_18 = FUNC_1(VAR_3,
                                           VAR_9);
            const uint8_t *VAR_19 = VAR_8;

            if (FUNC_2(VAR_11, VAR_0, &VAR_19, &VAR_18) != -1)
                goto fail;
            VAR_14 += VAR_18;
            VAR_8 += VAR_18;
            VAR_9 -= VAR_18;
        }

        for (; VAR_10->index + VAR_15 <= VAR_11->index; VAR_10->index++) {
            if (VAR_11->buffer[ VAR_10->index ] == 0xFF &&
                VAR_11->buffer[ VAR_10->index + 1 ] == 0xA0) {
                TAKStreamInfo VAR_20;

                if ((VAR_16 = FUNC_6(&VAR_13, VAR_11->buffer + VAR_10->index,
                                          VAR_11->index - VAR_10->index)) < 0)
                    goto fail;
                if (!FUNC_4(VAR_5, &VAR_13,
                        VAR_11->frame_start_found ? &VAR_20 : &VAR_10->ti, 127) &&
                    !FUNC_3(VAR_11->buffer + VAR_10->index,
                                      FUNC_5(&VAR_13) / 8)) {
                    if (!VAR_11->frame_start_found) {
                        VAR_11->frame_start_found = 1;
                        VAR_4->duration = VAR_10->ti.last_frame_samples ?
                                                VAR_10->ti.last_frame_samples :
                                                VAR_10->ti.frame_samples;
                        VAR_4->key_frame = !!(VAR_10->ti.flags & VAR_2);
                    } else {
                        VAR_11->frame_start_found = 0;
                        VAR_12 = VAR_10->index - VAR_11->index;
                        VAR_10->index = 0;
                        goto found;
                    }
                }
            }
        }
    }
found:

    if (VAR_14 && !VAR_9 && VAR_12 == VAR_0 ||
        FUNC_2(VAR_11, VAR_12, &VAR_8, &VAR_9) < 0) {
        goto fail;
    }

    if (VAR_12 != VAR_0) {
        VAR_12 += VAR_14;
        VAR_11->overread = FUNC_0(0, -VAR_12);
    }

    *VAR_6 = VAR_8;
    *VAR_7 = VAR_9;
    return VAR_12;

fail:
    *VAR_6 = ((void*)0);
    *VAR_7 = 0;
    return VAR_9 + VAR_14;
}
