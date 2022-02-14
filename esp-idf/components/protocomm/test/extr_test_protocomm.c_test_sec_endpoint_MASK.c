
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_12__ {int X; } ;
struct TYPE_11__ {TYPE_8__ Q; int d; int grp; } ;
struct TYPE_10__ {scalar_t__ sec_ver; int entropy; int ctr_drbg; TYPE_7__ ctx_client; int client_pubkey; scalar_t__ weak; int id; } ;
typedef TYPE_1__ session_t ;
typedef int esp_err_t ;
typedef int SessionData ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int *,int ,int *,int *,int ) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (int *,int *,TYPE_8__*,int ,int *) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int VAR_6 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (TYPE_1__*,int *) ;
 int FUNC_18 (TYPE_1__*,int *) ;
 int FUNC_19 (int ,char*,int ,int *,scalar_t__,int **,scalar_t__*) ;
 int FUNC_20 (int *,int *) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int *) ;
 int * FUNC_24 (int *,scalar_t__,int *) ;
 int VAR_7 ;
 int FUNC_25 (TYPE_1__*,int *) ;
 int FUNC_26 (TYPE_1__*,int *) ;

__attribute__((used)) static esp_err_t FUNC_27(session_t *VAR_8)
{
    if (VAR_8->sec_ver == 0) {
        return VAR_1;
    }

    uint32_t VAR_9 = VAR_8->id;

    int VAR_10 = VAR_0;
    SessionData VAR_11;
    SessionData *VAR_12;
    ssize_t VAR_13 = 0;
    uint8_t *VAR_14 = ((void*)0);
    ssize_t VAR_15 = 0;
    uint8_t *VAR_16 = ((void*)0);

    FUNC_11(&VAR_8->ctx_client);
    FUNC_7(&VAR_8->ctr_drbg);

    FUNC_14(&VAR_8->entropy);
    VAR_10 = FUNC_8(&VAR_8->ctr_drbg, VAR_6,
                                &VAR_8->entropy, ((void*)0), 0);
    if (VAR_10 != 0) {
        FUNC_0(VAR_4, "Failed at mbedtls_ctr_drbg_seed with error code : %d", VAR_10);
        goto abort_test_sec_endpoint;
    }

    VAR_10 = FUNC_12(&VAR_8->ctx_client.grp, VAR_2);
    if (VAR_10 != 0) {
        FUNC_0(VAR_4, "Failed at mbedtls_ecp_group_load with error code : %d", VAR_10);
        goto abort_test_sec_endpoint;
    }

    VAR_10 = FUNC_10(&VAR_8->ctx_client.grp,
                                  &VAR_8->ctx_client.d,
                                  &VAR_8->ctx_client.Q,
                                  VAR_5,
                                  &VAR_8->ctr_drbg);
    if (VAR_10 != 0) {
        FUNC_0(VAR_4, "Failed at mbedtls_ecdh_gen_public with error code : %d", VAR_10);
        goto abort_test_sec_endpoint;
    }

    if (VAR_8->weak) {

        VAR_10 = FUNC_15(&VAR_8->ctx_client.Q.X,
                                      VAR_8->client_pubkey,
                                      VAR_3);
        if (VAR_10 != 0) {
            FUNC_0(VAR_4, "Failed at mbedtls_mpi_read_binary with error code : %d", VAR_10);
            goto abort_test_sec_endpoint;
        }
    }
    VAR_10 = FUNC_16(&VAR_8->ctx_client.Q.X,
                                   VAR_8->client_pubkey,
                                   VAR_3);
    if (VAR_10 != 0) {
        FUNC_0(VAR_4, "Failed at mbedtls_mpi_write_binary with error code : %d", VAR_10);
        goto abort_test_sec_endpoint;
    }
    FUNC_3(VAR_8->client_pubkey, VAR_3);


    FUNC_22(&VAR_11);
    if (FUNC_17(VAR_8, &VAR_11) != VAR_1) {
        FUNC_0(VAR_4, "Failed in prepare_command0");
        goto abort_test_sec_endpoint;
    }

    VAR_13 = FUNC_21(&VAR_11);
    VAR_14 = (uint8_t *) FUNC_5(VAR_13);
    if (!VAR_14) {
        FUNC_0(VAR_4, "Failed to allocate inbuf");
        goto abort_test_sec_endpoint;
    }

    FUNC_23(&VAR_11, VAR_14);
    FUNC_1(&VAR_11);

    VAR_15 = 0;
    VAR_16 = ((void*)0);
    VAR_10 = FUNC_19(VAR_7, "test-sec", VAR_9,
                               VAR_14, VAR_13, &VAR_16, &VAR_15);

    FUNC_4(VAR_14);
    if (VAR_10 != VAR_1) {
        FUNC_0(VAR_4, "test-sec handler failed");
        FUNC_4(VAR_16);
        goto abort_test_sec_endpoint;
    }

    VAR_12 = FUNC_24(((void*)0), VAR_15, VAR_16);
    FUNC_4(VAR_16);
    if (!VAR_12) {
        FUNC_0(VAR_4, "Unable to unpack SessionResp0");
        goto abort_test_sec_endpoint;
    }

    if (FUNC_25(VAR_8, VAR_12) != VAR_1) {
        FUNC_0(VAR_4, "Invalid response 0");
        FUNC_20(VAR_12, ((void*)0));
        goto abort_test_sec_endpoint;
    }

    FUNC_20(VAR_12, ((void*)0));


    FUNC_22(&VAR_11);
    if (FUNC_18(VAR_8, &VAR_11) != VAR_1) {
        FUNC_0(VAR_4, "Failed in prepare_command1");
        goto abort_test_sec_endpoint;
    }

    VAR_13 = FUNC_21(&VAR_11);
    VAR_14 = (uint8_t *) FUNC_5(VAR_13);
    if (!VAR_14) {
        FUNC_0(VAR_4, "Failed to allocate inbuf");
        goto abort_test_sec_endpoint;
    }

    FUNC_23(&VAR_11, VAR_14);
    FUNC_2(&VAR_11);

    VAR_15 = 0;
    VAR_16 = ((void*)0);
    VAR_10 = FUNC_19(VAR_7, "test-sec", VAR_9,
                               VAR_14, VAR_13, &VAR_16, &VAR_15);

    FUNC_4(VAR_14);
    if (VAR_10 != VAR_1) {
        FUNC_0(VAR_4, "test-sec handler failed");
        FUNC_4(VAR_16);
        goto abort_test_sec_endpoint;
    }

    VAR_12 = FUNC_24(((void*)0), VAR_15, VAR_16);
    FUNC_4(VAR_16);
    if (!VAR_12) {
        FUNC_0(VAR_4, "Unable to unpack SessionResp0");
        goto abort_test_sec_endpoint;
    }

    if (FUNC_26(VAR_8, VAR_12) != VAR_1) {
        FUNC_0(VAR_4, "Invalid response 1");
        FUNC_20(VAR_12, ((void*)0));
        goto abort_test_sec_endpoint;
    }

    FUNC_20(VAR_12, ((void*)0));
    FUNC_9(&VAR_8->ctx_client);
    FUNC_6(&VAR_8->ctr_drbg);
    FUNC_13(&VAR_8->entropy);

    return VAR_1;

abort_test_sec_endpoint:

    FUNC_9(&VAR_8->ctx_client);
    FUNC_6(&VAR_8->ctr_drbg);
    FUNC_13(&VAR_8->entropy);
    return VAR_0;
}
