
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_9__ {int* pts_reorder_error_count; scalar_t__* pts_reorder_error; TYPE_3__* internal; TYPE_1__* codecpar; } ;
struct TYPE_8__ {TYPE_2__* avctx; } ;
struct TYPE_7__ {int has_b_frames; } ;
struct TYPE_6__ {scalar_t__ codec_id; } ;
typedef TYPE_4__ AVStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int64_t FUNC_2(AVStream *VAR_4, int64_t *VAR_5, int64_t VAR_6) {
    int VAR_7 = VAR_4->codecpar->codec_id != VAR_0 &&
                       VAR_4->codecpar->codec_id != VAR_1;

    if(!VAR_7) {
        int VAR_8 = VAR_4->internal->avctx->has_b_frames;
        int VAR_9;

        if (VAR_6 == VAR_2) {
            int64_t VAR_10 = VAR_3;
            for (VAR_9 = 0; VAR_9<VAR_8; VAR_9++) {
                if (VAR_4->pts_reorder_error_count[VAR_9]) {
                    int64_t VAR_11 = VAR_4->pts_reorder_error[VAR_9] / VAR_4->pts_reorder_error_count[VAR_9];
                    if (VAR_11 < VAR_10) {
                        VAR_10 = VAR_11;
                        VAR_6 = VAR_5[VAR_9];
                    }
                }
            }
        } else {
            for (VAR_9 = 0; VAR_9<VAR_8; VAR_9++) {
                if (VAR_5[VAR_9] != VAR_2) {
                    int64_t VAR_12 = FUNC_0(VAR_5[VAR_9] - VAR_6)
                                    + (uint64_t)VAR_4->pts_reorder_error[VAR_9];
                    VAR_12 = FUNC_1(VAR_12, VAR_4->pts_reorder_error[VAR_9]);
                    VAR_4->pts_reorder_error[VAR_9] = VAR_12;
                    VAR_4->pts_reorder_error_count[VAR_9]++;
                    if (VAR_4->pts_reorder_error_count[VAR_9] > 250) {
                        VAR_4->pts_reorder_error[VAR_9] >>= 1;
                        VAR_4->pts_reorder_error_count[VAR_9] >>= 1;
                    }
                }
            }
        }
    }

    if (VAR_6 == VAR_2)
        VAR_6 = VAR_5[0];

    return VAR_6;
}
