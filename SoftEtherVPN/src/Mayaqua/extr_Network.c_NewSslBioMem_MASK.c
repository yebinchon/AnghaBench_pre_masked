
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* SendFifo; void* RecvFifo; int bio; } ;
typedef TYPE_1__ SSL_BIO ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* FUNC_2 () ;
 TYPE_1__* FUNC_3 (int) ;

SSL_BIO *FUNC_4()
{
 SSL_BIO *VAR_0 = FUNC_3(sizeof(SSL_BIO));

 VAR_0->bio = FUNC_0(FUNC_1());

 VAR_0->RecvFifo = FUNC_2();
 VAR_0->SendFifo = FUNC_2();

 return VAR_0;
}
