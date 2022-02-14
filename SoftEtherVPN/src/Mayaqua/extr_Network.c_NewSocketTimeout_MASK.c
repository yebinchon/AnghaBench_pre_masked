
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ TimeOut; int AsyncMode; } ;
struct TYPE_6__ {int unblocked; int thread; TYPE_2__* sock; int cancel; } ;
typedef TYPE_1__ SOCKET_TIMEOUT_PARAM ;
typedef TYPE_2__ SOCK ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

SOCKET_TIMEOUT_PARAM *FUNC_3(SOCK *VAR_2)
{
 SOCKET_TIMEOUT_PARAM *VAR_3;
 if(! VAR_2->AsyncMode && VAR_2->TimeOut != VAR_1)
 {


  VAR_3 = (SOCKET_TIMEOUT_PARAM*)FUNC_0(sizeof(SOCKET_TIMEOUT_PARAM));


  VAR_3->cancel = FUNC_1();
  VAR_3->sock = VAR_2;
  VAR_3->unblocked = 0;
  VAR_3->thread = FUNC_2(VAR_0, VAR_3);
  return VAR_3;
 }
 return ((void*)0);
}
