
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct x509_pm {int * ex_crt; } ;
struct ssl_pm {int ssl; } ;
typedef int mbedtls_x509_crt ;
struct TYPE_8__ {TYPE_2__* session; scalar_t__ ssl_pm; } ;
struct TYPE_7__ {TYPE_1__* peer; } ;
struct TYPE_6__ {scalar_t__ x509_pm; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(SSL *VAR_3)
{
    int VAR_4;
    struct ssl_pm *VAR_5 = (struct ssl_pm *)VAR_3->ssl_pm;

    VAR_4 = FUNC_3(VAR_3);
    if (VAR_4)
        return 0;

    FUNC_4();

    while((VAR_4 = FUNC_1(&VAR_5->ssl)) != 0) {
        if (VAR_4 != VAR_0 && VAR_4 != VAR_1) {
           break;
        }
    }

    FUNC_5();

    if (VAR_4) {
        FUNC_0(VAR_2, "mbedtls_ssl_handshake() return -0x%x", -VAR_4);
        VAR_4 = 0;
    } else {
        struct x509_pm *VAR_6 = (struct x509_pm *)VAR_3->session->peer->x509_pm;

        VAR_6->ex_crt = (mbedtls_x509_crt *)FUNC_2(&VAR_5->ssl);
        VAR_4 = 1;
    }

    return VAR_4;
}
