
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ int64_t ;
typedef int GetByteContext ;


 int VAR_0 ;




 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int*,scalar_t__,int) ;
 int FUNC_4 (int *,int*,int*,scalar_t__,int) ;
 int FUNC_5 (int *,int*,int*,scalar_t__,int) ;
 int FUNC_6 (int *,int*,scalar_t__,int) ;

int FUNC_7(GetByteContext *VAR_1, uint8_t *VAR_2, int64_t *VAR_3)
{
    int64_t VAR_4 = FUNC_2(VAR_1);
    int VAR_5 = 0;
    uint8_t *VAR_6;

    if (VAR_4 < 0)
        return VAR_4;

    if (VAR_4 > *VAR_3)
        return VAR_0;

    *VAR_3 = VAR_4;
    VAR_6 = VAR_2;

    while (FUNC_1(VAR_1) > 0) {
        uint8_t VAR_7 = FUNC_0(VAR_1);
        int VAR_8 = VAR_7 >> 2;

        switch (VAR_7 & 0x03) {
        case 128:
            VAR_5 = FUNC_6(VAR_1, VAR_6, VAR_4, VAR_8);
            break;
        case 131:
            VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_6, VAR_4, VAR_8);
            break;
        case 130:
            VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_6, VAR_4, VAR_8);
            break;
        case 129:
            VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_6, VAR_4, VAR_8);
            break;
        }

        if (VAR_5 < 0)
            return VAR_5;

        VAR_6 += VAR_5;
        VAR_4 -= VAR_5;
    }

    return 0;
}
