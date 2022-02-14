
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {int numOfTags; int numOfColumns; } ;
struct TYPE_9__ {TYPE_3__* pMeterMeta; } ;
struct TYPE_8__ {int * pStream; int * fp; int cmd; } ;
typedef TYPE_1__ SSqlObj ;
typedef int SSqlCmd ;
typedef TYPE_2__ SMeterMetaInfo ;
typedef TYPE_3__ SMeterMeta ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,void**,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,TYPE_1__*,int ,int ) ;

int FUNC_6(SSqlObj *VAR_2, char *VAR_3, int32_t VAR_4) {
  SSqlCmd * VAR_5 = &VAR_2->cmd;
  SMeterMetaInfo *VAR_6 = FUNC_4(VAR_5, VAR_4);


  FUNC_1(VAR_1, (void **)&(VAR_6->pMeterMeta), 0);
  VAR_6->pMeterMeta = (SMeterMeta *)FUNC_0(VAR_1, VAR_3);

  if (VAR_6->pMeterMeta != ((void*)0)) {
    SMeterMeta *VAR_7 = VAR_6->pMeterMeta;

    FUNC_5("%p retrieve meterMeta from cache, the number of columns:%d, numOfTags:%d", VAR_2, VAR_7->numOfColumns,
             VAR_7->numOfTags);

    return VAR_0;
  }





  if (VAR_2->fp != ((void*)0) && VAR_2->pStream == ((void*)0)) {
    FUNC_3(VAR_5);
  }

  return FUNC_2(VAR_2, VAR_3, VAR_4);
}
