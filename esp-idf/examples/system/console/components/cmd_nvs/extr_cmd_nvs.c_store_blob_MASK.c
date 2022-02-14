
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int nvs_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char const*,char*,size_t) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_6(nvs_handle_t VAR_4, const char *VAR_5, const char *VAR_6)
{
    uint8_t VAR_7;
    size_t VAR_8 = FUNC_5(VAR_6);
    size_t VAR_9 = VAR_8 / 2;

    if (VAR_8 % 2) {
        FUNC_0(VAR_3, "Blob data must contain even number of characters");
        return VAR_1;
    }

    char *VAR_10 = (char *)FUNC_2(VAR_9);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    for (int VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_8; VAR_11++) {
        char VAR_13 = VAR_6[VAR_11];
        if (VAR_13 >= '0' && VAR_13 <= '9') {
            VAR_7 = VAR_13 - '0';
        } else if (VAR_13 >= 'A' && VAR_13 <= 'F') {
            VAR_7 = VAR_13 - 'A' + 10;
        } else if (VAR_13 >= 'a' && VAR_13 <= 'f') {
            VAR_7 = VAR_13 - 'a' + 10;
        } else {
            FUNC_0(VAR_3, "Blob data contain invalid character");
            FUNC_1(VAR_10);
            return VAR_1;
        }

        if (VAR_11 & 1) {
            VAR_10[VAR_12++] += VAR_7;
        } else {
            VAR_10[VAR_12] = VAR_7 << 4;
        }
    }

    esp_err_t VAR_14 = FUNC_4(VAR_4, VAR_5, VAR_10, VAR_9);
    FUNC_1(VAR_10);

    if (VAR_14 == VAR_2) {
        VAR_14 = FUNC_3(VAR_4);
    }

    return VAR_14;
}
