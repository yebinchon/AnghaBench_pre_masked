
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float upperBndd; } ;
struct TYPE_5__ {TYPE_1__ filterInfo; } ;
typedef TYPE_2__ SColumnFilterElem ;



bool FUNC_0(SColumnFilterElem *VAR_0, char *VAR_1, char *VAR_2) {
  return (*(float *)VAR_1 <= VAR_0->filterInfo.upperBndd);
}
