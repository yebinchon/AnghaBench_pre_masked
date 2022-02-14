
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int AVBlowfish ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,scalar_t__*,scalar_t__*,scalar_t__*,int,scalar_t__*,int,char*) ;
 char** VAR_10 ;

int FUNC_7(void)
{
    uint32_t VAR_11[VAR_1];
    uint32_t VAR_12[VAR_1];
    uint8_t VAR_13[16], VAR_14[8];
    int VAR_15;
    AVBlowfish *VAR_16 = FUNC_0();
    if (!VAR_16)
        return 1;

    FUNC_2(VAR_16, "abcdefghijklmnopqrstuvwxyz", 26);

    FUNC_6(VAR_16, VAR_13, VAR_6, VAR_2, 1, ((void*)0), 0, "encryption");
    FUNC_6(VAR_16, VAR_13, VAR_2, VAR_6, 1, ((void*)0), 1, "decryption");
    FUNC_6(VAR_16, VAR_13, VAR_13, VAR_2, 1, ((void*)0), 0, "Inplace encryption");
    FUNC_6(VAR_16, VAR_13, VAR_13, VAR_6, 1, ((void*)0), 1, "Inplace decryption");
    FUNC_4(VAR_14, VAR_0, 8);
    FUNC_6(VAR_16, VAR_13, VAR_7, VAR_3, 2, VAR_14, 0, "CBC encryption");
    FUNC_4(VAR_14, VAR_0, 8);
    FUNC_6(VAR_16, VAR_13, VAR_3, VAR_7, 2, VAR_14, 1, "CBC decryption");
    FUNC_4(VAR_14, VAR_0, 8);
    FUNC_6(VAR_16, VAR_13, VAR_13, VAR_3, 2, VAR_14, 0, "Inplace CBC encryption");
    FUNC_4(VAR_14, VAR_0, 8);
    FUNC_6(VAR_16, VAR_13, VAR_13, VAR_7, 2, VAR_14, 1, "Inplace CBC decryption");

    FUNC_4(VAR_11, VAR_8, sizeof(*VAR_8) * VAR_1);
    FUNC_4(VAR_12, VAR_9, sizeof(*VAR_9) * VAR_1);

    for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
        FUNC_2(VAR_16, VAR_10[VAR_15], 8);

        FUNC_1(VAR_16, &VAR_11[VAR_15], &VAR_12[VAR_15], 0);
        if (VAR_11[VAR_15] != VAR_4[VAR_15] || VAR_12[VAR_15] != VAR_5[VAR_15]) {
            FUNC_5("Test encryption failed.\n");
            return 2;
        }

        FUNC_1(VAR_16, &VAR_11[VAR_15], &VAR_12[VAR_15], 1);
        if (VAR_11[VAR_15] != VAR_8[VAR_15] || VAR_12[VAR_15] != VAR_9[VAR_15]) {
            FUNC_5("Test decryption failed.\n");
            return 3;
        }
    }
    FUNC_5("Test encryption/decryption success.\n");
    FUNC_3(VAR_16);

    return 0;
}
