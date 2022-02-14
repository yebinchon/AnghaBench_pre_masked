
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* disconnect_lock; void* ssl_lock; int socket; int SendBuf; void* lock; int ref; } ;
typedef TYPE_1__ SOCK ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int) ;
 int VAR_1 ;

SOCK *FUNC_5()
{
 SOCK *VAR_2 = FUNC_4(sizeof(SOCK));

 VAR_2->ref = FUNC_3();
 VAR_2->lock = FUNC_2();
 VAR_2->SendBuf = FUNC_1();
 VAR_2->socket = VAR_0;
 VAR_2->ssl_lock = FUNC_2();
 VAR_2->disconnect_lock = FUNC_2();

 FUNC_0(VAR_1);

 return VAR_2;
}
