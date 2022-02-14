
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int PutBitContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, int VAR_1, int VAR_2, const int *VAR_3)
{
    PutBitContext VAR_4;
    int VAR_5, VAR_6 = ~0, VAR_7 = VAR_2, VAR_8 = 0;

    FUNC_1(&VAR_4, VAR_0, VAR_1);
    while (VAR_7 > 0) {
        VAR_5 = VAR_3[VAR_8++];
        VAR_6 = ~VAR_6;
        VAR_7 -= VAR_5;
        for (; VAR_5 > 16; VAR_5 -= 16)
            FUNC_2(&VAR_4, 16, VAR_6);
        if (VAR_5)
            FUNC_2(&VAR_4, VAR_5, VAR_6);
    }
    FUNC_0(&VAR_4);
}
