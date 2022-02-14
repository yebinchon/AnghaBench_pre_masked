
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssl_pm {int ssl; int conf; int entropy; int ctr_drbg; } ;
struct TYPE_3__ {int * ssl_pm; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ssl_pm*) ;

void FUNC_5(SSL *VAR_0)
{
    struct ssl_pm *VAR_1 = (struct ssl_pm *)VAR_0->ssl_pm;

    FUNC_0(&VAR_1->ctr_drbg);
    FUNC_1(&VAR_1->entropy);
    FUNC_2(&VAR_1->conf);
    FUNC_3(&VAR_1->ssl);

    FUNC_4(VAR_1);
    VAR_0->ssl_pm = ((void*)0);
}
