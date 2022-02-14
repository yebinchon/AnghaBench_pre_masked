
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int const*) ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1, const uint8_t *VAR_2)
{
    int VAR_3, VAR_4;
    uint8_t VAR_5[64];


    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
        for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
            FUNC_2(VAR_5 + VAR_3 * 4 + VAR_4 * 16, VAR_2 + VAR_3 * 4 + VAR_4 * VAR_1);

    FUNC_0(VAR_0 + 0, 16, VAR_5);
    FUNC_1(VAR_0 + 8, 16, VAR_5);

    return 16;
}
