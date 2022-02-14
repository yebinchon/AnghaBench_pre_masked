
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ssize_t ;
struct TYPE_3__ {int sec_ver; int stb; int rand; int nc_off; int ctx_aes; int id; } ;
typedef TYPE_1__ session_t ;
typedef int rand_test_data ;
typedef scalar_t__ esp_err_t ;
typedef int enc_test_data ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (char*,int *,int) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int,int *,int ,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 scalar_t__ FUNC_9 (int ,char*,int ,int *,int,int **,int*) ;
 int VAR_3 ;

__attribute__((used)) static esp_err_t FUNC_10(session_t *VAR_4)
{
    uint32_t VAR_5 = VAR_4->id;

    uint8_t VAR_6[512], VAR_7[512];
    FUNC_3(VAR_6, sizeof(VAR_6), 0);

    if (VAR_4->sec_ver == 0) {
        FUNC_8(VAR_7, VAR_6, sizeof(VAR_6));
    }
    else if (VAR_4->sec_ver == 1) {
        FUNC_6(&VAR_4->ctx_aes, sizeof(VAR_6), &VAR_4->nc_off,
                              VAR_4->rand, VAR_4->stb, VAR_6, VAR_7);
    }

    ssize_t VAR_8 = 0;
    uint8_t *VAR_9 = ((void*)0);

    esp_err_t VAR_10 = FUNC_9(VAR_3, "test-ep", VAR_5,
                                         VAR_7, sizeof(VAR_7),
                                         &VAR_9, &VAR_8);

    if (VAR_10 != VAR_1 || !VAR_8) {
        FUNC_0(VAR_2, "test-ep handler failed");
        return VAR_0;
    }

    uint8_t *VAR_11 = FUNC_5(VAR_8);
    if (!VAR_11) {
        FUNC_0(VAR_2, "error allocating memory for decrypted data");
        FUNC_2(VAR_9);
        return VAR_0;
    }

    if (VAR_4->sec_ver == 0) {
        FUNC_8(VAR_11, VAR_9, VAR_8);
    }
    else if (VAR_4->sec_ver == 1) {
        FUNC_6(&VAR_4->ctx_aes, VAR_8, &VAR_4->nc_off,
                              VAR_4->rand, VAR_4->stb, VAR_9, VAR_11);
    }
    FUNC_2(VAR_9);

    FUNC_4("Sent data", VAR_6, sizeof(VAR_6));
    FUNC_4("Recv data", VAR_11, VAR_8);

    FUNC_1(VAR_2, "verify data len   : %d", VAR_8);
    FUNC_1(VAR_2, "expected data len : %d", sizeof(VAR_6));

    if (VAR_8 != sizeof(VAR_6)) {
        FUNC_0(VAR_2, "incorrect response length from test-ep");
        FUNC_2(VAR_11);
        return VAR_0;
    }
    if (FUNC_7(VAR_6, VAR_11, VAR_8)) {
        FUNC_0(VAR_2, "incorrect response data from test-ep");
        FUNC_2(VAR_11);
        return VAR_0;
    }
    FUNC_2(VAR_11);
    return VAR_1;
}
