
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int cond; int uid; } ;
struct TYPE_4__ {size_t numOfTagCond; TYPE_2__* cond; } ;
typedef TYPE_1__ STagCond ;
typedef TYPE_2__ SCond ;


 int FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*) ;

void FUNC_2(STagCond* VAR_0, uint64_t VAR_1, const char* VAR_2) {
  size_t VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 == 0) {
    return;
  }

  SCond* VAR_4 = &VAR_0->cond[VAR_0->numOfTagCond];
  VAR_4->uid = VAR_1;
  VAR_4->cond = FUNC_0(VAR_2);

  VAR_0->numOfTagCond += 1;
}
