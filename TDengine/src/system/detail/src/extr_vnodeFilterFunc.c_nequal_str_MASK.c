
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; scalar_t__ pz; } ;
struct TYPE_5__ {scalar_t__ bytes; TYPE_1__ filterInfo; } ;
typedef TYPE_2__ SColumnFilterElem ;


 scalar_t__ FUNC_0 (char*,char*,scalar_t__) ;

bool FUNC_1(SColumnFilterElem *VAR_0, char *VAR_1, char *VAR_2) {
  if (VAR_0->filterInfo.len > VAR_0->bytes) {
    return 1;
  }

  return FUNC_0((char *)VAR_0->filterInfo.pz, VAR_1, VAR_0->bytes) != 0;
}
