
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int*,int*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int ,int*) ;

int FUNC_5(u8_t *VAR_0, u32_t VAR_1,
                          const u8_t VAR_2[16])
{
    u8_t VAR_3[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, };
    u8_t VAR_4[16];
    int VAR_5, VAR_6;

    FUNC_0("IVIndex %u, PrivacyKey %s", VAR_1, FUNC_1(VAR_2, 16));

    FUNC_4(VAR_1, &VAR_3[5]);
    FUNC_3(&VAR_3[9], &VAR_0[7], 7);

    FUNC_0("PrivacyRandom %s", FUNC_1(VAR_3, 16));

    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
    if (VAR_5) {
        return VAR_5;
    }

    for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
        VAR_0[1 + VAR_6] ^= VAR_4[VAR_6];
    }

    return 0;
}
