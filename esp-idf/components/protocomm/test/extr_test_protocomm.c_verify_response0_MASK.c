
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_13__ {int X; int Z; } ;
struct TYPE_16__ {int z; int d; TYPE_12__ Qp; int grp; } ;
struct TYPE_19__ {int * rand; int * sym_key; TYPE_7__* pop; TYPE_3__ ctx_client; int ctr_drbg; int * device_pubkey; int * client_pubkey; } ;
typedef TYPE_6__ session_t ;
struct TYPE_20__ {scalar_t__ len; int * data; } ;
typedef TYPE_7__ protocomm_security_pop_t ;
typedef int esp_err_t ;
struct TYPE_22__ {TYPE_5__* sr0; } ;
struct TYPE_21__ {scalar_t__ proto_case; TYPE_1__* sec1; } ;
struct TYPE_17__ {scalar_t__ len; int data; } ;
struct TYPE_15__ {int len; int data; } ;
struct TYPE_18__ {TYPE_4__ device_random; TYPE_2__ device_pubkey; } ;
struct TYPE_14__ {scalar_t__ msg; } ;
typedef TYPE_8__ SessionData ;
typedef TYPE_9__ Sec1Payload ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int *,int) ;
 int VAR_8 ;
 int FUNC_4 (int *,int *,TYPE_12__*,int *,int ,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (unsigned char const*,scalar_t__,int *,int ) ;
 int FUNC_9 (int *,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_10(session_t *VAR_9, SessionData *VAR_10)
{
    if ((VAR_10->proto_case != VAR_5) ||
        (VAR_10->sec1->msg != VAR_4)) {
        FUNC_1(VAR_7, "Invalid response type");
        return VAR_0;
    }

    int VAR_11;
    Sec1Payload *VAR_12 = (Sec1Payload *) VAR_10->sec1;

    if (VAR_12->sr0->device_pubkey.len != VAR_3) {
        FUNC_1(VAR_7, "Device public key length as not as expected");
        return VAR_1;
    }

    if (VAR_12->sr0->device_random.len != VAR_6) {
        FUNC_1(VAR_7, "Device random data length is not as expected");
        return VAR_1;
    }

    uint8_t *VAR_13 = VAR_9->client_pubkey;
    uint8_t *VAR_14 = VAR_9->device_pubkey;
    FUNC_9(VAR_9->device_pubkey, VAR_12->sr0->device_pubkey.data, VAR_12->sr0->device_pubkey.len);

    FUNC_3("Device pubkey", VAR_14, VAR_3);
    FUNC_3("Client pubkey", VAR_13, VAR_3);

    VAR_11 = FUNC_5(&VAR_9->ctx_client.Qp.Z, 1);
    if (VAR_11 != 0) {
        FUNC_1(VAR_7, "Failed at mbedtls_mpi_lset with error code : %d", VAR_11);
        return VAR_1;
    }

    FUNC_2(VAR_9->device_pubkey, VAR_3);
    VAR_11 = FUNC_6(&VAR_9->ctx_client.Qp.X, VAR_14, VAR_3);
    FUNC_2(VAR_9->device_pubkey, VAR_3);
    if (VAR_11 != 0) {
        FUNC_1(VAR_7, "Failed at mbedtls_mpi_read_binary with error code : %d", VAR_11);
        return VAR_1;
    }

    VAR_11 = FUNC_4(&VAR_9->ctx_client.grp,
                                      &VAR_9->ctx_client.z,
                                      &VAR_9->ctx_client.Qp,
                                      &VAR_9->ctx_client.d,
                                      VAR_8,
                                      &VAR_9->ctr_drbg);
    if (VAR_11 != 0) {
        FUNC_1(VAR_7, "Failed at mbedtls_ecdh_compute_shared with error code : %d", VAR_11);
        return VAR_1;
    }

    VAR_11 = FUNC_7(&VAR_9->ctx_client.z, VAR_9->sym_key, VAR_3);
    if (VAR_11 != 0) {
        FUNC_1(VAR_7, "Failed at mbedtls_mpi_write_binary with error code : %d", VAR_11);
        return VAR_1;
    }
    FUNC_2(VAR_9->sym_key, VAR_3);

    const protocomm_security_pop_t *VAR_15 = VAR_9->pop;
    if (VAR_15 != ((void*)0) && VAR_15->data != ((void*)0) && VAR_15->len != 0) {
        FUNC_0(VAR_7, "Adding proof of possession");
        uint8_t VAR_16[VAR_3];

        VAR_11 = FUNC_8((const unsigned char *) VAR_15->data, VAR_15->len, VAR_16, 0);
        if (VAR_11 != 0) {
            FUNC_1(VAR_7, "Failed at mbedtls_sha256_ret with error code : %d", VAR_11);
            return VAR_1;
        }

        for (int VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
            VAR_9->sym_key[VAR_17] ^= VAR_16[VAR_17];
        }
    }

    FUNC_3("Shared key", VAR_9->sym_key, VAR_3);

    FUNC_9(VAR_9->rand, VAR_12->sr0->device_random.data, VAR_12->sr0->device_random.len);
    FUNC_3("Dev random", VAR_9->rand, sizeof(VAR_9->rand));
    return VAR_2;
}
