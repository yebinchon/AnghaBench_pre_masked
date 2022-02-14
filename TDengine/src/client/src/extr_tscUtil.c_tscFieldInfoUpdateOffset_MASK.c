
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {scalar_t__ resBytes; } ;
struct TYPE_7__ {scalar_t__ numOfOutputCols; scalar_t__* pOffset; } ;
struct TYPE_6__ {TYPE_2__ fieldsInfo; } ;
typedef TYPE_1__ SSqlCmd ;
typedef TYPE_2__ SFieldInfo ;


 TYPE_3__* FUNC_0 (TYPE_1__*,size_t) ;

void FUNC_1(SSqlCmd* VAR_0) {
  SFieldInfo* VAR_1 = &VAR_0->fieldsInfo;
  if (VAR_1->numOfOutputCols == 0) {
    return;
  }

  VAR_1->pOffset[0] = 0;





  for (int32_t VAR_2 = 1; VAR_2 < VAR_1->numOfOutputCols; ++VAR_2) {
    VAR_1->pOffset[VAR_2] = VAR_1->pOffset[VAR_2 - 1] + FUNC_0(VAR_0, VAR_2 - 1)->resBytes;
  }
}
