
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_12__ {TYPE_3__* pMeterMeta; } ;
struct TYPE_11__ {scalar_t__ meterType; size_t numOfTags; } ;
struct TYPE_10__ {int bytes; int type; } ;
struct TYPE_9__ {int cmd; } ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SMeterMeta ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (char*,int ,int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 char* FUNC_2 (TYPE_3__*) ;
 TYPE_5__* FUNC_3 (int *,int ) ;

__attribute__((used)) static int32_t FUNC_4(SSqlObj *VAR_3) {
  SMeterMeta *VAR_4 = FUNC_3(&VAR_3->cmd, 0)->pMeterMeta;

  if (VAR_4->meterType == VAR_0 || VAR_4->meterType == VAR_1 ||
      VAR_4->meterType == VAR_2) {
    return 0;
  }

  char * VAR_5 = FUNC_2(VAR_4);
  SSchema *VAR_6 = FUNC_1(VAR_4);

  int32_t VAR_7 = FUNC_0(VAR_5, VAR_6[0].bytes, VAR_6[0].type);

  VAR_5 += VAR_6[0].bytes;
  for (int32_t VAR_8 = 1; VAR_8 < VAR_4->numOfTags; ++VAR_8) {
    int32_t VAR_9 = FUNC_0(VAR_5, VAR_6[VAR_8].bytes, VAR_6[VAR_8].type);
    if (VAR_7 < VAR_9) {
      VAR_7 = VAR_9;
    }

    VAR_5 += VAR_6[VAR_8].bytes;
  }

  return VAR_7;
}
