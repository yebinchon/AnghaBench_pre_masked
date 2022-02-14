
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_slave_context_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,size_t) ;
 int FUNC_5 (int ,int ,size_t,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int*,int*) ;
 scalar_t__ FUNC_8 (int *,int ,size_t,size_t*,int const) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_8 ;

esp_err_t FUNC_10(esp_slave_context_t *VAR_9)
{
    esp_err_t VAR_10 = FUNC_9(VAR_9, 0);
    if (VAR_10 == VAR_2) {
        return VAR_10;
    }
    FUNC_1(VAR_10);

    uint32_t VAR_11, VAR_12;
    VAR_10 = FUNC_7(VAR_9, &VAR_11, &VAR_12);
    FUNC_1(VAR_10);
    VAR_10 = FUNC_6(VAR_9, VAR_11);
    FUNC_1(VAR_10);
    FUNC_2(VAR_7, "intr: %08X", VAR_11);

    for (int VAR_13 = 0; VAR_13 < 8; VAR_13++) {
        if (VAR_11 & FUNC_0(VAR_13)) {
            FUNC_4(VAR_7, "host int: %d", VAR_13);
        }
    }

    const int VAR_14 = 50;
    if (VAR_11 & VAR_5) {
        FUNC_2(VAR_7, "new packet coming");
        while (1) {
            size_t VAR_15 = VAR_6;
            VAR_10 = FUNC_8(VAR_9, VAR_8, VAR_6, &VAR_15, VAR_14);
            if (VAR_10 == VAR_1) {
                FUNC_3(VAR_7, "interrupt but no data can be read");
                break;
            } else if (VAR_10 != VAR_4 && VAR_10 != VAR_0) {
                FUNC_3(VAR_7, "rx packet error: %08X", VAR_10);
                return VAR_10;
            }

            FUNC_4(VAR_7, "receive data, size: %d", VAR_15);
            FUNC_5(VAR_7, VAR_8, VAR_15, VAR_3);
            if (VAR_10 == VAR_4) {
                break;
            }
        }
    }
    return VAR_4;
}
