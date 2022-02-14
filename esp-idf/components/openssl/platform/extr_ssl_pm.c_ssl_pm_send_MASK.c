
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssl_pm {int ssl; } ;
struct TYPE_3__ {scalar_t__ ssl_pm; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,void const*,int) ;

int FUNC_2(SSL *VAR_1, const void *VAR_2, int VAR_3)
{
    int VAR_4;
    struct ssl_pm *VAR_5 = (struct ssl_pm *)VAR_1->ssl_pm;

    VAR_4 = FUNC_1(&VAR_5->ssl, VAR_2, VAR_3);
    if (VAR_4 < 0) {
        FUNC_0(VAR_0, "mbedtls_ssl_write() return -0x%x", -VAR_4);
        VAR_4 = -1;
    }

    return VAR_4;
}
