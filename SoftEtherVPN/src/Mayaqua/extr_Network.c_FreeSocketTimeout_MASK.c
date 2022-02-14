
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unblocked; int thread; int cancel; } ;
typedef TYPE_1__ SOCKET_TIMEOUT_PARAM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(SOCKET_TIMEOUT_PARAM *VAR_1)
{
 if(VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->unblocked = 1;
 FUNC_0(VAR_1->cancel);
 FUNC_4(VAR_1->thread, VAR_0);
 FUNC_2(VAR_1->cancel);
 FUNC_3(VAR_1->thread);
 FUNC_1(VAR_1);

 return;
}
