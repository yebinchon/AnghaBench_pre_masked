
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_8__ {int numOfTags; int tagColumnIndex; int * pMetricMeta; int * pMeterMeta; int name; } ;
struct TYPE_7__ {int numOfTables; TYPE_2__** pMeterInfo; } ;
typedef TYPE_1__ SSqlCmd ;
typedef int SMetricMeta ;
typedef TYPE_2__ SMeterMetaInfo ;
typedef int SMeterMeta ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int*,int) ;
 void* FUNC_3 (TYPE_2__**,int) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

SMeterMetaInfo* FUNC_6(SSqlCmd* VAR_2, const char* VAR_3, SMeterMeta* VAR_4, SMetricMeta* VAR_5,
                                    int16_t VAR_6, int16_t* VAR_7) {
  void* VAR_8 = FUNC_3(VAR_2->pMeterInfo, (VAR_2->numOfTables + 1) * VAR_0);
  if (VAR_8 == ((void*)0)) {
    return ((void*)0);
  }

  VAR_2->pMeterInfo = VAR_8;
  VAR_2->pMeterInfo[VAR_2->numOfTables] = FUNC_1(1, sizeof(SMeterMetaInfo));

  SMeterMetaInfo* VAR_9 = VAR_2->pMeterInfo[VAR_2->numOfTables];
  FUNC_0(VAR_9 != ((void*)0));

  if (VAR_3 != ((void*)0)) {
    FUNC_0(FUNC_5(VAR_3) <= VAR_1);
    FUNC_4(VAR_9->name, VAR_3);
  }

  VAR_9->pMeterMeta = VAR_4;
  VAR_9->pMetricMeta = VAR_5;
  VAR_9->numOfTags = VAR_6;

  if (VAR_7 != ((void*)0)) {
    FUNC_2(VAR_9->tagColumnIndex, VAR_7, sizeof(int16_t) * VAR_6);
  }

  VAR_2->numOfTables += 1;

  return VAR_9;
}
