
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


typedef int ptrdiff_t ;
typedef enum BlockLevel { ____Placeholder_BlockLevel } BlockLevel ;
struct TYPE_13__ {TYPE_6__* b; TYPE_5__* s; } ;
typedef TYPE_4__ VP9TileData ;
typedef int VP9Filter ;
struct TYPE_12__ {TYPE_2__* frames; } ;
struct TYPE_14__ {int bytesperpixel; int rows; int ss_v; int cols; int ss_h; TYPE_3__ s; } ;
typedef TYPE_5__ VP9Context ;
struct TYPE_15__ {int bl; scalar_t__ bp; } ;
typedef TYPE_6__ VP9Block ;
struct TYPE_16__ {int* linesize; } ;
struct TYPE_10__ {TYPE_7__* f; } ;
struct TYPE_11__ {TYPE_1__ tf; } ;
typedef TYPE_7__ AVFrame ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int,int,int *,int,int,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(VP9TileData *VAR_4, int VAR_5, int VAR_6, VP9Filter *VAR_7,
                          ptrdiff_t VAR_8, ptrdiff_t VAR_9, enum BlockLevel VAR_10)
{
    const VP9Context *VAR_11 = VAR_4->s;
    VP9Block *VAR_12 = VAR_4->b;
    ptrdiff_t VAR_13 = 4 >> VAR_10;
    AVFrame *VAR_14 = VAR_11->s.frames[VAR_1].tf.f;
    ptrdiff_t VAR_15 = VAR_14->linesize[0], VAR_16 = VAR_14->linesize[1];
    int VAR_17 = VAR_11->bytesperpixel;

    if (VAR_10 == VAR_0) {
        FUNC_0(VAR_12->bl == VAR_0);
        FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12->bl, VAR_12->bp);
    } else if (VAR_4->b->bl == VAR_10) {
        FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12->bl, VAR_12->bp);
        if (VAR_12->bp == VAR_2 && VAR_5 + VAR_13 < VAR_11->rows) {
            VAR_8 += VAR_13 * 8 * VAR_15;
            VAR_9 += VAR_13 * 8 * VAR_16 >> VAR_11->ss_v;
            FUNC_1(VAR_4, VAR_5 + VAR_13, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12->bl, VAR_12->bp);
        } else if (VAR_12->bp == VAR_3 && VAR_6 + VAR_13 < VAR_11->cols) {
            VAR_8 += VAR_13 * 8 * VAR_17;
            VAR_9 += VAR_13 * 8 * VAR_17 >> VAR_11->ss_h;
            FUNC_1(VAR_4, VAR_5, VAR_6 + VAR_13, VAR_7, VAR_8, VAR_9, VAR_12->bl, VAR_12->bp);
        }
    } else {
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
        if (VAR_6 + VAR_13 < VAR_11->cols) {
            if (VAR_5 + VAR_13 < VAR_11->rows) {
                FUNC_2(VAR_4, VAR_5, VAR_6 + VAR_13, VAR_7, VAR_8 + 8 * VAR_13 * VAR_17,
                              VAR_9 + (8 * VAR_13 * VAR_17 >> VAR_11->ss_h), VAR_10 + 1);
                VAR_8 += VAR_13 * 8 * VAR_15;
                VAR_9 += VAR_13 * 8 * VAR_16 >> VAR_11->ss_v;
                FUNC_2(VAR_4, VAR_5 + VAR_13, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
                FUNC_2(VAR_4, VAR_5 + VAR_13, VAR_6 + VAR_13, VAR_7,
                              VAR_8 + 8 * VAR_13 * VAR_17,
                              VAR_9 + (8 * VAR_13 * VAR_17 >> VAR_11->ss_h), VAR_10 + 1);
            } else {
                VAR_8 += VAR_13 * 8 * VAR_17;
                VAR_9 += VAR_13 * 8 * VAR_17 >> VAR_11->ss_h;
                FUNC_2(VAR_4, VAR_5, VAR_6 + VAR_13, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
            }
        } else if (VAR_5 + VAR_13 < VAR_11->rows) {
            VAR_8 += VAR_13 * 8 * VAR_15;
            VAR_9 += VAR_13 * 8 * VAR_16 >> VAR_11->ss_v;
            FUNC_2(VAR_4, VAR_5 + VAR_13, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
        }
    }
}
