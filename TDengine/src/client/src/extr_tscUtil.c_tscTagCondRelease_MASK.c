
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_6__ {int cond; } ;
struct TYPE_8__ {size_t numOfTagCond; TYPE_2__* cond; TYPE_1__ tbnameCond; } ;
struct TYPE_7__ {int cond; } ;
typedef TYPE_3__ STagCond ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

void FUNC_2(STagCond* VAR_0) {
  FUNC_0(&VAR_0->tbnameCond.cond);

  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->numOfTagCond; ++VAR_1) {
    FUNC_0(&VAR_0->cond[VAR_1].cond);
  }

  FUNC_1(VAR_0, 0, sizeof(STagCond));
}
