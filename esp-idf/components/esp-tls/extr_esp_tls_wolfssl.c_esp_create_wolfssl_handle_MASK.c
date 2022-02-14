
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sockfd; void* priv_ssl; int error_handle; void* priv_ctx; } ;
typedef TYPE_1__ esp_tls_t ;
struct TYPE_6__ {int use_global_ca_store; int * clientkey_pem_buf; int * clientcert_pem_buf; int clientkey_pem_bytes; int clientcert_pem_bytes; scalar_t__ psk_hint_key; int cacert_pem_bytes; int * cacert_pem_buf; scalar_t__ alpn_protos; } ;
typedef TYPE_2__ esp_tls_cfg_t ;
typedef int WOLFSSL_CTX ;
typedef int WOLFSSL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,size_t) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int *,int ,int ) ;
 int FUNC_11 (int *,int *,int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 () ;

int FUNC_19(const char *VAR_9, size_t VAR_10, const void *VAR_11, esp_tls_t *VAR_12)
{



    const esp_tls_cfg_t *VAR_13 = VAR_11;
    FUNC_2(VAR_13 != ((void*)0));
    FUNC_2(VAR_12 != ((void*)0));

    int VAR_14;
    VAR_14 = FUNC_13();
    if (VAR_14 != VAR_6) {
        FUNC_1(VAR_3, "Init wolfSSL failed: %d", VAR_14);
        FUNC_0(VAR_12->error_handle, VAR_0, -VAR_14);
        goto exit;
    }

    VAR_12->priv_ctx = (void *)FUNC_8(FUNC_18());
    if (!VAR_12->priv_ctx) {
        FUNC_1(VAR_3, "Set wolfSSL ctx failed");
        FUNC_0(VAR_12->error_handle, VAR_0, -VAR_14);
        goto exit;
    }
    if ( VAR_13->use_global_ca_store == 1) {
        FUNC_7( (WOLFSSL_CTX *)VAR_12->priv_ctx, VAR_7, VAR_8, VAR_5);
        FUNC_9( (WOLFSSL_CTX *)VAR_12->priv_ctx, VAR_2, ((void*)0));
    } else if (VAR_13->cacert_pem_buf != ((void*)0)) {
        FUNC_7( (WOLFSSL_CTX *)VAR_12->priv_ctx, VAR_13->cacert_pem_buf, VAR_13->cacert_pem_bytes, VAR_5);
        FUNC_9( (WOLFSSL_CTX *)VAR_12->priv_ctx, VAR_2, ((void*)0));
    } else if (VAR_13->psk_hint_key) {
        FUNC_1(VAR_3,"psk_hint_key not supported in wolfssl");
        goto exit;
    } else {
        FUNC_9( (WOLFSSL_CTX *)VAR_12->priv_ctx, VAR_1, ((void*)0));
    }

    if (VAR_13->clientcert_pem_buf != ((void*)0) && VAR_13->clientkey_pem_buf != ((void*)0)) {
        FUNC_11( (WOLFSSL_CTX *)VAR_12->priv_ctx, VAR_13->clientcert_pem_buf, VAR_13->clientcert_pem_bytes, VAR_5);
        FUNC_10( (WOLFSSL_CTX *)VAR_12->priv_ctx, VAR_13->clientkey_pem_buf, VAR_13->clientkey_pem_bytes, VAR_5);
    } else if (VAR_13->clientcert_pem_buf != ((void*)0) || VAR_13->clientkey_pem_buf != ((void*)0)) {
        FUNC_1(VAR_3, "You have to provide both clientcert_pem_buf and clientkey_pem_buf for mutual authentication\n\n");
        goto exit;
    }

    VAR_12->priv_ssl =(void *)FUNC_15( (WOLFSSL_CTX *)VAR_12->priv_ctx);
    if (!VAR_12->priv_ssl) {
        FUNC_1(VAR_3, "Create wolfSSL failed");
        FUNC_0(VAR_12->error_handle, VAR_0, -VAR_14);
        goto exit;
    }
    FUNC_16((WOLFSSL *)VAR_12->priv_ssl, VAR_12->sockfd);
    return 0;
exit:
    FUNC_3(VAR_12);
    return VAR_14;
}
