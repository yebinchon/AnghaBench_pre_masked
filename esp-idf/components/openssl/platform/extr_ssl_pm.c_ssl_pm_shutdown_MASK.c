
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct x509_pm {int * ex_crt; } ;
struct ssl_pm {int ssl; } ;
struct TYPE_7__ {TYPE_2__* session; scalar_t__ ssl_pm; } ;
struct TYPE_6__ {TYPE_1__* peer; } ;
struct TYPE_5__ {scalar_t__ x509_pm; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

int FUNC_2(SSL *VAR_1)
{
    int VAR_2;
    struct ssl_pm *VAR_3 = (struct ssl_pm *)VAR_1->ssl_pm;

    VAR_2 = FUNC_1(&VAR_3->ssl);
    if (VAR_2) {
        FUNC_0(VAR_0, "mbedtls_ssl_close_notify() return -0x%x", -VAR_2);
        VAR_2 = -1;
    } else {
        struct x509_pm *VAR_4 = (struct x509_pm *)VAR_1->session->peer->x509_pm;

        VAR_4->ex_crt = ((void*)0);
    }

    return VAR_2;
}
