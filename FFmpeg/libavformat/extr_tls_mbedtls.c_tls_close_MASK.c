
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int entropy_context; int ctr_drbg_context; int ssl_config; int ssl_context; int own_cert; int ca_cert; int priv_key; } ;
typedef TYPE_2__ TLSContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_0)
{
    TLSContext *VAR_1 = VAR_0->priv_data;

    FUNC_3(&VAR_1->ssl_context);
    FUNC_2(&VAR_1->priv_key);
    FUNC_6(&VAR_1->ca_cert);
    FUNC_6(&VAR_1->own_cert);
    FUNC_5(&VAR_1->ssl_context);
    FUNC_4(&VAR_1->ssl_config);
    FUNC_0(&VAR_1->ctr_drbg_context);
    FUNC_1(&VAR_1->entropy_context);

    return 0;
}
