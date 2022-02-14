
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_16__ {int * pal; } ;
struct TYPE_15__ {int (* readAlpPlanar ) (int *,int const**,int,int *) ;int (* alpToYV12 ) (int *,int const*,int const*,int const*,int,int *) ;int input_rgb2yuv_table; int (* readLumPlanar ) (int *,int const**,int,int ) ;int (* lumToYV12 ) (int *,int const*,int const*,int const*,int,int *) ;} ;
struct TYPE_14__ {TYPE_4__* dst; scalar_t__ alpha; TYPE_2__* src; TYPE_7__* instance; } ;
struct TYPE_13__ {TYPE_3__* plane; } ;
struct TYPE_12__ {int sliceY; int sliceH; int ** line; } ;
struct TYPE_11__ {int width; int v_chr_sub_sample; TYPE_1__* plane; } ;
struct TYPE_10__ {int sliceY; int const** line; } ;
typedef TYPE_5__ SwsFilterDescriptor ;
typedef TYPE_6__ SwsContext ;
typedef TYPE_7__ ColorContext ;


 int FUNC_0 (int *,int const*,int const*,int const*,int,int *) ;
 int FUNC_1 (int *,int const**,int,int ) ;
 int FUNC_2 (int *,int const*,int const*,int const*,int,int *) ;
 int FUNC_3 (int *,int const**,int,int *) ;

__attribute__((used)) static int FUNC_4(SwsContext *VAR_0, SwsFilterDescriptor *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = VAR_1->src->width;
    ColorContext * VAR_5 = VAR_1->instance;
    uint32_t * VAR_6 = VAR_5->pal;
    int VAR_7;

    VAR_1->dst->plane[0].sliceY = VAR_2;
    VAR_1->dst->plane[0].sliceH = VAR_3;
    VAR_1->dst->plane[3].sliceY = VAR_2;
    VAR_1->dst->plane[3].sliceH = VAR_3;

    for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
        int VAR_8 = VAR_2+VAR_7 - VAR_1->src->plane[0].sliceY;
        int VAR_9 = ((VAR_2+VAR_7) >> VAR_1->src->v_chr_sub_sample) - VAR_1->src->plane[1].sliceY;
        const uint8_t * VAR_10[4] = { VAR_1->src->plane[0].line[VAR_8],
                        VAR_1->src->plane[1].line[VAR_9],
                        VAR_1->src->plane[2].line[VAR_9],
                        VAR_1->src->plane[3].line[VAR_8]};
        uint8_t * VAR_11 = VAR_1->dst->plane[0].line[VAR_7];

        if (VAR_0->lumToYV12) {
            VAR_0->lumToYV12(VAR_11, VAR_10[0], VAR_10[1], VAR_10[2], VAR_4, VAR_6);
        } else if (VAR_0->readLumPlanar) {
            VAR_0->readLumPlanar(VAR_11, VAR_10, VAR_4, VAR_0->input_rgb2yuv_table);
        }


        if (VAR_1->alpha) {
            VAR_11 = VAR_1->dst->plane[3].line[VAR_7];
            if (VAR_0->alpToYV12) {
                VAR_0->alpToYV12(VAR_11, VAR_10[3], VAR_10[1], VAR_10[2], VAR_4, VAR_6);
            } else if (VAR_0->readAlpPlanar) {
                VAR_0->readAlpPlanar(VAR_11, VAR_10, VAR_4, ((void*)0));
            }
        }
    }

    return VAR_3;
}
