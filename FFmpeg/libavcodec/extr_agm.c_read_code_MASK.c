
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
    int VAR_6 = 0, VAR_7 = 0, VAR_8;

    if (FUNC_1(VAR_1) < 2)
        return VAR_0;

    if (FUNC_2(VAR_1, 2)) {
        switch (FUNC_2(VAR_1, 4)) {
        case 1:
        case 9:
            VAR_6 = 1;
            VAR_7 = 3;
            break;
        case 2:
            VAR_6 = 3;
            VAR_7 = 4;
            break;
        case 3:
            VAR_6 = 7;
            VAR_7 = 4;
            break;
        case 5:
        case 13:
            VAR_6 = 2;
            VAR_7 = 3;
            break;
        case 6:
            VAR_6 = 4;
            VAR_7 = 4;
            break;
        case 7:
            VAR_6 = 8;
            VAR_7 = 4;
            break;
        case 10:
            VAR_6 = 5;
            VAR_7 = 4;
            break;
        case 11:
            VAR_6 = 9;
            VAR_7 = 4;
            break;
        case 14:
            VAR_6 = 6;
            VAR_7 = 4;
            break;
        case 15:
            VAR_6 = ((FUNC_2(VAR_1, 5) & 0x10) | 0xA0) >> 4;
            VAR_7 = 5;
            break;
        default:
            return VAR_0;
        }

        FUNC_3(VAR_1, VAR_7);
        *VAR_3 = FUNC_0(VAR_1, VAR_6);
        *VAR_4 = 1;
        *VAR_2 = 0;
        VAR_8 = 1 << (VAR_6 - 1);
        if (*VAR_3 < VAR_8)
            *VAR_3 = -(VAR_8 + *VAR_3);
    } else if (FUNC_2(VAR_1, 3) & 4) {
        FUNC_3(VAR_1, 3);
        if (VAR_5 == 1) {
            if (FUNC_2(VAR_1, 4)) {
                if (FUNC_2(VAR_1, 4) == 1) {
                    FUNC_3(VAR_1, 4);
                    *VAR_2 = FUNC_0(VAR_1, 16);
                } else {
                    *VAR_2 = FUNC_0(VAR_1, 4);
                }
            } else {
                FUNC_3(VAR_1, 4);
                *VAR_2 = FUNC_0(VAR_1, 10);
            }
        } else if (VAR_5 == 0) {
            *VAR_2 = FUNC_0(VAR_1, 10);
        }
        *VAR_3 = 0;
    } else {
        FUNC_3(VAR_1, 3);
        if (VAR_5 == 0)
            *VAR_2 = FUNC_0(VAR_1, 4);
        else if (VAR_5 == 1)
            *VAR_2 = 0;
        *VAR_3 = 0;
    }

    return 0;
}
