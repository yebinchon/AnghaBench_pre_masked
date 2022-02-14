
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int PutBitContext ;


 int FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (int *,int,int const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

void FUNC_9(PutBitContext *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_3 >> 4;
    int VAR_5 = VAR_3 & 15;
    int VAR_6;

    if (VAR_3 == 0)
        return;

    FUNC_1(VAR_3 <= FUNC_6(VAR_1));

    if (VAR_0 || VAR_4 < 16 || FUNC_5(VAR_1) & 7) {
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
            FUNC_4(VAR_1, 16, FUNC_0(VAR_2 + 2 * VAR_6));
    } else {
        for (VAR_6 = 0; FUNC_5(VAR_1) & 31; VAR_6++)
            FUNC_4(VAR_1, 8, VAR_2[VAR_6]);
        FUNC_2(VAR_1);
        FUNC_3(FUNC_7(VAR_1), VAR_2 + VAR_6, 2 * VAR_4 - VAR_6);
        FUNC_8(VAR_1, 2 * VAR_4 - VAR_6);
    }

    FUNC_4(VAR_1, VAR_5, FUNC_0(VAR_2 + 2 * VAR_4) >> (16 - VAR_5));
}
