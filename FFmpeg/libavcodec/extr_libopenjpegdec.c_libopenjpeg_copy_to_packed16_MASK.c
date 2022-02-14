
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int numcomps; TYPE_2__* comps; } ;
typedef TYPE_3__ opj_image_t ;
struct TYPE_13__ {int height; int width; int* linesize; scalar_t__* data; int format; } ;
struct TYPE_12__ {TYPE_1__* comp; } ;
struct TYPE_10__ {int prec; int sgnd; scalar_t__* data; } ;
struct TYPE_9__ {int shift; scalar_t__ depth; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFrame ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 TYPE_4__* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(AVFrame *VAR_0, opj_image_t *VAR_1) {
    uint16_t *VAR_2;
    const AVPixFmtDescriptor *VAR_3 = FUNC_2(VAR_0->format);
    int VAR_4, VAR_5, VAR_6, VAR_7;
    int VAR_8[4];
    for (VAR_5 = 0; VAR_5 < VAR_1->numcomps; VAR_5++)
        VAR_8[VAR_5] = FUNC_0(FUNC_1(VAR_3->comp[VAR_5].depth - VAR_1->comps[VAR_5].prec, 8), 0) + VAR_3->comp[VAR_5].shift;

    for (VAR_6 = 0; VAR_6 < VAR_0->height; VAR_6++) {
        VAR_4 = VAR_6 * VAR_0->width;
        VAR_2 = (uint16_t *) (VAR_0->data[0] + VAR_6 * VAR_0->linesize[0]);
        for (VAR_5 = 0; VAR_5 < VAR_0->width; VAR_5++, VAR_4++)
            for (VAR_7 = 0; VAR_7 < VAR_1->numcomps; VAR_7++)
                *VAR_2++ = ((1 << (VAR_1->comps[VAR_7].prec - 1)) * VAR_1->comps[VAR_7].sgnd +
                             (unsigned)VAR_1->comps[VAR_7].data[VAR_4]) << VAR_8[VAR_7];
    }
}
