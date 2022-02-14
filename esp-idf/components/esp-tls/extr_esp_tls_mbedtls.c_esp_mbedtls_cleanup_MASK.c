
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssl; int ctr_drbg; int conf; int entropy; int clientkey; int clientcert; int cacert; int serverkey; int servercert; int * cacert_ptr; } ;
typedef TYPE_1__ esp_tls_t ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(esp_tls_t *VAR_1)
{
    if (!VAR_1) {
        return;
    }
    if (VAR_1->cacert_ptr != VAR_0) {
        FUNC_5(VAR_1->cacert_ptr);
    }
    VAR_1->cacert_ptr = ((void*)0);




    FUNC_5(&VAR_1->cacert);
    FUNC_5(&VAR_1->clientcert);
    FUNC_2(&VAR_1->clientkey);
    FUNC_1(&VAR_1->entropy);
    FUNC_3(&VAR_1->conf);
    FUNC_0(&VAR_1->ctr_drbg);
    FUNC_4(&VAR_1->ssl);
}
