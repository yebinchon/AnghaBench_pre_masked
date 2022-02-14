
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef short int16_t ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(short *const VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;



    VAR_12 = (int) VAR_4[1 * 8];
    VAR_9 = FUNC_1(VAR_2, VAR_12, 16);

    VAR_11 = VAR_12 + VAR_9;
    VAR_10 = VAR_12 - VAR_9;
    VAR_11 = 2 * FUNC_1(VAR_1, VAR_11, 16);
    VAR_10 = 2 * FUNC_1(VAR_1, VAR_10, 16);



    VAR_5 = VAR_6 = (int) VAR_4[0 * 8];
    VAR_8 = (int) VAR_4[2 * 8];
    VAR_7 = FUNC_1(VAR_3, VAR_8, 16);

    FUNC_0(VAR_5, VAR_8, VAR_13);
    FUNC_0(VAR_5, VAR_12, VAR_13);
    VAR_4[8 * 0] = (int16_t) (VAR_5 >> VAR_0);
    VAR_4[8 * 7] = (int16_t) (VAR_12 >> VAR_0);
    FUNC_0(VAR_8, VAR_9, VAR_5);
    VAR_4[8 * 3] = (int16_t) (VAR_8 >> VAR_0);
    VAR_4[8 * 4] = (int16_t) (VAR_9 >> VAR_0);

    FUNC_0(VAR_6, VAR_7, VAR_5);
    FUNC_0(VAR_6, VAR_11, VAR_5);
    VAR_4[8 * 1] = (int16_t) (VAR_6 >> VAR_0);
    VAR_4[8 * 6] = (int16_t) (VAR_11 >> VAR_0);
    FUNC_0(VAR_7, VAR_10, VAR_5);
    VAR_4[8 * 2] = (int16_t) (VAR_7 >> VAR_0);
    VAR_4[8 * 5] = (int16_t) (VAR_10 >> VAR_0);
}
