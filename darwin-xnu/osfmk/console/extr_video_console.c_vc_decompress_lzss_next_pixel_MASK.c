
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* row_start; int col; scalar_t__ width; scalar_t__ row; scalar_t__ height; scalar_t__ bytes_per_row; scalar_t__* clut; } ;
typedef TYPE_1__ lzss_image_state ;



__attribute__((used)) static inline int
FUNC_0 (int VAR_0, lzss_image_state* VAR_1)
{
    uint32_t VAR_2 = 0;
    uint32_t VAR_3 = 0;

    VAR_2 = VAR_0 * 3;

    VAR_3 = ( (uint32_t) VAR_1->clut[VAR_2 + 0] << 16)
                | ( (uint32_t) VAR_1->clut[VAR_2 + 1] << 8)
                | ( (uint32_t) VAR_1->clut[VAR_2 + 2]);

    *(VAR_1->row_start + VAR_1->col) = VAR_3;

    if (++VAR_1->col >= VAR_1->width) {
        VAR_1->col = 0;
        if (++VAR_1->row >= VAR_1->height) {
            return 1;
        }
        VAR_1->row_start = (volatile uint32_t *) (((uintptr_t)VAR_1->row_start) + VAR_1->bytes_per_row);
    }
    return 0;
}
