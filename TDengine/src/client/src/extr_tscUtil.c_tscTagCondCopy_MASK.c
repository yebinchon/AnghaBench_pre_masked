
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_7__ {int uid; int cond; } ;
struct TYPE_9__ {size_t numOfTagCond; int relType; TYPE_2__* cond; int joinInfo; TYPE_1__ tbnameCond; } ;
struct TYPE_8__ {int uid; int cond; } ;
typedef TYPE_3__ STagCond ;
typedef int SJoinInfo ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

void FUNC_3(STagCond* VAR_0, const STagCond* VAR_1) {
  FUNC_2(VAR_0, 0, sizeof(STagCond));

  FUNC_0(&VAR_0->tbnameCond.cond, &VAR_1->tbnameCond.cond);
  VAR_0->tbnameCond.uid = VAR_1->tbnameCond.uid;

  FUNC_1(&VAR_0->joinInfo, &VAR_1->joinInfo, sizeof(SJoinInfo));

  for (int32_t VAR_2 = 0; VAR_2 < VAR_1->numOfTagCond; ++VAR_2) {
    FUNC_0(&VAR_0->cond[VAR_2].cond, &VAR_1->cond[VAR_2].cond);
    VAR_0->cond[VAR_2].uid = VAR_1->cond[VAR_2].uid;
  }

  VAR_0->relType = VAR_1->relType;
  VAR_0->numOfTagCond = VAR_1->numOfTagCond;
}
