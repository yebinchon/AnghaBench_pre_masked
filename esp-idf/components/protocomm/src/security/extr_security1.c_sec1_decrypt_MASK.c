
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ id; scalar_t__ state; int stb; int rand; int nc_off; int ctx_aes; } ;
typedef TYPE_1__ session_t ;
typedef scalar_t__ protocomm_security_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int *,int ,int ,int const*,int *) ;

__attribute__((used)) static esp_err_t FUNC_2(protocomm_security_handle_t VAR_6,
                              uint32_t VAR_7,
                              const uint8_t *VAR_8, ssize_t VAR_9,
                              uint8_t *VAR_10, ssize_t *VAR_11)
{
    session_t *VAR_12 = (session_t *) VAR_6;
    if (!VAR_12) {
        return VAR_0;
    }

    if (*VAR_11 < VAR_9) {
        return VAR_0;
    }

    if (!VAR_12 || VAR_12->id != VAR_7) {
        FUNC_0(VAR_5, "Session with ID %d not found", VAR_7);
        return VAR_1;
    }

    if (VAR_12->state != VAR_4) {
        FUNC_0(VAR_5, "Secure session not established");
        return VAR_1;
    }

    *VAR_11 = VAR_9;
    int VAR_13 = FUNC_1(&VAR_12->ctx_aes, VAR_9, &VAR_12->nc_off,
                                    VAR_12->rand, VAR_12->stb, VAR_8, VAR_10);
    if (VAR_13 != 0) {
        FUNC_0(VAR_5, "Failed at mbedtls_aes_crypt_ctr with error code : %d", VAR_13);
        return VAR_2;
    }
    return VAR_3;
}
