
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_19__ {int xInc; int filter_size; int filter_pos; int filter; } ;
struct TYPE_18__ {int (* chrConvertRange ) (int *,int *,int) ;int (* hcScale ) (TYPE_6__*,int *,int,int *,int ,int ,int ) ;int (* hcscale_fast ) (TYPE_6__*,int *,int *,int,int *,int *,int,int) ;} ;
struct TYPE_17__ {TYPE_4__* dst; TYPE_2__* src; TYPE_7__* instance; } ;
struct TYPE_16__ {TYPE_3__* plane; int h_chr_sub_sample; int width; } ;
struct TYPE_15__ {int sliceY; int sliceH; int ** line; } ;
struct TYPE_14__ {TYPE_1__* plane; int h_chr_sub_sample; int width; } ;
struct TYPE_13__ {int sliceY; int ** line; } ;
typedef TYPE_5__ SwsFilterDescriptor ;
typedef TYPE_6__ SwsContext ;
typedef TYPE_7__ FilterContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_6__*,int *,int *,int,int *,int *,int,int) ;
 int FUNC_2 (TYPE_6__*,int *,int,int *,int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*,int *,int,int *,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(SwsContext *VAR_0, SwsFilterDescriptor *VAR_1, int VAR_2, int VAR_3)
{
    FilterContext *VAR_4 = VAR_1->instance;
    int VAR_5 = FUNC_0(VAR_1->src->width, VAR_1->src->h_chr_sub_sample);
    int VAR_6 = FUNC_0(VAR_1->dst->width, VAR_1->dst->h_chr_sub_sample);
    int VAR_7 = VAR_4->xInc;

    uint8_t ** VAR_8 = VAR_1->src->plane[1].line;
    uint8_t ** VAR_9 = VAR_1->dst->plane[1].line;
    uint8_t ** VAR_10 = VAR_1->src->plane[2].line;
    uint8_t ** VAR_11 = VAR_1->dst->plane[2].line;

    int VAR_12 = VAR_2 - VAR_1->src->plane[1].sliceY;
    int VAR_13 = VAR_2 - VAR_1->dst->plane[1].sliceY;

    int VAR_14 = VAR_2 - VAR_1->src->plane[2].sliceY;
    int VAR_15 = VAR_2 - VAR_1->dst->plane[2].sliceY;

    int VAR_16;
    for (VAR_16 = 0; VAR_16 < VAR_3; ++VAR_16) {
        if (VAR_0->hcscale_fast) {
            VAR_0->hcscale_fast(VAR_0, (uint16_t*)VAR_9[VAR_13+VAR_16], (uint16_t*)VAR_11[VAR_15+VAR_16], VAR_6, VAR_8[VAR_12+VAR_16], VAR_10[VAR_14+VAR_16], VAR_5, VAR_7);
        } else {
            VAR_0->hcScale(VAR_0, (uint16_t*)VAR_9[VAR_13+VAR_16], VAR_6, VAR_8[VAR_12+VAR_16], VAR_4->filter, VAR_4->filter_pos, VAR_4->filter_size);
            VAR_0->hcScale(VAR_0, (uint16_t*)VAR_11[VAR_15+VAR_16], VAR_6, VAR_10[VAR_14+VAR_16], VAR_4->filter, VAR_4->filter_pos, VAR_4->filter_size);
        }

        if (VAR_0->chrConvertRange)
            VAR_0->chrConvertRange((uint16_t*)VAR_9[VAR_13+VAR_16], (uint16_t*)VAR_11[VAR_15+VAR_16], VAR_6);

        VAR_1->dst->plane[1].sliceH += 1;
        VAR_1->dst->plane[2].sliceH += 1;
    }
    return VAR_3;
}
