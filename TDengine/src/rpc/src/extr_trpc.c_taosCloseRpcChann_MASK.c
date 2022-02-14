
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * signature; } ;
struct TYPE_6__ {int sessions; int mutex; TYPE_3__* connList; int idPool; int tmrCtrl; int hash; } ;
struct TYPE_5__ {int numOfChanns; TYPE_2__* channList; int label; } ;
typedef TYPE_1__ STaosRpc ;
typedef TYPE_2__ SRpcChann ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;

void FUNC_8(void *VAR_0, int VAR_1) {
  STaosRpc * VAR_2 = (STaosRpc *)VAR_0;
  SRpcChann *VAR_3;

  if (VAR_2 == ((void*)0)) return;
  if (VAR_1 >= VAR_2->numOfChanns || VAR_1 < 0) {
    FUNC_2("%s cid:%d, chann is out of range, max:%d", VAR_2->label, VAR_1, VAR_2->numOfChanns);
    return;
  }

  VAR_3 = VAR_2->channList + VAR_1;

  for (int VAR_4 = 0; VAR_4 < VAR_3->sessions; ++VAR_4) {
    if (VAR_3->connList[VAR_4].signature != ((void*)0)) {
      FUNC_4((void *)(VAR_3->connList + VAR_4));
    }
  }

  FUNC_3(VAR_3->hash);
  FUNC_6(VAR_3->tmrCtrl);
  FUNC_5(VAR_3->idPool);
  FUNC_7(VAR_3->connList);
  FUNC_1(&VAR_3->mutex);

  FUNC_0(VAR_3, 0, sizeof(SRpcChann));
}
