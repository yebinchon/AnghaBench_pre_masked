
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_15__ {int height; int width; int pix_fmt; } ;
struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {scalar_t__ bytestream_start; scalar_t__ bytestream; scalar_t__ bytestream_end; int type; } ;
struct TYPE_11__ {scalar_t__ overread; scalar_t__ buffer; scalar_t__ index; scalar_t__ overread_index; } ;
struct TYPE_12__ {int remaining_bytes; int ascii_scan; TYPE_1__ pc; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ PNMParseContext ;
typedef TYPE_3__ PNMContext ;
typedef TYPE_4__ AVCodecParserContext ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int const**,int*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_3__*) ;
 int const* FUNC_6 (int const*,char,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(AVCodecParserContext *VAR_1, AVCodecContext *VAR_2,
                     const uint8_t **VAR_3, int *VAR_4,
                     const uint8_t *VAR_5, int VAR_6)
{
    PNMParseContext *VAR_7 = VAR_1->priv_data;
    ParseContext *VAR_8 = &VAR_7->pc;
    PNMContext VAR_9;
    int VAR_10 = VAR_0;
    int VAR_11 = 0;

    if (VAR_8->overread > 0) {
        FUNC_7(VAR_8->buffer + VAR_8->index, VAR_8->buffer + VAR_8->overread_index, VAR_8->overread);
        VAR_8->index += VAR_8->overread;
        VAR_8->overread_index += VAR_8->overread;
        VAR_8->overread = 0;
    }

    if (VAR_7->remaining_bytes) {
        int VAR_12 = FUNC_1(VAR_7->remaining_bytes, VAR_6);
        VAR_11 += VAR_12;
        VAR_7->remaining_bytes -= VAR_12;

        if (!VAR_7->remaining_bytes)
            VAR_10 = VAR_11;
        goto end;
    }

retry:
    if (VAR_8->index) {
        VAR_9.bytestream_start =
        VAR_9.bytestream = VAR_8->buffer;
        VAR_9.bytestream_end = VAR_8->buffer + VAR_8->index;
    } else {
        VAR_9.bytestream_start =
        VAR_9.bytestream = (uint8_t *) VAR_5 + VAR_11;
        VAR_9.bytestream_end = (uint8_t *) VAR_5 + VAR_6 - VAR_11;
    }
    if (FUNC_5(VAR_2, &VAR_9) < 0) {
        if (VAR_9.bytestream < VAR_9.bytestream_end) {
            if (VAR_8->index) {
                VAR_8->index = 0;
                VAR_7->ascii_scan = 0;
            } else {
                unsigned VAR_13 = FUNC_0(1, VAR_9.bytestream - VAR_9.bytestream_start);

                VAR_11 += VAR_13;
            }
            goto retry;
        }
    } else if (VAR_9.type < 4) {
              uint8_t *VAR_14 = VAR_9.bytestream;
        const uint8_t *VAR_15 = VAR_9.bytestream_end;
        uint8_t *VAR_16 = VAR_14;

        if (VAR_8->index) {
            FUNC_2(VAR_7->ascii_scan <= VAR_15 - VAR_14);
            VAR_14 += VAR_7->ascii_scan;
        }

        while (VAR_14 < VAR_15) {
            int VAR_17;
            VAR_16 = VAR_14;
            VAR_17 = *VAR_14++;
            if (VAR_17 == '#') {
                uint8_t *VAR_18 = FUNC_6(VAR_14, '\n', VAR_15-VAR_14);
                if (VAR_18)
                    VAR_14 = VAR_18 + 1;
                else
                    break;
            } else if (VAR_17 == 'P') {
                VAR_10 = VAR_14 - VAR_9.bytestream_start + VAR_11 - 1;
                VAR_7->ascii_scan = 0;
                break;
            }
        }
        if (VAR_10 == VAR_0)
            VAR_7->ascii_scan = VAR_16 - VAR_9.bytestream + VAR_11;
    } else {
        VAR_10 = VAR_9.bytestream - VAR_9.bytestream_start + VAR_11
               + FUNC_3(VAR_2->pix_fmt, VAR_2->width, VAR_2->height, 1);
    }
    if (VAR_10 != VAR_0 && VAR_9.bytestream_start != VAR_5 + VAR_11)
        VAR_10 -= VAR_8->index;
    if (VAR_10 > VAR_6) {
        VAR_7->remaining_bytes = VAR_10 - VAR_6;
        VAR_10 = VAR_0;
    }
end:
    if (FUNC_4(VAR_8, VAR_10, &VAR_5, &VAR_6) < 0) {
        *VAR_3 = ((void*)0);
        *VAR_4 = 0;
        return VAR_6;
    }
    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
    return VAR_10;
}
