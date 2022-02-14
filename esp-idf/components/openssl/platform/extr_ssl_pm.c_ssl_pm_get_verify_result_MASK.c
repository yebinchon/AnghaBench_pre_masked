
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ssl_pm {int ssl; } ;
struct TYPE_3__ {scalar_t__ ssl_pm; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;

long FUNC_2(const SSL *VAR_3)
{
    uint32_t VAR_4;
    long VAR_5;
    struct ssl_pm *VAR_6 = (struct ssl_pm *)VAR_3->ssl_pm;

    VAR_4 = FUNC_1(&VAR_6->ssl);
    if (VAR_4) {
        FUNC_0(VAR_0, "mbedtls_ssl_get_verify_result() return 0x%x", VAR_4);
        VAR_5 = VAR_1;
    } else
        VAR_5 = VAR_2;

    return VAR_5;
}
