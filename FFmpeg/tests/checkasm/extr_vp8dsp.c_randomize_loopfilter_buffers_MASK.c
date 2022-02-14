
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int,int,int,int) ;
 int FUNC_3 (int,int ,int) ;

__attribute__((used)) static void FUNC_4(int VAR_0, int VAR_1,
                                         int VAR_2, int VAR_3, int VAR_4,
                                         int VAR_5, uint8_t *VAR_6,
                                         int VAR_7)
{
    uint32_t VAR_8 = 0xff;
    int VAR_9 = VAR_2 ? VAR_0 : VAR_0 * VAR_1;
    int VAR_10 = VAR_2 ? 1 : VAR_1;
    int VAR_11 = VAR_2 ? VAR_1 : 1;
    int VAR_12;
    for (VAR_12 = 0; VAR_12 < 8; VAR_12 += 2) {




        int VAR_13 = VAR_9 + VAR_12 * VAR_10, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
        FUNC_3(VAR_13, 0, VAR_17 = FUNC_0() & VAR_8);
        if (VAR_12 == 0 && VAR_7 >= 0 || VAR_7 > 0)
            FUNC_2(VAR_13, 1, VAR_18, VAR_17, VAR_5 + 1, VAR_4 - VAR_5 - 1);
        else
            FUNC_1(VAR_13, 1, VAR_18 = VAR_17, VAR_5);
        FUNC_1(VAR_13, 2, VAR_19 = VAR_18, VAR_4);
        FUNC_1(VAR_13, 3, VAR_19, VAR_4);
        FUNC_1(VAR_13, -1, VAR_16 = VAR_17, VAR_3 >> 2);
        if (VAR_12 == 2 && VAR_7 >= 0 || VAR_7 > 0)
            FUNC_2(VAR_13, -2, VAR_15, VAR_16, VAR_5 + 1, VAR_4 - VAR_5 - 1);
        else
            FUNC_1(VAR_13, -2, VAR_15 = VAR_16, VAR_5);
        FUNC_1(VAR_13, -3, VAR_14 = VAR_15, VAR_4);
        FUNC_1(VAR_13, -4, VAR_14, VAR_4);
    }
}
