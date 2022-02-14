
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int * client_pubkey; int stb; int rand; int nc_off; int ctx_aes; int * device_pubkey; } ;
typedef TYPE_4__ session_t ;
typedef int esp_err_t ;
typedef int check_buf ;
struct TYPE_14__ {TYPE_3__* sr1; } ;
struct TYPE_13__ {scalar_t__ proto_case; TYPE_1__* sec1; } ;
struct TYPE_10__ {int data; } ;
struct TYPE_11__ {TYPE_2__ device_verify_data; } ;
struct TYPE_9__ {scalar_t__ msg; } ;
typedef TYPE_5__ SessionData ;
typedef TYPE_6__ Sec1Payload ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (int *,int,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;

__attribute__((used)) static esp_err_t FUNC_4(session_t *VAR_7, SessionData *VAR_8)
{
    uint8_t *VAR_9 = VAR_7->client_pubkey;
    uint8_t *VAR_10 = VAR_7->device_pubkey;

    FUNC_1("Device pubkey", VAR_10, VAR_3);
    FUNC_1("Client pubkey", VAR_9, VAR_3);

    if ((VAR_8->proto_case != VAR_5) ||
        (VAR_8->sec1->msg != VAR_4)) {
        FUNC_0(VAR_6, "Invalid response type");
        return VAR_0;
    }

    uint8_t VAR_11[VAR_3];
    Sec1Payload *VAR_12 = (Sec1Payload *) VAR_8->sec1;

    int VAR_13 = FUNC_2(&VAR_7->ctx_aes, VAR_3,
                                    &VAR_7->nc_off, VAR_7->rand, VAR_7->stb,
                                    VAR_12->sr1->device_verify_data.data, VAR_11);
    if (VAR_13 != 0) {
        FUNC_0(VAR_6, "Failed at mbedtls_aes_crypt_ctr with erro code : %d", VAR_13);
        return VAR_1;
    }
    FUNC_1("Dec Device verifier", VAR_11, sizeof(VAR_11));

    if (FUNC_3(VAR_11, VAR_7->client_pubkey, sizeof(VAR_7->client_pubkey)) != 0) {
        FUNC_0(VAR_6, "Key mismatch. Close connection");
        return VAR_1;
    }

    return VAR_2;
}
