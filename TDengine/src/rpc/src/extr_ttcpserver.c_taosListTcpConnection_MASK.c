
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* ipstr; struct TYPE_6__* next; int port; } ;
struct TYPE_5__ {int numOfThreads; char* label; TYPE_1__* pThreadObj; } ;
struct TYPE_4__ {int threadId; int numOfFds; TYPE_3__* pHead; } ;
typedef TYPE_1__ SThreadObj ;
typedef TYPE_2__ SServerObj ;
typedef TYPE_3__ SFdObj ;


 int FUNC_0 (char*,char*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int,int,int) ;

void FUNC_3(void *VAR_0, char *VAR_1) {
  SServerObj *VAR_2;
  SThreadObj *VAR_3;
  SFdObj * VAR_4;
  int VAR_5, VAR_6, VAR_7;
  char * VAR_8;

  VAR_2 = (SServerObj *)VAR_0;
  VAR_1[0] = 0;
  VAR_8 = VAR_1;
  VAR_7 = 0;

  VAR_3 = VAR_2->pThreadObj;

  for (VAR_5 = 0; VAR_5 < VAR_2->numOfThreads; ++VAR_5) {
    VAR_6 = 0;
    FUNC_0(VAR_8, "TCP:%s Thread:%d number of connections:%d\n", VAR_2->label, VAR_3->threadId,
            VAR_3->numOfFds);
    VAR_8 = VAR_8 + FUNC_1(VAR_8);
    VAR_4 = VAR_3->pHead;
    while (VAR_4) {
      FUNC_0("   ip:%s port:%u\n", VAR_4->ipstr, VAR_4->port);
      VAR_8 = VAR_8 + FUNC_1(VAR_8);
      VAR_6++;
      VAR_7++;
      VAR_4 = VAR_4->next;
    }

    if (VAR_6 != VAR_3->numOfFds)
      FUNC_2("TCP:%s thread:%d BIG error, numOfFds:%d actual numOfFds:%d", VAR_2->label, VAR_3->threadId,
             VAR_3->numOfFds, VAR_6);

    VAR_3++;
  }

  FUNC_0(VAR_8, "TCP:%s total connections:%d\n", VAR_2->label, VAR_7);

  return;
}
