
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int uid; int numOfTags; } ;
struct TYPE_14__ {TYPE_6__* pMeterMeta; int numOfTags; } ;
struct TYPE_13__ {int numOfCols; } ;
struct TYPE_12__ {void* fp; TYPE_2__ cmd; } ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSqlCmd ;
typedef TYPE_3__ SMeterMetaInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,void**,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,TYPE_1__*,int ,int ,int ,TYPE_6__*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(SSqlObj *VAR_2, char *VAR_3) {
  int VAR_4 = 0;
  SMeterMetaInfo *VAR_5 = FUNC_2(&VAR_2->cmd, 0);


  SSqlCmd *VAR_6 = &VAR_2->cmd;


  if (VAR_2->fp == ((void*)0)) VAR_2->fp = (void *)0x1;





  if (VAR_5->pMeterMeta == ((void*)0) || !FUNC_3(VAR_6)) {
    if (VAR_5->pMeterMeta) {
      FUNC_4("%p update meter meta, old: numOfTags:%d, numOfCols:%d, uid:%d, addr:%p", VAR_2,
               VAR_5->numOfTags, VAR_6->numOfCols, VAR_5->pMeterMeta->uid, VAR_5->pMeterMeta);
    }
    FUNC_5(&VAR_2->cmd);
    FUNC_0(VAR_1, (void **)&(VAR_5->pMeterMeta), 1);

    VAR_4 = FUNC_1(VAR_2, VAR_3, 0);
  } else {
    FUNC_4("%p metric query not update metric meta, numOfTags:%d, numOfCols:%d, uid:%lld, addr:%p", VAR_2,
             VAR_5->pMeterMeta->numOfTags, VAR_6->numOfCols, VAR_5->pMeterMeta->uid,
             VAR_5->pMeterMeta);
  }

  if (VAR_4 != VAR_0) {
    if (VAR_2->fp == (void *)0x1) {
      VAR_2->fp = ((void*)0);
    }
  }

  return VAR_4;
}
