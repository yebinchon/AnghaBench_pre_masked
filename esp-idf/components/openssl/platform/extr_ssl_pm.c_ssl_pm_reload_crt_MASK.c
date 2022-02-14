
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct x509_pm {scalar_t__ ex_crt; scalar_t__ x509_crt; } ;
struct ssl_pm {int conf; } ;
struct pkey_pm {scalar_t__ ex_pkey; scalar_t__ pkey; } ;
struct TYPE_11__ {int verify_mode; TYPE_4__* cert; TYPE_1__* client_CA; struct ssl_pm* ssl_pm; } ;
struct TYPE_10__ {TYPE_3__* x509; TYPE_2__* pkey; } ;
struct TYPE_9__ {scalar_t__ x509_pm; } ;
struct TYPE_8__ {scalar_t__ pkey_pm; } ;
struct TYPE_7__ {scalar_t__ x509_pm; } ;
typedef TYPE_5__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_8)
{
    int VAR_9;
    int VAR_10;
    struct ssl_pm *VAR_11 = VAR_8->ssl_pm;
    struct x509_pm *VAR_12 = (struct x509_pm *)VAR_8->client_CA->x509_pm;

    struct pkey_pm *VAR_13 = (struct pkey_pm *)VAR_8->cert->pkey->pkey_pm;
    struct x509_pm *VAR_14 = (struct x509_pm *)VAR_8->cert->x509->x509_pm;

    if (VAR_8->verify_mode & VAR_6)
        VAR_10 = VAR_2;
    else if (VAR_8->verify_mode & VAR_7)
        VAR_10 = VAR_1;
    else if (VAR_8->verify_mode & VAR_5)
        VAR_10 = VAR_3;
    else
        VAR_10 = VAR_0;

    FUNC_1(&VAR_11->conf, VAR_10);

    if (VAR_12->x509_crt) {
        FUNC_2(&VAR_11->conf, VAR_12->x509_crt, ((void*)0));
    } else if (VAR_12->ex_crt) {
        FUNC_2(&VAR_11->conf, VAR_12->ex_crt, ((void*)0));
    }

    if (VAR_14->x509_crt && VAR_13->pkey) {
        VAR_9 = FUNC_3(&VAR_11->conf, VAR_14->x509_crt, VAR_13->pkey);
    } else if (VAR_14->ex_crt && VAR_13->ex_pkey) {
        VAR_9 = FUNC_3(&VAR_11->conf, VAR_14->ex_crt, VAR_13->ex_pkey);
    } else {
        VAR_9 = 0;
    }

    if (VAR_9) {
        FUNC_0(VAR_4, "mbedtls_ssl_conf_own_cert() return -0x%x", -VAR_9);
        VAR_9 = -1;
    }

    return VAR_9;
}
