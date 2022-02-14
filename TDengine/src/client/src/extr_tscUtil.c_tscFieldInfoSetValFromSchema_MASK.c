
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {scalar_t__ numOfOutputCols; int * pFields; } ;
struct TYPE_7__ {int bytes; int name; int type; } ;
typedef int TAOS_FIELD ;
typedef TYPE_1__ SSchema ;
typedef TYPE_2__ SFieldInfo ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (int *,int ,int ,int ) ;

void FUNC_3(SFieldInfo* VAR_0, int32_t VAR_1, SSchema* VAR_2) {
  FUNC_0(VAR_0, VAR_0->numOfOutputCols + 1);
  FUNC_1(VAR_0, VAR_1);

  TAOS_FIELD* VAR_3 = &VAR_0->pFields[VAR_1];
  FUNC_2(VAR_3, VAR_2->type, VAR_2->name, VAR_2->bytes);
  VAR_0->numOfOutputCols++;
}
