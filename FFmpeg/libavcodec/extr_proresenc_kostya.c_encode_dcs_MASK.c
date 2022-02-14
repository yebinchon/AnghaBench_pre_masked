
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int PutBitContext ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_4(PutBitContext *VAR_2, int16_t *VAR_3,
                       int VAR_4, int VAR_5)
{
    int VAR_6;
    int VAR_7 = 3, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_10 = (VAR_3[0] - 0x4000) / VAR_5;
    FUNC_3(VAR_2, VAR_0, FUNC_2(VAR_10));
    VAR_12 = 0;
    VAR_7 = 3;
    VAR_3 += 64;

    for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++, VAR_3 += 64) {
        VAR_9 = (VAR_3[0] - 0x4000) / VAR_5;
        VAR_11 = VAR_9 - VAR_10;
        VAR_13 = FUNC_1(VAR_11);
        VAR_11 = (VAR_11 ^ VAR_12) - VAR_12;
        VAR_8 = FUNC_2(VAR_11);
        FUNC_3(VAR_2, VAR_1[VAR_7], VAR_8);
        VAR_7 = (VAR_8 + (VAR_8 & 1)) >> 1;
        VAR_7 = FUNC_0(VAR_7, 3);
        VAR_12 = VAR_13;
        VAR_10 = VAR_9;
    }
}
