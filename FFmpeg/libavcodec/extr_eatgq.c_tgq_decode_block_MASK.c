
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int16_t ;
struct TYPE_4__ {size_t* permutated; } ;
struct TYPE_5__ {int* qtable; TYPE_1__ scantable; } ;
typedef TYPE_2__ TgqContext ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(TgqContext *VAR_0, int16_t VAR_1[64], GetBitContext *VAR_2)
{
    uint8_t *VAR_3 = VAR_0->scantable.permutated;
    int VAR_4, VAR_5, VAR_6;
    VAR_1[0] = FUNC_1(VAR_2, 8) * VAR_0->qtable[0];
    for (VAR_4 = 1; VAR_4 < 64;) {
        switch (FUNC_2(VAR_2, 3)) {
        case 4:
            VAR_1[VAR_3[VAR_4++]] = 0;
        case 0:
            VAR_1[VAR_3[VAR_4++]] = 0;
            FUNC_3(VAR_2, 3);
            break;
        case 5:
        case 1:
            FUNC_3(VAR_2, 2);
            VAR_6 = FUNC_0(VAR_2, 6);
            for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
                VAR_1[VAR_3[VAR_4++]] = 0;
            break;
        case 6:
            FUNC_3(VAR_2, 3);
            VAR_1[VAR_3[VAR_4]] = -VAR_0->qtable[VAR_3[VAR_4]];
            VAR_4++;
            break;
        case 2:
            FUNC_3(VAR_2, 3);
            VAR_1[VAR_3[VAR_4]] = VAR_0->qtable[VAR_3[VAR_4]];
            VAR_4++;
            break;
        case 7:
        case 3:
            FUNC_3(VAR_2, 2);
            if (FUNC_2(VAR_2, 6) == 0x3F) {
                FUNC_3(VAR_2, 6);
                VAR_1[VAR_3[VAR_4]] = FUNC_1(VAR_2, 8) * VAR_0->qtable[VAR_3[VAR_4]];
            } else {
                VAR_1[VAR_3[VAR_4]] = FUNC_1(VAR_2, 6) * VAR_0->qtable[VAR_3[VAR_4]];
            }
            VAR_4++;
            break;
        }
    }
    VAR_1[0] += 128 << 4;
}
