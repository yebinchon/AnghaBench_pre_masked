
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
struct TYPE_11__ {size_t numOfCols; TYPE_2__* colList; } ;
struct TYPE_10__ {TYPE_3__** colDataBuffer; TYPE_5__* pQuery; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_7__ {size_t bytes; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
typedef TYPE_4__ SQueryRuntimeEnv ;
typedef TYPE_5__ SQuery ;


 int FUNC_0 (char*,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_1(SQueryRuntimeEnv *VAR_0, char **VAR_1, int32_t VAR_2) {
  SQuery *VAR_3 = VAR_0->pQuery;

  for (int32_t VAR_4 = 0; VAR_4 < VAR_3->numOfCols; ++VAR_4) {
    int32_t VAR_5 = VAR_3->colList[VAR_4].data.bytes;
    FUNC_0(VAR_1[VAR_4], VAR_0->colDataBuffer[VAR_4]->data + VAR_2 * VAR_5, VAR_5);
  }
}
