
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numOfThreads; int label; TYPE_1__* pThreads; int thread; } ;
struct TYPE_5__ {int threadMutex; int fdReady; int thread; scalar_t__ pHead; int pollFd; } ;
typedef TYPE_1__ HttpThread ;
typedef TYPE_2__ HttpServer ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(HttpServer *VAR_0) {
  int VAR_1;
  HttpThread *VAR_2;

  if (VAR_0 == ((void*)0)) return;

  FUNC_2(VAR_0->thread);
  FUNC_4(VAR_0->thread, ((void*)0));

  for (VAR_1 = 0; VAR_1 < VAR_0->numOfThreads; ++VAR_1) {
    VAR_2 = VAR_0->pThreads + VAR_1;
    FUNC_6(VAR_2->pollFd);

    while (VAR_2->pHead) {
      FUNC_0(VAR_2->pHead);
    }

    FUNC_2(VAR_2->thread);
    FUNC_4(VAR_2->thread, ((void*)0));
    FUNC_3(&(VAR_2->fdReady));
    FUNC_5(&(VAR_2->threadMutex));
  }

  FUNC_7(VAR_0->pThreads);
  FUNC_1("http server:%s is cleaned up", VAR_0->label);
}
