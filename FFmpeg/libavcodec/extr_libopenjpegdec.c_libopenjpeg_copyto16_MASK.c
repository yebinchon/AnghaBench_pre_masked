
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct TYPE_11__ {int numcomps; TYPE_2__* comps; } ;
typedef TYPE_3__ opj_image_t ;
struct TYPE_13__ {int* linesize; scalar_t__* data; int format; } ;
struct TYPE_12__ {TYPE_1__* comp; } ;
struct TYPE_10__ {int prec; int* data; int h; int w; int sgnd; } ;
struct TYPE_9__ {int shift; scalar_t__ depth; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFrame ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 TYPE_4__* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(AVFrame *VAR_0, opj_image_t *VAR_1) {
    int *VAR_2;
    uint16_t *VAR_3;
    const AVPixFmtDescriptor *VAR_4 = FUNC_2(VAR_0->format);
    int VAR_5, VAR_6, VAR_7;
    int VAR_8[4];
    for (VAR_6 = 0; VAR_6 < VAR_1->numcomps; VAR_6++)
        VAR_8[VAR_6] = FUNC_0(FUNC_1(VAR_4->comp[VAR_6].depth - VAR_1->comps[VAR_6].prec, 8), 0) + VAR_4->comp[VAR_6].shift;

    for (VAR_5 = 0; VAR_5 < VAR_1->numcomps; VAR_5++) {
        VAR_2 = VAR_1->comps[VAR_5].data;
        for (VAR_7 = 0; VAR_7 < VAR_1->comps[VAR_5].h; VAR_7++) {
            VAR_3 = (uint16_t *)(VAR_0->data[VAR_5] + VAR_7 * VAR_0->linesize[VAR_5]);
            for (VAR_6 = 0; VAR_6 < VAR_1->comps[VAR_5].w; VAR_6++) {
                *VAR_3 = ((1 << (VAR_1->comps[VAR_5].prec - 1)) * VAR_1->comps[VAR_5].sgnd +
                           (unsigned)*VAR_2) << VAR_8[VAR_5];
                VAR_3++;
                VAR_2++;
            }
        }
    }
}
