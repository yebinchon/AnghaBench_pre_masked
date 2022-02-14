
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_8__ {int** data; int* linesize; } ;
struct TYPE_6__ {int* data; int h; int w; int sgnd; } ;
typedef TYPE_3__ AVFrame ;



__attribute__((used)) static inline void FUNC_0(AVFrame *VAR_0, opj_image_t *VAR_1) {
    int *VAR_2;
    uint8_t *VAR_3;
    int VAR_4, VAR_5, VAR_6;

    for (VAR_4 = 0; VAR_4 < VAR_1->numcomps; VAR_4++) {
        VAR_2 = VAR_1->comps[VAR_4].data;
        for (VAR_6 = 0; VAR_6 < VAR_1->comps[VAR_4].h; VAR_6++) {
            VAR_3 = VAR_0->data[VAR_4] + VAR_6 * VAR_0->linesize[VAR_4];
            for (VAR_5 = 0; VAR_5 < VAR_1->comps[VAR_4].w; VAR_5++) {
                *VAR_3 = 0x80 * VAR_1->comps[VAR_4].sgnd + *VAR_2;
                VAR_3++;
                VAR_2++;
            }
        }
    }
}
