
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int peer; } ;
typedef TYPE_1__ SSL_SESSION ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static SSL_SESSION* FUNC_4(void)
{
    SSL_SESSION *VAR_1;

    VAR_1 = FUNC_3(sizeof(SSL_SESSION));
    if (!VAR_1) {
        FUNC_0(VAR_0, "no enough memory > (session)");
        goto failed1;
    }

    VAR_1->peer = FUNC_1();
    if (!VAR_1->peer) {
       FUNC_0(VAR_0, "X509_new() return NULL");
       goto failed2;
    }

    return VAR_1;

failed2:
    FUNC_2(VAR_1);
failed1:
    return ((void*)0);
}
