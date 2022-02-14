
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int16_t ;
struct TYPE_6__ {int poc; } ;
struct TYPE_5__ {size_t* permutated; } ;
struct TYPE_7__ {int mby; int mbx; TYPE_2__ cur; int avctx; TYPE_1__ scantable; } ;
typedef TYPE_3__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(AVSContext *VAR_2, int16_t *VAR_3, uint8_t *VAR_4,
                          int16_t *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9 = 1 << (VAR_7 - 1);
    int VAR_10 = -1;
    const uint8_t *VAR_11 = VAR_2->scantable.permutated;


    while (--VAR_8 >= 0) {
        VAR_10 += VAR_4[VAR_8];
        if (VAR_10 > 63) {
            FUNC_0(VAR_2->avctx, VAR_1,
                   "position out of block bounds at pic %d MB(%d,%d)\n",
                   VAR_2->cur.poc, VAR_2->mbx, VAR_2->mby);
            return VAR_0;
        }
        VAR_5[VAR_11[VAR_10]] = (VAR_3[VAR_8] * VAR_6 + VAR_9) >> VAR_7;
    }
    return 0;
}
