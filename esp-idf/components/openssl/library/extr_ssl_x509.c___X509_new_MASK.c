
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ref_counter; int method; } ;
typedef TYPE_1__ X509 ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;

X509* FUNC_5(X509 *VAR_3)
{
    int VAR_4;
    X509 *VAR_5;

    VAR_5 = FUNC_4(sizeof(X509));
    if (!VAR_5) {
        FUNC_0(VAR_1, "no enough memory > (x)");
        goto no_mem;
    }

    VAR_5->ref_counter = 1;

    if (VAR_3)
        VAR_5->method = VAR_3->method;
    else
        VAR_5->method = FUNC_2();

    VAR_4 = FUNC_1(VAR_2, VAR_5, VAR_3);
    if (VAR_4) {
        FUNC_0(VAR_0, "X509_METHOD_CALL(new) return %d", VAR_4);
        goto failed;
    }

    return VAR_5;

failed:
    FUNC_3(VAR_5);
no_mem:
    return ((void*)0);
}
