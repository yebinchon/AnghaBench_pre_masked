
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVHMAC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int const*,int) ;

int FUNC_6(const uint8_t *VAR_2, int VAR_3, int VAR_4,
                        const uint8_t *VAR_5, int VAR_6, uint8_t *VAR_7)
{
    AVHMAC *VAR_8;

    VAR_8 = FUNC_1(VAR_0);
    if (!VAR_8)
        return FUNC_0(VAR_1);

    FUNC_4(VAR_8, VAR_5, VAR_6);
    if (VAR_4 <= 0) {
        FUNC_5(VAR_8, VAR_2, VAR_3);
    } else {
        FUNC_5(VAR_8, VAR_2, VAR_4);
        FUNC_5(VAR_8, VAR_2 + VAR_4 + 32, VAR_3 - VAR_4 - 32);
    }
    FUNC_2(VAR_8, VAR_7, 32);

    FUNC_3(VAR_8);

    return 0;
}
