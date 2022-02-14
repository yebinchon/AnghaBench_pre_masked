
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* data; struct TYPE_4__* next; } ;
struct TYPE_3__ {scalar_t__ maxSessions; int mutex; TYPE_2__** hashList; } ;
typedef TYPE_1__ SHashObj ;
typedef TYPE_2__ SHashNode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

char *FUNC_2(void *VAR_0, int (*VAR_1)(char *)) {
  SHashObj * VAR_2;
  SHashNode *VAR_3, *VAR_4;
  char * VAR_5 = ((void*)0);

  VAR_2 = (SHashObj *)VAR_0;
  if (VAR_2 == ((void*)0) || VAR_2->maxSessions <= 0) return ((void*)0);

  FUNC_0(&VAR_2->mutex);

  if (VAR_2->hashList) {
    for (int VAR_6 = 0; VAR_6 < VAR_2->maxSessions; ++VAR_6) {
      VAR_3 = VAR_2->hashList[VAR_6];
      while (VAR_3) {
        VAR_4 = VAR_3->next;
        int VAR_7 = VAR_1(VAR_3->data);
        if (VAR_7) {
          VAR_5 = VAR_3->data;
          goto VisitEnd;
        }

        VAR_3 = VAR_4;
      }
    }
  }

VisitEnd:

  FUNC_1(&VAR_2->mutex);
  return VAR_5;
}
