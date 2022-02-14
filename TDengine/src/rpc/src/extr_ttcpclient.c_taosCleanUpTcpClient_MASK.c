
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
struct TYPE_4__ {int thread; int pollFd; TYPE_3__* pHead; } ;
typedef TYPE_1__ STcpClient ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(void *VAR_0) {
  STcpClient *VAR_1 = (STcpClient *)VAR_0;
  if (VAR_1 == ((void*)0)) return;

  while (VAR_1->pHead) {
    FUNC_3(VAR_1->pHead);
    VAR_1->pHead = VAR_1->pHead->next;
  }

  FUNC_0(VAR_1->pollFd);

  FUNC_1(VAR_1->thread);
  FUNC_2(VAR_1->thread, ((void*)0));



  FUNC_4(VAR_1);
}
