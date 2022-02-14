
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int *,int,int,int) ;
 int FUNC_1 (int *,int *,int,int,int) ;
 int FUNC_2 (int *,int *,int,int,int) ;

__attribute__((used)) static void FUNC_3(uint16_t *VAR_0, uint16_t *VAR_1, int VAR_2, ptrdiff_t VAR_3)
{
    uint8_t *VAR_4 = (uint8_t *)VAR_0;
    uint8_t *VAR_5 = (uint8_t *)VAR_1;
    ptrdiff_t VAR_6 = VAR_3 * 2;

    switch (VAR_2) {
    case 2:
        FUNC_1(VAR_4, VAR_5, VAR_6, VAR_6, 2);
        break;
    case 4:
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_6, 4);
        break;
    case 8:
        FUNC_0(VAR_4, VAR_5, VAR_6, VAR_6, 8);
        break;
    }
}
