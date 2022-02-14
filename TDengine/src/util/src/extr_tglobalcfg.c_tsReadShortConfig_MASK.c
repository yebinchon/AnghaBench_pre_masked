
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_3__ {scalar_t__ minValue; scalar_t__ maxValue; size_t cfgStatus; int option; scalar_t__ ptr; } ;
typedef TYPE_1__ SGlobalConfig ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,int ,char*,int ,scalar_t__) ;
 int * VAR_1 ;

void FUNC_3(SGlobalConfig *VAR_2, char *VAR_3) {
  int32_t VAR_4 = FUNC_0(VAR_3);
  int16_t *VAR_5 = (int16_t *)VAR_2->ptr;
  if (VAR_4 < VAR_2->minValue || VAR_4 > VAR_2->maxValue) {
    FUNC_1("config option:%s, input value:%s, out of range[%f, %f], use default value:%d",
           VAR_2->option, VAR_3, VAR_2->minValue, VAR_2->maxValue, *VAR_5);
  } else {
    if (VAR_2->cfgStatus <= VAR_0) {
      *VAR_5 = (int16_t)VAR_4;
      VAR_2->cfgStatus = VAR_0;
    } else {
      FUNC_2("config option:%s, input value:%s, is configured by %s, use %d", VAR_2->option, VAR_3,
            VAR_1[VAR_2->cfgStatus], *VAR_5);
    }
  }
}
