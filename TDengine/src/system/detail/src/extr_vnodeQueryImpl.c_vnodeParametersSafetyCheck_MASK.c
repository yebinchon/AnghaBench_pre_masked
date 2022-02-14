
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int numOfCols; TYPE_2__* colList; } ;
struct TYPE_6__ {scalar_t__ colId; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
typedef TYPE_3__ SQuery ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int ) ;

bool FUNC_2(SQuery *VAR_0) {

  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->numOfCols - 1; ++VAR_1) {
    if (VAR_0->colList[VAR_1].data.colId == VAR_0->colList[VAR_1 + 1].data.colId) {
      FUNC_1("QInfo:%p invalid data load column for query", FUNC_0(VAR_0));
      return 0;
    }
  }
  return 1;
}
