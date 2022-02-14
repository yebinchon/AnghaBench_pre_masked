
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct x509_pm {int * ex_crt; int * x509_crt; } ;
typedef int mbedtls_x509_crt ;
struct TYPE_3__ {struct x509_pm* x509_pm; } ;
typedef TYPE_1__ X509 ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,scalar_t__,char*,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;

int FUNC_4(X509 *VAR_3)
{
    int VAR_4;
    char *VAR_5;
    mbedtls_x509_crt *VAR_6;
    struct x509_pm *VAR_7 = VAR_3->x509_pm;

    if (VAR_7->x509_crt)
        VAR_6 = VAR_7->x509_crt;
    else if (VAR_7->ex_crt)
        VAR_6 = VAR_7->ex_crt;
    else
        VAR_6 = ((void*)0);

    if (!VAR_6)
        return -1;

    VAR_5 = FUNC_3(VAR_2);
    if (!VAR_5) {
        FUNC_0(VAR_1, "no enough memory > (buf)");
        goto no_mem;
    }

    VAR_4 = FUNC_1(VAR_5, VAR_2 - 1, "", VAR_6);
    if (VAR_4 <= 0) {
        FUNC_0(VAR_1, "mbedtls_x509_crt_info() return -0x%x", -VAR_4);
        goto mbedtls_err1;
    }

    VAR_5[VAR_4] = 0;

    FUNC_2(VAR_5);

    FUNC_0(VAR_0, "%s", VAR_5);

    return 0;

mbedtls_err1:
    FUNC_2(VAR_5);
no_mem:
    return -1;
}
