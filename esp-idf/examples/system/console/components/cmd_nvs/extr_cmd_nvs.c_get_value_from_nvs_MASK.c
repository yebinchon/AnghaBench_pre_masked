
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef char* uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ nvs_type_t ;
typedef int nvs_handle_t ;
typedef int int8_t ;
typedef char* int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char const*,char*,size_t*) ;
 scalar_t__ FUNC_5 (int ,char const*,int*) ;
 scalar_t__ FUNC_6 (int ,char const*,int*) ;
 scalar_t__ FUNC_7 (int ,char const*,char**) ;
 scalar_t__ FUNC_8 (int ,char const*,int*) ;
 scalar_t__ FUNC_9 (int ,char const*,char*,size_t*) ;
 scalar_t__ FUNC_10 (int ,char const*,int*) ;
 scalar_t__ FUNC_11 (int ,char const*,int*) ;
 scalar_t__ FUNC_12 (int ,char const*,char**) ;
 scalar_t__ FUNC_13 (int ,char const*,int*) ;
 scalar_t__ FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (char*,size_t) ;
 int FUNC_16 (char*,...) ;
 scalar_t__ FUNC_17 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_18(const char *VAR_16, const char *VAR_17)
{
    nvs_handle_t VAR_18;
    esp_err_t VAR_19;

    nvs_type_t VAR_20 = FUNC_17(VAR_17);

    if (VAR_20 == VAR_3) {
        FUNC_0(VAR_14, "Type '%s' is undefined", VAR_17);
        return VAR_0;
    }

    VAR_19 = FUNC_14(VAR_15, VAR_2, &VAR_18);
    if (VAR_19 != VAR_1) {
        return VAR_19;
    }

    if (VAR_20 == VAR_8) {
        int8_t VAR_21;
        VAR_19 = FUNC_8(VAR_18, VAR_16, &VAR_21);
        if (VAR_19 == VAR_1) {
            FUNC_16("%d\n", VAR_21);
        }
    } else if (VAR_20 == VAR_13) {
        uint8_t VAR_22;
        VAR_19 = FUNC_13(VAR_18, VAR_16, &VAR_22);
        if (VAR_19 == VAR_1) {
            FUNC_16("%u\n", VAR_22);
        }
    } else if (VAR_20 == VAR_5) {
        int16_t VAR_23;
        VAR_19 = FUNC_5(VAR_18, VAR_16, &VAR_23);
        if (VAR_19 == VAR_1) {
            FUNC_16("%u\n", VAR_23);
        }
    } else if (VAR_20 == VAR_10) {
        uint16_t VAR_24;
        if ((VAR_19 = FUNC_10(VAR_18, VAR_16, &VAR_24)) == VAR_1) {
            FUNC_16("%u\n", VAR_24);
        }
    } else if (VAR_20 == VAR_6) {
        int32_t VAR_25;
        if ((VAR_19 = FUNC_6(VAR_18, VAR_16, &VAR_25)) == VAR_1) {
            FUNC_16("%d\n", VAR_25);
        }
    } else if (VAR_20 == VAR_11) {
        uint32_t VAR_26;
        if ((VAR_19 = FUNC_11(VAR_18, VAR_16, &VAR_26)) == VAR_1) {
            FUNC_16("%u\n", VAR_26);
        }
    } else if (VAR_20 == VAR_7) {
        int64_t VAR_27;
        if ((VAR_19 = FUNC_7(VAR_18, VAR_16, &VAR_27)) == VAR_1) {
            FUNC_16("%lld\n", VAR_27);
        }
    } else if (VAR_20 == VAR_12) {
        uint64_t VAR_28;
        if ( (VAR_19 = FUNC_12(VAR_18, VAR_16, &VAR_28)) == VAR_1) {
            FUNC_16("%llu\n", VAR_28);
        }
    } else if (VAR_20 == VAR_9) {
        size_t VAR_29;
        if ( (VAR_19 = FUNC_9(VAR_18, VAR_16, ((void*)0), &VAR_29)) == VAR_1) {
            char *VAR_30 = (char *)FUNC_2(VAR_29);
            if ( (VAR_19 = FUNC_9(VAR_18, VAR_16, VAR_30, &VAR_29)) == VAR_1) {
                FUNC_16("%s\n", VAR_30);
            }
            FUNC_1(VAR_30);
        }
    } else if (VAR_20 == VAR_4) {
        size_t VAR_31;
        if ( (VAR_19 = FUNC_4(VAR_18, VAR_16, ((void*)0), &VAR_31)) == VAR_1) {
            char *VAR_32 = (char *)FUNC_2(VAR_31);
            if ( (VAR_19 = FUNC_4(VAR_18, VAR_16, VAR_32, &VAR_31)) == VAR_1) {
                FUNC_15(VAR_32, VAR_31);
            }
            FUNC_1(VAR_32);
        }
    }

    FUNC_3(VAR_18);
    return VAR_19;
}
