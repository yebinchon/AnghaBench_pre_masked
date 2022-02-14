
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MOVMuxCencContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int const) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int const*,int) ;

int FUNC_7(MOVMuxCencContext* VAR_0, AVIOContext *VAR_1,
                                 const uint8_t *VAR_2, int VAR_3)
{
    const uint8_t *VAR_4 = VAR_2;
    const uint8_t *VAR_5 = VAR_4 + VAR_3;
    const uint8_t *VAR_6, *VAR_7;
    int VAR_8;

    VAR_8 = FUNC_5(VAR_0);
    if (VAR_8) {
        return VAR_8;
    }

    VAR_3 = 0;
    VAR_6 = FUNC_3(VAR_4, VAR_5);
    for (;;) {
        while (VAR_6 < VAR_5 && !*(VAR_6++));
        if (VAR_6 == VAR_5)
            break;

        VAR_7 = FUNC_3(VAR_6, VAR_5);

        FUNC_2(VAR_1, VAR_7 - VAR_6);
        FUNC_1(VAR_1, *VAR_6);
        FUNC_6(VAR_0, VAR_1, VAR_6 + 1, VAR_7 - VAR_6 - 1);

        FUNC_0(VAR_0, 5, VAR_7 - VAR_6 - 1);

        VAR_3 += 4 + VAR_7 - VAR_6;
        VAR_6 = VAR_7;
    }

    VAR_8 = FUNC_4(VAR_0);
    if (VAR_8) {
        return VAR_8;
    }

    return VAR_3;
}
