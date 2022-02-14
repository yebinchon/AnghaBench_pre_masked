
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** data; int num_alloc; int c; } ;
typedef int OPENSSL_sk_compfunc ;
typedef TYPE_1__ OPENSSL_STACK ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int) ;

OPENSSL_STACK* FUNC_3(OPENSSL_sk_compfunc VAR_2)
{
    OPENSSL_STACK *VAR_3;
    char **VAR_4;

    VAR_3 = FUNC_2(sizeof(OPENSSL_STACK));
    if (!VAR_3) {
        FUNC_0(VAR_1, "no enough memory > (stack)");
        goto no_mem1;
    }

    VAR_4 = FUNC_2(sizeof(*VAR_4) * VAR_0);
    if (!VAR_4) {
        FUNC_0(VAR_1, "no enough memory > (data)");
        goto no_mem2;
    }

    VAR_3->data = VAR_4;
    VAR_3->num_alloc = VAR_0;
    VAR_3->c = VAR_2;

    return VAR_3;

no_mem2:
    FUNC_1(VAR_3);
no_mem1:
    return ((void*)0);
}
