
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* int8_t ;
struct TYPE_3__ {char* option; float minValue; float maxValue; int cfgStatus; void* unitType; int ptrLength; void* cfgType; void* valType; void* ptr; } ;
typedef TYPE_1__ SGlobalConfig ;


 int VAR_0 ;

void FUNC_0(SGlobalConfig *VAR_1, char *VAR_2, void *VAR_3, int8_t VAR_4, int8_t VAR_5, float VAR_6,
                        float VAR_7, uint8_t VAR_8, int8_t VAR_9) {
  VAR_1->option = VAR_2;
  VAR_1->ptr = VAR_3;
  VAR_1->valType = VAR_4;
  VAR_1->cfgType = VAR_5;
  VAR_1->minValue = VAR_6;
  VAR_1->maxValue = VAR_7;
  VAR_1->ptrLength = VAR_8;
  VAR_1->unitType = VAR_9;
  VAR_1->cfgStatus = VAR_0;
}
