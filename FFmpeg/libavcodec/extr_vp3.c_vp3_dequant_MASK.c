
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int16_t ;
struct TYPE_5__ {size_t qpi; int dc; } ;
typedef TYPE_1__ Vp3Fragment ;
struct TYPE_6__ {int**** qmat; size_t* idct_scantable; int*** dct_tokens; int avctx; } ;
typedef TYPE_2__ Vp3DecodeContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static inline int FUNC_1(Vp3DecodeContext *VAR_1, Vp3Fragment *VAR_2,
                              int VAR_3, int VAR_4, int16_t VAR_5[64])
{
    int16_t *VAR_6 = VAR_1->qmat[VAR_2->qpi][VAR_4][VAR_3];
    uint8_t *VAR_7 = VAR_1->idct_scantable;
    int VAR_8 = 0;

    do {
        int VAR_9 = *VAR_1->dct_tokens[VAR_3][VAR_8];
        switch (VAR_9 & 3) {
        case 0:
            if (--VAR_9 < 4)
                VAR_1->dct_tokens[VAR_3][VAR_8]++;
            else
                *VAR_1->dct_tokens[VAR_3][VAR_8] = VAR_9 & ~3;
            goto end;
        case 1:
            VAR_1->dct_tokens[VAR_3][VAR_8]++;
            VAR_8 += (VAR_9 >> 2) & 0x7f;
            if (VAR_8 > 63) {
                FUNC_0(VAR_1->avctx, VAR_0, "Coefficient index overflow\n");
                return VAR_8;
            }
            VAR_5[VAR_7[VAR_8]] = (VAR_9 >> 9) * VAR_6[VAR_7[VAR_8]];
            VAR_8++;
            break;
        case 2:
            VAR_5[VAR_7[VAR_8]] = (VAR_9 >> 2) * VAR_6[VAR_7[VAR_8]];
            VAR_1->dct_tokens[VAR_3][VAR_8++]++;
            break;
        default:
            return VAR_8;
        }
    } while (VAR_8 < 64);

    VAR_8--;
end:

    VAR_5[0] = VAR_2->dc * VAR_1->qmat[0][VAR_4][VAR_3][0];
    return VAR_8;
}
