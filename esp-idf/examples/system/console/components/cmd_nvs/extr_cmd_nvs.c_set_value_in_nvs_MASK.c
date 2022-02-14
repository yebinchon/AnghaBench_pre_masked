
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ nvs_type_t ;
typedef int nvs_handle_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char const*,int ) ;
 scalar_t__ FUNC_6 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,char const*,int ) ;
 scalar_t__ FUNC_8 (int ,char const*,int ) ;
 scalar_t__ FUNC_9 (int ,char const*,char const*) ;
 scalar_t__ FUNC_10 (int ,char const*,int ) ;
 scalar_t__ FUNC_11 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,char const*,int ) ;
 scalar_t__ FUNC_13 (int ,char const*,int ) ;
 scalar_t__ FUNC_14 (int ,char const*,char const*) ;
 scalar_t__ FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (char const*,int *,int ) ;
 int FUNC_17 (char const*,int *,int ) ;
 scalar_t__ FUNC_18 (char const*,int *,int ) ;
 int FUNC_19 (char const*,int *,int ) ;

__attribute__((used)) static esp_err_t FUNC_20(const char *VAR_25, const char *VAR_26, const char *VAR_27)
{
    esp_err_t VAR_28;
    nvs_handle_t VAR_29;
    bool VAR_30 = 0;

    nvs_type_t VAR_31 = FUNC_15(VAR_26);

    if (VAR_31 == VAR_9) {
        FUNC_0(VAR_20, "Type '%s' is undefined", VAR_26);
        return VAR_1;
    }

    VAR_28 = FUNC_4(VAR_23, VAR_8, &VAR_29);
    if (VAR_28 != VAR_3) {
        return VAR_28;
    }

    if (VAR_31 == VAR_14) {
        int32_t VAR_32 = FUNC_16(VAR_27, ((void*)0), 0);
        if (VAR_32 < VAR_7 || VAR_32 > VAR_6 || VAR_24 == VAR_0) {
            VAR_30 = 1;
        } else {
            VAR_28 = FUNC_8(VAR_29, VAR_25, (int8_t)VAR_32);
        }
    } else if (VAR_31 == VAR_19) {
        uint32_t VAR_33 = FUNC_18(VAR_27, ((void*)0), 0);
        if (VAR_33 > VAR_22 || VAR_24 == VAR_0) {
            VAR_30 = 1;
        } else {
            VAR_28 = FUNC_13(VAR_29, VAR_25, (uint8_t)VAR_33);
        }
    } else if (VAR_31 == VAR_11) {
        int32_t VAR_34 = FUNC_16(VAR_27, ((void*)0), 0);
        if (VAR_34 < VAR_5 || VAR_34 > VAR_4 || VAR_24 == VAR_0) {
            VAR_30 = 1;
        } else {
            VAR_28 = FUNC_5(VAR_29, VAR_25, (int16_t)VAR_34);
        }
    } else if (VAR_31 == VAR_16) {
        uint32_t VAR_35 = FUNC_18(VAR_27, ((void*)0), 0);
        if (VAR_35 > VAR_21 || VAR_24 == VAR_0) {
            VAR_30 = 1;
        } else {
            VAR_28 = FUNC_10(VAR_29, VAR_25, (uint16_t)VAR_35);
        }
    } else if (VAR_31 == VAR_12) {
        int32_t VAR_36 = FUNC_16(VAR_27, ((void*)0), 0);
        if (VAR_24 != VAR_0) {
            VAR_28 = FUNC_6(VAR_29, VAR_25, VAR_36);
        }
    } else if (VAR_31 == VAR_17) {
        uint32_t VAR_37 = FUNC_18(VAR_27, ((void*)0), 0);
        if (VAR_24 != VAR_0) {
            VAR_28 = FUNC_11(VAR_29, VAR_25, VAR_37);
        }
    } else if (VAR_31 == VAR_13) {
        int64_t VAR_38 = FUNC_17(VAR_27, ((void*)0), 0);
        if (VAR_24 != VAR_0) {
            VAR_28 = FUNC_7(VAR_29, VAR_25, VAR_38);
        }
    } else if (VAR_31 == VAR_18) {
        uint64_t VAR_39 = FUNC_19(VAR_27, ((void*)0), 0);
        if (VAR_24 != VAR_0) {
            VAR_28 = FUNC_12(VAR_29, VAR_25, VAR_39);
        }
    } else if (VAR_31 == VAR_15) {
        VAR_28 = FUNC_9(VAR_29, VAR_25, VAR_27);
    } else if (VAR_31 == VAR_10) {
        VAR_28 = FUNC_14(VAR_29, VAR_25, VAR_27);
    }

    if (VAR_30 || VAR_24 == VAR_0) {
        FUNC_2(VAR_29);
        return VAR_2;
    }

    if (VAR_28 == VAR_3) {
        VAR_28 = FUNC_3(VAR_29);
        if (VAR_28 == VAR_3) {
            FUNC_1(VAR_20, "Value stored under key '%s'", VAR_25);
        }
    }

    FUNC_2(VAR_29);
    return VAR_28;
}
