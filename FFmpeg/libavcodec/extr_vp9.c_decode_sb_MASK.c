
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef enum BlockPartition { ____Placeholder_BlockPartition } BlockPartition ;
typedef enum BlockLevel { ____Placeholder_BlockLevel } BlockLevel ;
struct TYPE_14__ {int *** partition; } ;
struct TYPE_21__ {int* left_partition_ctx; TYPE_1__ counts; int c; TYPE_9__* s; } ;
typedef TYPE_8__ VP9TileData ;
typedef int VP9Filter ;
struct TYPE_15__ {scalar_t__ intraonly; scalar_t__ keyframe; } ;
struct TYPE_20__ {TYPE_6__* frames; TYPE_2__ h; } ;
struct TYPE_16__ {int *** partition; } ;
struct TYPE_17__ {TYPE_3__ p; } ;
struct TYPE_22__ {int* above_partition_ctx; int bytesperpixel; int cols; int rows; int ss_v; int ss_h; TYPE_7__ s; TYPE_4__ prob; } ;
typedef TYPE_9__ VP9Context ;
struct TYPE_18__ {TYPE_10__* f; } ;
struct TYPE_19__ {TYPE_5__ tf; } ;
struct TYPE_13__ {int* linesize; } ;
typedef TYPE_10__ AVFrame ;


 int VAR_0 ;
 size_t VAR_1 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*,int,int,int *,int,int,int,int) ;
 int *** VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int const) ;
 int FUNC_3 (int ,int ,int const*) ;

__attribute__((used)) static void FUNC_4(VP9TileData *VAR_4, int VAR_5, int VAR_6, VP9Filter *VAR_7,
                      ptrdiff_t VAR_8, ptrdiff_t VAR_9, enum BlockLevel VAR_10)
{
    const VP9Context *VAR_11 = VAR_4->s;
    int VAR_12 = ((VAR_11->above_partition_ctx[VAR_6] >> (3 - VAR_10)) & 1) |
            (((VAR_4->left_partition_ctx[VAR_5 & 0x7] >> (3 - VAR_10)) & 1) << 1);
    const uint8_t *VAR_13 = VAR_11->s.h.keyframe || VAR_11->s.h.intraonly ? VAR_2[VAR_10][VAR_12] :
                                                     VAR_11->prob.p.partition[VAR_10][VAR_12];
    enum BlockPartition VAR_14;
    ptrdiff_t VAR_15 = 4 >> VAR_10;
    AVFrame *VAR_16 = VAR_11->s.frames[VAR_1].tf.f;
    ptrdiff_t VAR_17 = VAR_16->linesize[0], VAR_18 = VAR_16->linesize[1];
    int VAR_19 = VAR_11->bytesperpixel;

    if (VAR_10 == VAR_0) {
        VAR_14 = FUNC_3(VAR_4->c, VAR_3, VAR_13);
        FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_14);
    } else if (VAR_6 + VAR_15 < VAR_11->cols) {
        if (VAR_5 + VAR_15 < VAR_11->rows) {
            VAR_14 = FUNC_3(VAR_4->c, VAR_3, VAR_13);
            switch (VAR_14) {
            case 130:
                FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_14);
                break;
            case 131:
                FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_14);
                VAR_8 += VAR_15 * 8 * VAR_17;
                VAR_9 += VAR_15 * 8 * VAR_18 >> VAR_11->ss_v;
                FUNC_1(VAR_4, VAR_5 + VAR_15, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_14);
                break;
            case 128:
                FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_14);
                VAR_8 += VAR_15 * 8 * VAR_19;
                VAR_9 += VAR_15 * 8 * VAR_19 >> VAR_11->ss_h;
                FUNC_1(VAR_4, VAR_5, VAR_6 + VAR_15, VAR_7, VAR_8, VAR_9, VAR_10, VAR_14);
                break;
            case 129:
                FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
                FUNC_4(VAR_4, VAR_5, VAR_6 + VAR_15, VAR_7,
                          VAR_8 + 8 * VAR_15 * VAR_19,
                          VAR_9 + (8 * VAR_15 * VAR_19 >> VAR_11->ss_h), VAR_10 + 1);
                VAR_8 += VAR_15 * 8 * VAR_17;
                VAR_9 += VAR_15 * 8 * VAR_18 >> VAR_11->ss_v;
                FUNC_4(VAR_4, VAR_5 + VAR_15, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
                FUNC_4(VAR_4, VAR_5 + VAR_15, VAR_6 + VAR_15, VAR_7,
                          VAR_8 + 8 * VAR_15 * VAR_19,
                          VAR_9 + (8 * VAR_15 * VAR_19 >> VAR_11->ss_h), VAR_10 + 1);
                break;
            default:
                FUNC_0(0);
            }
        } else if (FUNC_2(VAR_4->c, VAR_13[1])) {
            VAR_14 = 129;
            FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
            FUNC_4(VAR_4, VAR_5, VAR_6 + VAR_15, VAR_7,
                      VAR_8 + 8 * VAR_15 * VAR_19,
                      VAR_9 + (8 * VAR_15 * VAR_19 >> VAR_11->ss_h), VAR_10 + 1);
        } else {
            VAR_14 = 131;
            FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_14);
        }
    } else if (VAR_5 + VAR_15 < VAR_11->rows) {
        if (FUNC_2(VAR_4->c, VAR_13[2])) {
            VAR_14 = 129;
            FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
            VAR_8 += VAR_15 * 8 * VAR_17;
            VAR_9 += VAR_15 * 8 * VAR_18 >> VAR_11->ss_v;
            FUNC_4(VAR_4, VAR_5 + VAR_15, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
        } else {
            VAR_14 = 128;
            FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_14);
        }
    } else {
        VAR_14 = 129;
        FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 + 1);
    }
    VAR_4->counts.partition[VAR_10][VAR_12][VAR_14]++;
}
