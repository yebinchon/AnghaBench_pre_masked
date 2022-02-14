
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_0, uint32_t VAR_1, uint64_t VAR_2)
{
    int VAR_3, VAR_4 = 1;
    uint64_t VAR_5 = VAR_2;
    while (VAR_5 >>= 8)
        VAR_4++;

    FUNC_1(VAR_0, VAR_1);
    FUNC_2(VAR_0, VAR_4, 0);
    for (VAR_3 = VAR_4 - 1; VAR_3 >= 0; VAR_3--)
        FUNC_0(VAR_0, (uint8_t)(VAR_2 >> VAR_3 * 8));
}
