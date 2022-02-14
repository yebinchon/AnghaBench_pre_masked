
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {int mant1_cnt; int* qmant1_ptr; int mant2_cnt; int* qmant2_ptr; int mant4_cnt; int* qmant4_ptr; } ;
typedef TYPE_1__ AC3Mant ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(AC3Mant *VAR_0, int32_t *VAR_1,
                                      uint8_t *VAR_2, uint8_t *VAR_3,
                                      int16_t *VAR_4, int VAR_5,
                                      int VAR_6)
{
    int VAR_7;

    for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7++) {
        int VAR_8 = VAR_1[VAR_7];
        int VAR_9 = VAR_2[VAR_7];
        int VAR_10 = VAR_3[VAR_7];
        if (VAR_10)
        switch (VAR_10) {
        case 1:
            VAR_10 = FUNC_1(VAR_8, VAR_9, 3);
            switch (VAR_0->mant1_cnt) {
            case 0:
                VAR_0->qmant1_ptr = &VAR_4[VAR_7];
                VAR_10 = 9 * VAR_10;
                VAR_0->mant1_cnt = 1;
                break;
            case 1:
                *VAR_0->qmant1_ptr += 3 * VAR_10;
                VAR_0->mant1_cnt = 2;
                VAR_10 = 128;
                break;
            default:
                *VAR_0->qmant1_ptr += VAR_10;
                VAR_0->mant1_cnt = 0;
                VAR_10 = 128;
                break;
            }
            break;
        case 2:
            VAR_10 = FUNC_1(VAR_8, VAR_9, 5);
            switch (VAR_0->mant2_cnt) {
            case 0:
                VAR_0->qmant2_ptr = &VAR_4[VAR_7];
                VAR_10 = 25 * VAR_10;
                VAR_0->mant2_cnt = 1;
                break;
            case 1:
                *VAR_0->qmant2_ptr += 5 * VAR_10;
                VAR_0->mant2_cnt = 2;
                VAR_10 = 128;
                break;
            default:
                *VAR_0->qmant2_ptr += VAR_10;
                VAR_0->mant2_cnt = 0;
                VAR_10 = 128;
                break;
            }
            break;
        case 3:
            VAR_10 = FUNC_1(VAR_8, VAR_9, 7);
            break;
        case 4:
            VAR_10 = FUNC_1(VAR_8, VAR_9, 11);
            switch (VAR_0->mant4_cnt) {
            case 0:
                VAR_0->qmant4_ptr = &VAR_4[VAR_7];
                VAR_10 = 11 * VAR_10;
                VAR_0->mant4_cnt = 1;
                break;
            default:
                *VAR_0->qmant4_ptr += VAR_10;
                VAR_0->mant4_cnt = 0;
                VAR_10 = 128;
                break;
            }
            break;
        case 5:
            VAR_10 = FUNC_1(VAR_8, VAR_9, 15);
            break;
        case 14:
            VAR_10 = FUNC_0(VAR_8, VAR_9, 14);
            break;
        case 15:
            VAR_10 = FUNC_0(VAR_8, VAR_9, 16);
            break;
        default:
            VAR_10 = FUNC_0(VAR_8, VAR_9, VAR_10 - 1);
            break;
        }
        VAR_4[VAR_7] = VAR_10;
    }
}
