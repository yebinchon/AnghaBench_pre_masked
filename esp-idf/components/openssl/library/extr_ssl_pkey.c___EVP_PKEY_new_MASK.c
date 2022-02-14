
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int method; } ;
typedef TYPE_1__ EVP_PKEY ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;

EVP_PKEY* FUNC_5(EVP_PKEY *VAR_2)
{
    int VAR_3;
    EVP_PKEY *VAR_4;

    VAR_4 = FUNC_4(sizeof(EVP_PKEY));
    if (!VAR_4) {
        FUNC_2(VAR_0, "no enough memory > (pkey)");
        goto no_mem;
    }

    if (VAR_2) {
        VAR_4->method = VAR_2->method;
    } else {
        VAR_4->method = FUNC_1();
    }

    VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_2);
    if (VAR_3) {
        FUNC_2(VAR_0, "EVP_PKEY_METHOD_CALL(new) return %d", VAR_3);
        goto failed;
    }

    return VAR_4;

failed:
    FUNC_3(VAR_4);
no_mem:
    return ((void*)0);
}
