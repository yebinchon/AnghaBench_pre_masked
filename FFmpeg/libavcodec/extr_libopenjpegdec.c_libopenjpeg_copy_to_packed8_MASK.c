
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
struct TYPE_8__ {int height; int width; int* linesize; int ** data; } ;
struct TYPE_6__ {int sgnd; scalar_t__* data; } ;
typedef TYPE_3__ AVFrame ;



__attribute__((used)) static inline void FUNC_0(AVFrame *VAR_0, opj_image_t *VAR_1) {
    uint8_t *VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6;
    for (VAR_5 = 0; VAR_5 < VAR_0->height; VAR_5++) {
        VAR_3 = VAR_5 * VAR_0->width;
        VAR_2 = VAR_0->data[0] + VAR_5 * VAR_0->linesize[0];
        for (VAR_4 = 0; VAR_4 < VAR_0->width; VAR_4++, VAR_3++)
            for (VAR_6 = 0; VAR_6 < VAR_1->numcomps; VAR_6++)
                *VAR_2++ = 0x80 * VAR_1->comps[VAR_6].sgnd + VAR_1->comps[VAR_6].data[VAR_3];
    }
}
