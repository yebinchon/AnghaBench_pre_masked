
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {size_t numOfBlocks; int * pFields; } ;
typedef TYPE_1__ SQuery ;


 int FUNC_0 (int ) ;

void FUNC_1(SQuery* VAR_0) {
  if (VAR_0 == ((void*)0) || VAR_0->pFields == ((void*)0)) {
    return;
  }

  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->numOfBlocks; ++VAR_1) {
    FUNC_0(VAR_0->pFields[VAR_1]);
  }





  VAR_0->pFields = ((void*)0);
  VAR_0->numOfBlocks = 0;
}
