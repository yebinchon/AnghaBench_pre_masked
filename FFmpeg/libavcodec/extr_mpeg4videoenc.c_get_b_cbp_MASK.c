
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int (* clear_block ) (int ) ;} ;
struct TYPE_5__ {int mpv_flags; int lambda2; scalar_t__* coded_score; int dquant; int* block_last_index; int * block; TYPE_1__ bdsp; } ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(MpegEncContext *VAR_2, int16_t VAR_3[6][64],
                            int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7 = 0, VAR_8;

    if (VAR_2->mpv_flags & VAR_1) {
        int VAR_9 = 0;
        const int VAR_10 = VAR_2->lambda2 >> (VAR_0 - 6);

        for (VAR_8 = 0; VAR_8 < 6; VAR_8++) {
            if (VAR_2->coded_score[VAR_8] < 0) {
                VAR_9 += VAR_2->coded_score[VAR_8];
                VAR_7 |= 1 << (5 - VAR_8);
            }
        }

        if (VAR_7) {
            int VAR_11 = -6;
            if ((VAR_4 | VAR_5 | VAR_2->dquant | VAR_6) == 0)
                VAR_11 -= 4;

            VAR_11 *= VAR_10;
            if (VAR_11 <= VAR_9)
                VAR_7 = 0;
        }

        for (VAR_8 = 0; VAR_8 < 6; VAR_8++) {
            if (VAR_2->block_last_index[VAR_8] >= 0 && ((VAR_7 >> (5 - VAR_8)) & 1) == 0) {
                VAR_2->block_last_index[VAR_8] = -1;
                VAR_2->bdsp.clear_block(VAR_2->block[VAR_8]);
            }
        }
    } else {
        for (VAR_8 = 0; VAR_8 < 6; VAR_8++) {
            if (VAR_2->block_last_index[VAR_8] >= 0)
                VAR_7 |= 1 << (5 - VAR_8);
        }
    }
    return VAR_7;
}
