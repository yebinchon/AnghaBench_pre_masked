
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int linesize; size_t mb_x; size_t mb_stride; scalar_t__ mb_y; scalar_t__ start_mb_y; int uvlinesize; int end_mb_y; int mb_width; int ** dest; scalar_t__ first_slice_line; TYPE_1__* avctx; } ;
struct TYPE_8__ {int* cbp; int* ttblk; TYPE_3__ s; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int *,int*,int*,int,int) ;
 int FUNC_1 (TYPE_2__*,int *,int*,int*,int,int) ;

void FUNC_2(VC1Context *VAR_6)
{
    MpegEncContext *VAR_7 = &VAR_6->s;
    int VAR_8 = VAR_2 && (VAR_7->avctx->flags & VAR_0) ? 4 : 6;
    uint8_t *VAR_9;
    uint32_t *VAR_10;
    int *VAR_11;
    uint32_t VAR_12 = 0;
    int VAR_13;







    if (!VAR_7->first_slice_line) {
        VAR_9 = VAR_7->dest[0] - 16 * VAR_7->linesize;
        VAR_10 = &VAR_6->cbp[VAR_7->mb_x - VAR_7->mb_stride];
        VAR_11 = &VAR_6->ttblk[VAR_7->mb_x - VAR_7->mb_stride];
        VAR_12 = VAR_7->mb_y == VAR_7->start_mb_y + 1 ? VAR_5 : 0;
        for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
            FUNC_1(VAR_6, VAR_13 > 3 ? VAR_7->dest[VAR_13 - 3] - 8 * VAR_7->uvlinesize : VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
    }
    if (VAR_7->mb_y == VAR_7->end_mb_y - 1) {
        VAR_9 = VAR_7->dest[0];
        VAR_10 = &VAR_6->cbp[VAR_7->mb_x];
        VAR_11 = &VAR_6->ttblk[VAR_7->mb_x];
        VAR_12 = VAR_7->first_slice_line ? VAR_5 | VAR_1 : VAR_1;
        for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
            FUNC_1(VAR_6, VAR_13 > 3 ? VAR_7->dest[VAR_13 - 3] : VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
    }

    if (!VAR_7->first_slice_line) {
        VAR_9 = VAR_7->dest[0] - 16 * VAR_7->linesize - 16;
        VAR_10 = &VAR_6->cbp[VAR_7->mb_x - VAR_7->mb_stride - 1];
        VAR_11 = &VAR_6->ttblk[VAR_7->mb_x - VAR_7->mb_stride - 1];
        if (VAR_7->mb_x) {
            VAR_12 = VAR_7->mb_x == 1 ? VAR_3 : 0;
            for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
                FUNC_0(VAR_6, VAR_13 > 3 ? VAR_7->dest[VAR_13 - 3] - 8 * VAR_7->uvlinesize - 8 : VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
        }
        if (VAR_7->mb_x == VAR_7->mb_width - 1) {
            VAR_9 += 16;
            VAR_10++;
            VAR_11++;
            VAR_12 = VAR_7->mb_x == 0 ? VAR_3 | VAR_4 : VAR_4;
            for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
                FUNC_0(VAR_6, VAR_13 > 3 ? VAR_7->dest[VAR_13 - 3] - 8 * VAR_7->uvlinesize : VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
        }
    }
    if (VAR_7->mb_y == VAR_7->end_mb_y - 1) {
        VAR_9 = VAR_7->dest[0] - 16;
        VAR_10 = &VAR_6->cbp[VAR_7->mb_x - 1];
        VAR_11 = &VAR_6->ttblk[VAR_7->mb_x - 1];
        if (VAR_7->mb_x) {
            VAR_12 = VAR_7->mb_x == 1 ? VAR_3 : 0;
            for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
                FUNC_0(VAR_6, VAR_13 > 3 ? VAR_7->dest[VAR_13 - 3] - 8 : VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
        }
        if (VAR_7->mb_x == VAR_7->mb_width - 1) {
            VAR_9 += 16;
            VAR_10++;
            VAR_11++;
            VAR_12 = VAR_7->mb_x == 0 ? VAR_3 | VAR_4 : VAR_4;
            for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
                FUNC_0(VAR_6, VAR_13 > 3 ? VAR_7->dest[VAR_13 - 3] : VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
        }
    }
}
