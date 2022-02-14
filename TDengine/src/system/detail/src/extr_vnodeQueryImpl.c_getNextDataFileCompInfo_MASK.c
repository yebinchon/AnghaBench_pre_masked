
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_9__ {int fileId; } ;
struct TYPE_8__ {TYPE_2__* pQuery; } ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;
typedef int SMeterObj ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int*,TYPE_1__*,scalar_t__) ;

int32_t FUNC_5(SQueryRuntimeEnv *VAR_3, SMeterObj *VAR_4, int32_t VAR_5) {
  SQuery *VAR_6 = VAR_3->pQuery;
  VAR_6->fileId += VAR_5;

  int32_t VAR_7 = 0;
  int32_t VAR_8 = (VAR_5 == VAR_0) ? VAR_1 : VAR_2;
  while (1) {
    VAR_7 = FUNC_4(&VAR_6->fileId, VAR_3, VAR_8);


    if (VAR_7 < 0) {
      if (VAR_5 == VAR_0) {
        FUNC_1("QInfo:%p no file to access, try data in cache", FUNC_0(VAR_6));
      } else {
        FUNC_1("QInfo:%p no file to access in desc order, query completed", FUNC_0(VAR_6));
      }

      FUNC_2(VAR_3);
      VAR_6->fileId = -1;
      break;
    }

    if (FUNC_3(VAR_4, VAR_3, VAR_7) > 0) {
      break;
    }







    VAR_6->fileId += VAR_5;


    if (VAR_5 < 0 && VAR_7 == 0) {
      FUNC_2(VAR_3);
      VAR_6->fileId = -1;
      VAR_7 = -1;
      break;
    }
  }

  return VAR_7;
}
