
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned long long uint64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned long long) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_0, uint64_t VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = FUNC_2(VAR_1);


    FUNC_0(VAR_1 < (1ULL << 56) - 1);

    if (VAR_2 == 0)

        VAR_2 = VAR_4;


    FUNC_0(VAR_2 >= VAR_4);

    VAR_1 |= 1ULL << VAR_2 * 7;
    for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
        FUNC_1(VAR_0, (uint8_t)(VAR_1 >> VAR_3 * 8));
}
