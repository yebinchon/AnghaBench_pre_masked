
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_11__ {int numOfPoints; } ;
struct TYPE_10__ {size_t numOfColumns; TYPE_1__* schema; } ;
struct TYPE_9__ {TYPE_2__** colDataBuffer; TYPE_4__* pMeterObj; } ;
struct TYPE_8__ {char* data; } ;
struct TYPE_7__ {size_t colId; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SMeterObj ;
typedef TYPE_5__ SCacheBlock ;


 char* FUNC_0 (char*,size_t,int) ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_2(bool VAR_0, SQueryRuntimeEnv *VAR_1, char *VAR_2, int32_t VAR_3,
                             int32_t VAR_4, int16_t VAR_5, int16_t VAR_6, int32_t VAR_7) {
  char *VAR_8 = ((void*)0);

  if (VAR_0) {
    VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_0);
  } else {
    SCacheBlock *VAR_9 = (SCacheBlock *)VAR_2;
    SMeterObj * VAR_10 = VAR_1->pMeterObj;

    if (VAR_3 < 0 || VAR_10->numOfColumns <= VAR_3 || VAR_10->schema[VAR_3].colId != VAR_4) {

      VAR_8 = VAR_1->colDataBuffer[VAR_7]->data;
      FUNC_1(VAR_8, VAR_5, VAR_6, VAR_9->numOfPoints);
    } else {
      VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_0);
    }
  }

  return VAR_8;
}
