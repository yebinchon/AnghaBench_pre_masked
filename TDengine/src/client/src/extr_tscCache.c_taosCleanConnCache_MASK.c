
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int maxSessions; void* pTimer; int keepTimer; int tmrCtrl; int mutex; int ** connHashList; } ;
typedef int SConnHash ;
typedef TYPE_1__ SConnCache ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int *,int,int ) ;
 int FUNC_4 (void (*) (void*,void*),int,TYPE_1__*,int ,void**) ;

void FUNC_5(void *VAR_0, void *VAR_1) {
  int VAR_2;
  SConnHash * VAR_3;
  SConnCache *VAR_4;

  VAR_4 = (SConnCache *)VAR_0;
  if (VAR_4 == ((void*)0) || VAR_4->maxSessions == 0) return;
  if (VAR_4->pTimer != VAR_1) return;

  uint64_t VAR_5 = FUNC_2();

  for (VAR_2 = 0; VAR_2 < VAR_4->maxSessions; ++VAR_2) {
    FUNC_0(&VAR_4->mutex);
    VAR_3 = VAR_4->connHashList[VAR_2];
    FUNC_3(VAR_4, VAR_3, VAR_2, VAR_5);
    FUNC_1(&VAR_4->mutex);
  }


  FUNC_4(FUNC_5, VAR_4->keepTimer * 2, VAR_4, VAR_4->tmrCtrl, &VAR_4->pTimer);
}
