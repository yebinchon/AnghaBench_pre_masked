
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct x509_pm {int * x509_crt; } ;
struct TYPE_3__ {int * x509_pm; } ;
typedef TYPE_1__ X509 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(X509 *VAR_0)
{
    struct x509_pm *VAR_1 = (struct x509_pm *)VAR_0->x509_pm;

    if (VAR_1->x509_crt) {
        FUNC_0(VAR_1->x509_crt);

        FUNC_1(VAR_1->x509_crt);
        VAR_1->x509_crt = ((void*)0);
    }

    FUNC_1(VAR_0->x509_pm);
    VAR_0->x509_pm = ((void*)0);
}
