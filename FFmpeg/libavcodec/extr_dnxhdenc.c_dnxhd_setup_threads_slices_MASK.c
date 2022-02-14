
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mb_height; int mb_width; } ;
struct TYPE_5__ {int* slice_offs; int* slice_size; scalar_t__* mb_bits; TYPE_1__ m; } ;
typedef TYPE_2__ DNXHDEncContext ;



__attribute__((used)) static void FUNC_0(DNXHDEncContext *VAR_0)
{
    int VAR_1, VAR_2;
    int VAR_3 = 0;
    for (VAR_1 = 0; VAR_1 < VAR_0->m.mb_height; VAR_1++) {
        int VAR_4;
        VAR_0->slice_offs[VAR_1] = VAR_3;
        VAR_0->slice_size[VAR_1] = 0;
        for (VAR_2 = 0; VAR_2 < VAR_0->m.mb_width; VAR_2++) {
            unsigned VAR_5 = VAR_1 * VAR_0->m.mb_width + VAR_2;
            VAR_0->slice_size[VAR_1] += VAR_0->mb_bits[VAR_5];
        }
        VAR_0->slice_size[VAR_1] = (VAR_0->slice_size[VAR_1] + 31) & ~31;
        VAR_0->slice_size[VAR_1] >>= 3;
        VAR_4 = VAR_0->slice_size[VAR_1];
        VAR_3 += VAR_4;
    }
}
