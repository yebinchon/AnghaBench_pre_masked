
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int,int const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1, const uint8_t *VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_0(VAR_0, VAR_1, VAR_2);



    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
        for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
            FUNC_1(VAR_0 + VAR_3 * 4 + VAR_4 * VAR_1);

    return 16;
}
