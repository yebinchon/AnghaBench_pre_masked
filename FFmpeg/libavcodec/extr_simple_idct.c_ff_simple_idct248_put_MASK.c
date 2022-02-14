
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1, int16_t *VAR_2)
{
    int VAR_3;
    int16_t *VAR_4;


    VAR_4 = VAR_2;
    for(VAR_3=0;VAR_3<4;VAR_3++) {
        FUNC_0(0);
        FUNC_0(1);
        FUNC_0(2);
        FUNC_0(3);
        FUNC_0(4);
        FUNC_0(5);
        FUNC_0(6);
        FUNC_0(7);
        VAR_4 += 2 * 8;
    }


    for(VAR_3=0; VAR_3<8; VAR_3++) {
        FUNC_2(VAR_2 + VAR_3*8, 0);
    }


    for(VAR_3=0;VAR_3<8;VAR_3++) {
        FUNC_1(VAR_0 + VAR_3, 2 * VAR_1, VAR_2 + VAR_3);
        FUNC_1(VAR_0 + VAR_1 + VAR_3, 2 * VAR_1, VAR_2 + 8 + VAR_3);
    }
}
