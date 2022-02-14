
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_5__ {int discard_damaged_percentage; } ;
struct TYPE_4__ {int const* data; int size; int sega_film_skip_bytes; TYPE_3__* avctx; } ;
typedef TYPE_1__ CinepakContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_3 (CinepakContext *VAR_2)
{
    int VAR_3;
    int VAR_4;

    VAR_3 = FUNC_0 (&VAR_2->data[8]);
    VAR_4 = FUNC_1(&VAR_2->data[1]);

    if (VAR_2->size < VAR_4 * (int64_t)(100 - VAR_2->avctx->discard_damaged_percentage) / 100)
        return VAR_0;


    if (VAR_2->sega_film_skip_bytes == -1) {
        if (!VAR_4) {
            FUNC_2(VAR_2->avctx, "encoded_buf_size 0");
            return VAR_1;
        }
        if (VAR_4 != VAR_2->size && (VAR_2->size % VAR_4) != 0) {






            if (VAR_2->size >= 16 &&
                (VAR_2->data[10] == 0xFE) &&
                (VAR_2->data[11] == 0x00) &&
                (VAR_2->data[12] == 0x00) &&
                (VAR_2->data[13] == 0x06) &&
                (VAR_2->data[14] == 0x00) &&
                (VAR_2->data[15] == 0x00))
                VAR_2->sega_film_skip_bytes = 6;
            else
                VAR_2->sega_film_skip_bytes = 2;
        } else
            VAR_2->sega_film_skip_bytes = 0;
    }

    if (VAR_2->size < 10 + VAR_2->sega_film_skip_bytes + VAR_3 * 12)
        return VAR_0;

    if (VAR_3) {
        const uint8_t *VAR_5 = VAR_2->data + 10 + VAR_2->sega_film_skip_bytes;
        int VAR_6 = FUNC_1 (VAR_5 + 1);
        if (VAR_6 < 12 || VAR_6 > VAR_4)
            return VAR_0;
    }

    return 0;
}
