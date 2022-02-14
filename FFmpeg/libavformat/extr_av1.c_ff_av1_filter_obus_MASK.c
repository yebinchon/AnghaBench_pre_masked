
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int AVIOContext ;






 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int const*,int,int *,int*,int*,int*,int*) ;

int FUNC_2(AVIOContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    const uint8_t *VAR_3 = VAR_1 + VAR_2;
    int64_t VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_2 = 0;
    while (VAR_1 < VAR_3) {
        int VAR_9 = FUNC_1(VAR_1, VAR_3 - VAR_1, &VAR_4, &VAR_5,
                                   &VAR_6, &VAR_7, &VAR_8);
        if (VAR_9 < 0)
            return VAR_9;

        switch (VAR_6) {
        case 129:
        case 130:
        case 128:
        case 131:
            break;
        default:
            FUNC_0(VAR_0, VAR_1, VAR_9);
            VAR_2 += VAR_9;
            break;
        }
        VAR_1 += VAR_9;
    }

    return VAR_2;
}
