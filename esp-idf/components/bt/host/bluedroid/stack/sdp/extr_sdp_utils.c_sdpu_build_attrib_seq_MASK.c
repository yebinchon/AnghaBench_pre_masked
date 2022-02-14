
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_5 ;

UINT8 *FUNC_2 (UINT8 *VAR_6, UINT16 *VAR_7, UINT16 VAR_8)
{
    UINT16 VAR_9;



    if (!VAR_7) {
        VAR_9 = 5;
    } else {
        VAR_9 = VAR_8 * 3;
    }

    if (VAR_9 > 255) {
        FUNC_1 (VAR_6, (VAR_0 << 3) | VAR_3);
        FUNC_0 (VAR_6, VAR_9);
    } else {
        FUNC_1 (VAR_6, (VAR_0 << 3) | VAR_2);
        FUNC_1 (VAR_6, VAR_9);
    }


    if (!VAR_7) {
        FUNC_1 (VAR_6, (VAR_5 << 3) | VAR_1);
        FUNC_0 (VAR_6, 0);
        FUNC_0 (VAR_6, 0xFFFF);
    } else {

        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++, VAR_7++) {
            FUNC_1 (VAR_6, (VAR_5 << 3) | VAR_4);
            FUNC_0 (VAR_6, *VAR_7);
        }
    }

    return (VAR_6);
}
