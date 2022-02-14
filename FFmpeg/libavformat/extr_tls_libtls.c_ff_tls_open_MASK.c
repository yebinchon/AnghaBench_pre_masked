
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tls_config {int dummy; } ;
struct tls {int dummy; } ;
struct TYPE_9__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_10__ {int tcp; int host; int listen; int verify; scalar_t__ key_file; scalar_t__ cert_file; scalar_t__ ca_file; } ;
struct TYPE_11__ {struct tls* ctx; TYPE_2__ tls_shared; } ;
typedef TYPE_2__ TLSShared ;
typedef TYPE_3__ TLSContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,char const*,int **) ;
 int FUNC_4 (struct tls*,struct tls**,int ,int ,int ) ;
 struct tls* FUNC_5 () ;
 int FUNC_6 (struct tls_config*) ;
 int FUNC_7 (struct tls_config*) ;
 int FUNC_8 (struct tls_config*) ;
 int FUNC_9 (struct tls_config*) ;
 int FUNC_10 (struct tls_config*) ;
 struct tls_config* FUNC_11 () ;
 int FUNC_12 (struct tls_config*,scalar_t__) ;
 int FUNC_13 (struct tls_config*,scalar_t__) ;
 int FUNC_14 (struct tls_config*,char*) ;
 int FUNC_15 (struct tls_config*,scalar_t__) ;
 int FUNC_16 (struct tls_config*,int ) ;
 int FUNC_17 (struct tls*,struct tls_config*) ;
 int FUNC_18 (struct tls*,int ,int ,int ,int ) ;
 int FUNC_19 (struct tls*) ;
 int FUNC_20 (struct tls*) ;
 int FUNC_21 () ;
 int VAR_3 ;
 struct tls* FUNC_22 () ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_23(URLContext *VAR_5, const char *VAR_6, int VAR_7, AVDictionary **VAR_8)
{
    TLSContext *VAR_9 = VAR_5->priv_data;
    TLSShared *VAR_10 = &VAR_9->tls_shared;
    struct tls_config *VAR_11 = ((void*)0);
    int VAR_12;

    if (FUNC_21() == -1) {
        VAR_12 = FUNC_0(VAR_1);
        goto fail;
    }

    if ((VAR_12 = FUNC_3(VAR_10, VAR_5, VAR_6, VAR_8)) < 0)
        goto fail;

    VAR_9->ctx = !VAR_10->listen ? FUNC_5() : FUNC_22();
    if (!VAR_9->ctx) {
        VAR_12 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_11 = FUNC_11();
    if (!VAR_9->ctx) {
        VAR_12 = FUNC_0(VAR_1);
        goto fail;
    }
    if (FUNC_16(VAR_11, VAR_2) == -1)
        goto err_config;


    if (FUNC_14(VAR_11, "compat") == -1)
        goto err_config;
    if (VAR_10->ca_file && FUNC_12(VAR_11, VAR_10->ca_file) == -1)
        goto err_config;
    if (VAR_10->cert_file && FUNC_13(VAR_11, VAR_10->cert_file) == -1)
        goto err_config;
    if (VAR_10->key_file && FUNC_15(VAR_11, VAR_10->key_file) == -1)
        goto err_config;
    if (!VAR_10->verify) {
        FUNC_8(VAR_11);
        FUNC_9(VAR_11);
        FUNC_10(VAR_11);
    }
    if (FUNC_17(VAR_9->ctx, VAR_11) == -1)
        goto err_ctx;

    if (!VAR_10->listen) {
        VAR_12 = FUNC_18(VAR_9->ctx, VAR_3, VAR_4,
            VAR_10->tcp, VAR_10->host);
    } else {
        struct tls *VAR_13;
        VAR_12 = FUNC_4(VAR_9->ctx, &VAR_13, VAR_3,
            VAR_4, VAR_10->tcp);
        if (VAR_12 == 0) {

            FUNC_20(VAR_9->ctx);
            VAR_9->ctx = VAR_13;
        }
    }
    if (VAR_12 == -1)
        goto err_ctx;

    FUNC_7(VAR_11);
    return 0;
err_config:
    FUNC_1(VAR_5, VAR_0, "%s\n", FUNC_6(VAR_11));
    VAR_12 = FUNC_0(VAR_1);
    goto fail;
err_ctx:
    FUNC_1(VAR_5, VAR_0, "%s\n", FUNC_19(VAR_9->ctx));
    VAR_12 = FUNC_0(VAR_1);

fail:
    if (VAR_11)
        FUNC_7(VAR_11);
    FUNC_2(VAR_5);
    return VAR_12;
}
