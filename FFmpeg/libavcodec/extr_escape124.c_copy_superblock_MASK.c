
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(uint16_t* VAR_0, unsigned VAR_1,
                            uint16_t* VAR_2, unsigned VAR_3)
{
    unsigned VAR_4;
    if (VAR_2)
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
            FUNC_0(VAR_0 + VAR_4 * VAR_1, VAR_2 + VAR_4 * VAR_3,
                   sizeof(uint16_t) * 8);
    else
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
            FUNC_1(VAR_0 + VAR_4 * VAR_1, 0, sizeof(uint16_t) * 8);
}
