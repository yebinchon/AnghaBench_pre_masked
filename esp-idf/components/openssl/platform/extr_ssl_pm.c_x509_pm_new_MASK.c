
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct x509_pm {int x509_crt; int ex_crt; } ;
struct TYPE_4__ {struct x509_pm* x509_pm; } ;
typedef TYPE_1__ X509 ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct x509_pm* FUNC_1 (int) ;

int FUNC_2(X509 *VAR_1, X509 *VAR_2)
{
    struct x509_pm *VAR_3;

    VAR_3 = FUNC_1(sizeof(struct x509_pm));
    if (!VAR_3) {
        FUNC_0(VAR_0, "no enough memory > (x509_pm)");
        goto failed1;
    }

    VAR_1->x509_pm = VAR_3;

    if (VAR_2) {
        struct x509_pm *VAR_4 = (struct x509_pm *)VAR_2->x509_pm;

        VAR_3->ex_crt = VAR_4->x509_crt;
    }

    return 0;

failed1:
    return -1;
}
