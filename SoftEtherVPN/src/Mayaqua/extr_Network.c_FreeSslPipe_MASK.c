
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ssl_ctx; int ssl; int RawOut; int RawIn; int SslInOut; } ;
typedef TYPE_1__ SSL_PIPE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(SSL_PIPE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->SslInOut);
 FUNC_1(VAR_0->RawIn);
 FUNC_1(VAR_0->RawOut);

 FUNC_3(VAR_0->ssl);
 FUNC_2(VAR_0->ssl_ctx);

 FUNC_0(VAR_0);
}
