
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int *,int ,int const*) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1,
                     uint8_t *VAR_2, ptrdiff_t VAR_3,
                     const uint8_t *VAR_4)
{
    uint8_t VAR_5[16];
    uint8_t VAR_6[16];

    FUNC_0(VAR_0, VAR_5, VAR_1, VAR_4);
    FUNC_0(VAR_2, VAR_6, VAR_3, VAR_4 + 8);
    FUNC_0(VAR_0 + 4, VAR_5, VAR_1, VAR_4 + 16);
    FUNC_0(VAR_2 + 4, VAR_6, VAR_3, VAR_4 + 24);
    FUNC_0(VAR_0 + 8, VAR_5, VAR_1, VAR_4 + 32);
    FUNC_0(VAR_2 + 8, VAR_6, VAR_3, VAR_4 + 40);
    FUNC_0(VAR_0 + 12, VAR_5, VAR_1, VAR_4 + 48);
    FUNC_0(VAR_2 + 12, VAR_6, VAR_3, VAR_4 + 56);

    return 64;
}
