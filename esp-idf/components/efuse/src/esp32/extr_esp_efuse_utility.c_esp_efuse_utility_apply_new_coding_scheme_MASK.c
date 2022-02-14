
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int reg ;
typedef scalar_t__ esp_err_t ;
typedef scalar_t__ esp_efuse_coding_scheme_t ;
typedef int buf_w_data ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_5 (int,scalar_t__*) ;
 int FUNC_6 (int,scalar_t__*) ;

esp_err_t FUNC_7()
{
    uint8_t VAR_9[VAR_1 * 4];
    uint8_t VAR_10[VAR_1 * 4];
    uint32_t VAR_11[VAR_1];

    for (int VAR_12 = 1; VAR_12 < VAR_0; VAR_12++) {
        esp_efuse_coding_scheme_t VAR_13 = FUNC_2(VAR_12);

        if (VAR_13 != VAR_3) {
            FUNC_4(VAR_9, 0, sizeof(VAR_9));
            FUNC_4((uint8_t*)VAR_11, 0, sizeof(VAR_11));
            if (FUNC_6(VAR_12, (uint32_t*)VAR_9) == 1) {
                FUNC_5(VAR_12, (uint32_t*)VAR_10);
                if (VAR_13 == VAR_2) {
                    if (*((uint32_t*)VAR_9 + 6) != 0 || *((uint32_t*)VAR_9 + 7) != 0) {
                        return VAR_5;
                    }
                    for (int VAR_14 = 0; VAR_14 < 24; ++VAR_14) {
                        if (VAR_9[VAR_14] != 0) {
                            int VAR_15 = (VAR_14 / 6) * 6;

                            for (int VAR_16 = VAR_15; VAR_16 < VAR_15 + 6; ++VAR_16) {
                                if (VAR_10[VAR_16] != 0) {
                                    FUNC_0(VAR_7, "Bits are not empty. Write operation is forbidden.");
                                    return VAR_5;
                                }
                            }

                            esp_err_t VAR_17 = FUNC_3(&VAR_9[VAR_15], VAR_11, 6);
                            if (VAR_17 != VAR_6) {
                                return VAR_17;
                            }

                            int VAR_18 = (VAR_15 / 6) * 2;
                            for (int VAR_19 = 0; VAR_19 < 2; VAR_19++) {
                                FUNC_1(VAR_8[VAR_12].start + (VAR_18 + VAR_19) * 4, VAR_11[VAR_19]);
                            }
                            VAR_14 = VAR_15 + 5;
                        }
                    }
                } else if (VAR_13 == VAR_4) {
                    uint32_t* VAR_20 = (uint32_t*)VAR_9;
                    for (int VAR_21 = 4; VAR_21 < 8; ++VAR_21) {
                        if (*(VAR_20 + VAR_21) != 0) {
                            return VAR_5;
                        }
                    }
                    for (int VAR_22 = 0; VAR_22 < 4; ++VAR_22) {
                        if (VAR_20[VAR_22] != 0) {
                            FUNC_1(VAR_8[VAR_12].start + VAR_22 * 4, VAR_20[VAR_22]);
                            FUNC_1(VAR_8[VAR_12].start + (VAR_22 + 4) * 4, VAR_20[VAR_22]);
                        }
                    }
                }
            }
        }
    }
    return VAR_6;
}
