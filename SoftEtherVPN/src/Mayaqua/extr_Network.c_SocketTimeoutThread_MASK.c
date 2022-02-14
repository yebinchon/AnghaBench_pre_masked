
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sock; int unblocked; int cancel; } ;
struct TYPE_3__ {int socket; int TimeOut; } ;
typedef int THREAD ;
typedef TYPE_2__ SOCKET_TIMEOUT_PARAM ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(THREAD *VAR_0, void *VAR_1)
{
 SOCKET_TIMEOUT_PARAM *VAR_2;
 VAR_2 = (SOCKET_TIMEOUT_PARAM *)VAR_1;


 FUNC_0(((void*)0), VAR_2->sock->TimeOut, VAR_2->cancel, ((void*)0));


 if(! VAR_2->unblocked)
 {

  FUNC_1(VAR_2->sock->socket);
 }
 else
 {

 }
}
