
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numOfGroups; } ;
struct TYPE_6__ {TYPE_1__ res; int cmd; } ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef int SSqlCmd ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1(SSqlObj *VAR_0) {
  SSqlCmd *VAR_1 = &VAR_0->cmd;
  SSqlRes *VAR_2 = &VAR_0->res;

  VAR_2->numOfGroups += 1;


  if (FUNC_0(VAR_1, VAR_2)) {
    return 1;
  }





  return 0;
}
