
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16_t ;
typedef int PutBitContext ;


 int FUNC_0 (int,int) ;
 size_t FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int*,int ,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int * VAR_1 ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(PutBitContext *VAR_2, int16_t *VAR_3,
        int VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_6 = FUNC_2(VAR_5, 0, VAR_3[0] - 16384);
    VAR_7 = FUNC_3(VAR_6);
    FUNC_5(VAR_2, VAR_7, VAR_0);

    VAR_7 = 5; VAR_9 = 0; VAR_10 = 64;
    for (VAR_8 = 1; VAR_8 < VAR_4; VAR_8++, VAR_10 += 64) {
        VAR_11 = FUNC_2(VAR_5, 0, VAR_3[VAR_10] - 16384);
        VAR_12 = VAR_11 - VAR_6;
        VAR_13 = FUNC_0(VAR_12, VAR_9);
        VAR_14 = FUNC_4(FUNC_6(VAR_12), VAR_13);

        FUNC_5(VAR_2, VAR_14, VAR_1[FUNC_1(VAR_7, 6)]);

        VAR_7 = VAR_14;
        VAR_9 = VAR_12 >> 31;
        VAR_6 = VAR_11;
    }
}
