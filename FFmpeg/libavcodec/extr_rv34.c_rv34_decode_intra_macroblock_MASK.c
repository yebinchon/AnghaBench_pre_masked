
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_12__ {int mb_x; int mb_y; int mb_stride; int resync_mb_x; int resync_mb_y; int mb_width; int qscale; TYPE_2__* current_picture_ptr; } ;
struct TYPE_9__ {int quant; } ;
struct TYPE_11__ {int* cbp_luma; int* cbp_chroma; int* deblock_coefs; scalar_t__ is16; TYPE_1__ si; int * avail_cache; TYPE_4__ s; } ;
struct TYPE_10__ {int * qscale_table; int * mb_type; } ;
typedef TYPE_3__ RV34DecContext ;
typedef TYPE_4__ MpegEncContext ;


 int FUNC_0 (int *,int,int,int,int,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (TYPE_3__*,int *,int) ;

__attribute__((used)) static int FUNC_5(RV34DecContext *VAR_0, int8_t *VAR_1)
{
    MpegEncContext *VAR_2 = &VAR_0->s;
    int VAR_3, VAR_4;
    int VAR_5 = VAR_2->mb_x + VAR_2->mb_y * VAR_2->mb_stride;


    FUNC_1(VAR_0->avail_cache, 0, sizeof(VAR_0->avail_cache));
    FUNC_0(VAR_0->avail_cache + 6, 2, 2, 4, 1, 4);
    VAR_4 = (VAR_2->mb_x - VAR_2->resync_mb_x) + (VAR_2->mb_y - VAR_2->resync_mb_y) * VAR_2->mb_width;
    if(VAR_2->mb_x && VAR_4)
        VAR_0->avail_cache[5] =
        VAR_0->avail_cache[9] = VAR_2->current_picture_ptr->mb_type[VAR_5 - 1];
    if(VAR_4 >= VAR_2->mb_width)
        VAR_0->avail_cache[2] =
        VAR_0->avail_cache[3] = VAR_2->current_picture_ptr->mb_type[VAR_5 - VAR_2->mb_stride];
    if(((VAR_2->mb_x+1) < VAR_2->mb_width) && VAR_4 >= VAR_2->mb_width - 1)
        VAR_0->avail_cache[4] = VAR_2->current_picture_ptr->mb_type[VAR_5 - VAR_2->mb_stride + 1];
    if(VAR_2->mb_x && VAR_4 > VAR_2->mb_width)
        VAR_0->avail_cache[1] = VAR_2->current_picture_ptr->mb_type[VAR_5 - VAR_2->mb_stride - 1];

    VAR_2->qscale = VAR_0->si.quant;
    VAR_3 = FUNC_2(VAR_0, VAR_1);
    VAR_0->cbp_luma [VAR_5] = VAR_3;
    VAR_0->cbp_chroma[VAR_5] = VAR_3 >> 16;
    VAR_0->deblock_coefs[VAR_5] = 0xFFFF;
    VAR_2->current_picture_ptr->qscale_table[VAR_5] = VAR_2->qscale;

    if(VAR_3 == -1)
        return -1;

    if(VAR_0->is16){
        FUNC_3(VAR_0, VAR_1, VAR_3);
        return 0;
    }

    FUNC_4(VAR_0, VAR_1, VAR_3);
    return 0;
}
