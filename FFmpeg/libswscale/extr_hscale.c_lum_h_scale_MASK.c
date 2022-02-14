
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_20__ {int xInc; int filter_size; int filter_pos; int filter; } ;
struct TYPE_19__ {int (* hyScale ) (TYPE_6__*,int *,int,int const*,int ,int ,int ) ;int (* hyscale_fast ) (TYPE_6__*,int *,int,int *,int,int) ;int (* lumConvertRange ) (int *,int) ;} ;
struct TYPE_18__ {TYPE_4__* dst; TYPE_2__* src; scalar_t__ alpha; TYPE_7__* instance; } ;
struct TYPE_17__ {int width; TYPE_3__* plane; } ;
struct TYPE_16__ {int sliceY; int sliceH; int ** line; } ;
struct TYPE_15__ {int width; TYPE_1__* plane; } ;
struct TYPE_14__ {int sliceY; int ** line; } ;
typedef TYPE_5__ SwsFilterDescriptor ;
typedef TYPE_6__ SwsContext ;
typedef TYPE_7__ FilterContext ;


 int FUNC_0 (TYPE_6__*,int *,int,int *,int,int) ;
 int FUNC_1 (TYPE_6__*,int *,int,int const*,int ,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_6__*,int *,int,int *,int,int) ;
 int FUNC_4 (TYPE_6__*,int *,int,int const*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(SwsContext *VAR_0, SwsFilterDescriptor *VAR_1, int VAR_2, int VAR_3)
{
    FilterContext *VAR_4 = VAR_1->instance;
    int VAR_5 = VAR_1->src->width;
    int VAR_6 = VAR_1->dst->width;
    int VAR_7 = VAR_4->xInc;

    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
        uint8_t ** VAR_9 = VAR_1->src->plane[0].line;
        uint8_t ** VAR_10 = VAR_1->dst->plane[0].line;
        int VAR_11 = VAR_2+VAR_8 - VAR_1->src->plane[0].sliceY;
        int VAR_12 = VAR_2+VAR_8 - VAR_1->dst->plane[0].sliceY;


        if (VAR_0->hyscale_fast) {
            VAR_0->hyscale_fast(VAR_0, (int16_t*)VAR_10[VAR_12], VAR_6, VAR_9[VAR_11], VAR_5, VAR_7);
        } else {
            VAR_0->hyScale(VAR_0, (int16_t*)VAR_10[VAR_12], VAR_6, (const uint8_t *)VAR_9[VAR_11], VAR_4->filter,
                       VAR_4->filter_pos, VAR_4->filter_size);
        }

        if (VAR_0->lumConvertRange)
            VAR_0->lumConvertRange((int16_t*)VAR_10[VAR_12], VAR_6);

        VAR_1->dst->plane[0].sliceH += 1;

        if (VAR_1->alpha) {
            VAR_9 = VAR_1->src->plane[3].line;
            VAR_10 = VAR_1->dst->plane[3].line;

            VAR_11 = VAR_2+VAR_8 - VAR_1->src->plane[3].sliceY;
            VAR_12 = VAR_2+VAR_8 - VAR_1->dst->plane[3].sliceY;

            VAR_1->dst->plane[3].sliceH += 1;

            if (VAR_0->hyscale_fast) {
                VAR_0->hyscale_fast(VAR_0, (int16_t*)VAR_10[VAR_12], VAR_6, VAR_9[VAR_11], VAR_5, VAR_7);
            } else {
                VAR_0->hyScale(VAR_0, (int16_t*)VAR_10[VAR_12], VAR_6, (const uint8_t *)VAR_9[VAR_11], VAR_4->filter,
                            VAR_4->filter_pos, VAR_4->filter_size);
            }
        }
    }

    return VAR_3;
}
