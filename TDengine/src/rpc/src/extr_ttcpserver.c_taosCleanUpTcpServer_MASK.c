
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numOfThreads; int label; struct TYPE_4__* pThreadObj; int threadMutex; int fdReady; int thread; int pollFd; scalar_t__ pHead; } ;
typedef TYPE_1__ SThreadObj ;
typedef TYPE_1__ SServerObj ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(void *VAR_0) {
  int VAR_1;
  SThreadObj *VAR_2;
  SServerObj *VAR_3 = (SServerObj *)VAR_0;

  if (VAR_3 == ((void*)0)) return;

  FUNC_1(VAR_3->thread);
  FUNC_3(VAR_3->thread, ((void*)0));

  for (VAR_1 = 0; VAR_1 < VAR_3->numOfThreads; ++VAR_1) {
    VAR_2 = VAR_3->pThreadObj + VAR_1;

    while (VAR_2->pHead) {
      FUNC_6(VAR_2->pHead);
      VAR_2->pHead = VAR_2->pHead;
    }

    FUNC_0(VAR_2->pollFd);
    FUNC_1(VAR_2->thread);
    FUNC_3(VAR_2->thread, ((void*)0));
    FUNC_2(&(VAR_2->fdReady));
    FUNC_4(&(VAR_2->threadMutex));
  }

  FUNC_7(VAR_3->pThreadObj);
  FUNC_5("TCP:%s, TCP server is cleaned up", VAR_3->label);

  FUNC_7(VAR_3);
}
