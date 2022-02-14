
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ssl_pm {int entropy; int ctr_drbg; int conf; int fd; int ssl; int cl_fd; } ;
typedef int pers ;
struct TYPE_9__ {scalar_t__ version; struct ssl_pm* ssl_pm; TYPE_2__* ctx; TYPE_3__* method; } ;
struct TYPE_8__ {scalar_t__ endpoint; } ;
struct TYPE_6__ {scalar_t__ alpn_status; int alpn_list; } ;
struct TYPE_7__ {TYPE_1__ ssl_alpn; int read_buffer_len; } ;
typedef TYPE_3__ SSL_METHOD ;
typedef TYPE_4__ SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_17 ;
 int FUNC_3 (int *,int ,int *,unsigned char const*,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_18 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int *) ;
 int FUNC_13 (int *,int,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,int ,int ,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (struct ssl_pm*) ;
 struct ssl_pm* FUNC_20 (int) ;
 int * VAR_21 ;

int FUNC_21(SSL *VAR_22)
{
    struct ssl_pm *VAR_23;
    int VAR_24;

    const unsigned char VAR_25[] = "OpenSSL PM";
    size_t VAR_26 = sizeof(VAR_25);

    int VAR_27;
    int VAR_28;

    const SSL_METHOD *VAR_29 = VAR_22->method;

    VAR_23 = FUNC_20(sizeof(struct ssl_pm));
    if (!VAR_23) {
        FUNC_0(VAR_11, "no enough memory > (ssl_pm)");
        goto no_mem;
    }

    VAR_16 = VAR_22->ctx->read_buffer_len;

    FUNC_7(&VAR_23->fd);
    FUNC_7(&VAR_23->cl_fd);

    FUNC_15(&VAR_23->conf);
    FUNC_2(&VAR_23->ctr_drbg);
    FUNC_6(&VAR_23->entropy);
    FUNC_16(&VAR_23->ssl);

    VAR_24 = FUNC_3(&VAR_23->ctr_drbg, VAR_18, &VAR_23->entropy, VAR_25, VAR_26);
    if (VAR_24) {
        FUNC_0(VAR_11, "mbedtls_ctr_drbg_seed() return -0x%x", -VAR_24);
        goto mbedtls_err1;
    }

    if (VAR_29->endpoint) {
        VAR_27 = VAR_3;
    } else {
        VAR_27 = VAR_2;
    }
    VAR_24 = FUNC_13(&VAR_23->conf, VAR_27, VAR_10, VAR_9);
    if (VAR_24) {
        FUNC_0(VAR_11, "mbedtls_ssl_config_defaults() return -0x%x", -VAR_24);
        goto mbedtls_err2;
    }

    if (VAR_15 != VAR_22->version) {
        if (VAR_13 == VAR_22->version)
            VAR_28 = VAR_8;
        else if (VAR_12 == VAR_22->version)
            VAR_28 = VAR_7;
        else if (VAR_14 == VAR_22->version)
            VAR_28 = VAR_6;
        else
            VAR_28 = VAR_5;

        FUNC_10(&VAR_23->conf, VAR_4, VAR_28);
        FUNC_11(&VAR_23->conf, VAR_4, VAR_28);
    } else {
        FUNC_10(&VAR_23->conf, VAR_4, VAR_8);
        FUNC_11(&VAR_23->conf, VAR_4, VAR_5);
    }

    if (VAR_22->ctx->ssl_alpn.alpn_status == VAR_0) {



        FUNC_0(VAR_11, "CONFIG_MBEDTLS_SSL_ALPN must be enabled to use ALPN", -1);

    }
    FUNC_12(&VAR_23->conf, VAR_17, &VAR_23->ctr_drbg);





    FUNC_9(&VAR_23->conf, ((void*)0), ((void*)0));


    VAR_24 = FUNC_18(&VAR_23->ssl, &VAR_23->conf);
    if (VAR_24) {
        FUNC_0(VAR_11, "mbedtls_ssl_setup() return -0x%x", -VAR_24);
        goto mbedtls_err2;
    }

    FUNC_17(&VAR_23->ssl, &VAR_23->fd, VAR_20, VAR_19, ((void*)0));

    VAR_22->ssl_pm = VAR_23;

    return 0;

mbedtls_err2:
    FUNC_14(&VAR_23->conf);
    FUNC_1(&VAR_23->ctr_drbg);
mbedtls_err1:
    FUNC_5(&VAR_23->entropy);
    FUNC_19(VAR_23);
no_mem:
    return -1;
}
