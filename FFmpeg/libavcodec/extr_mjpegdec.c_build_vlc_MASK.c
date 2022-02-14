
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int VLC ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,int *,int,int,int*,int,int,int*,int,int,int) ;
 int FUNC_2 (int *,int*,int const*,int const*) ;

__attribute__((used)) static int FUNC_3(VLC *VAR_0, const uint8_t *VAR_1,
                     const uint8_t *VAR_2, int VAR_3,
                     int VAR_4, int VAR_5)
{
    uint8_t VAR_6[256] = { 0 };
    uint16_t VAR_7[256];
    uint16_t VAR_8[256];
    int VAR_9;

    FUNC_0(VAR_3 <= 256);

    FUNC_2(VAR_6, VAR_7, VAR_1, VAR_2);

    for (VAR_9 = 0; VAR_9 < 256; VAR_9++)
        VAR_8[VAR_9] = VAR_9 + 16 * VAR_5;

    if (VAR_5)
        VAR_8[0] = 16 * 256;

    return FUNC_1(VAR_0, 9, VAR_3, VAR_6, 1, 1,
                              VAR_7, 2, 2, VAR_8, 2, 2, VAR_4);
}
