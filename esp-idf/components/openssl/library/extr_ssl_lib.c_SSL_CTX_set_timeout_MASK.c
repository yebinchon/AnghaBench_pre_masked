
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long session_timeout; } ;
typedef TYPE_1__ SSL_CTX ;


 int FUNC_0 (TYPE_1__*) ;

long FUNC_1(SSL_CTX *VAR_0, long VAR_1)
{
    long VAR_2;

    FUNC_0(VAR_0);

    VAR_2 = VAR_0->session_timeout;
    VAR_0->session_timeout = VAR_1;

    return VAR_2;
}
