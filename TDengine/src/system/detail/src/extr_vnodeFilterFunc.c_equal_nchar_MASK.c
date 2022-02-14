
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int len; scalar_t__ pz; } ;
struct TYPE_5__ {int bytes; TYPE_1__ filterInfo; } ;
typedef TYPE_2__ SColumnFilterElem ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;

bool FUNC_1(SColumnFilterElem *VAR_1, char *VAR_2, char *VAR_3) {

  if (VAR_1->filterInfo.len > VAR_1->bytes) {
    return 0;
  }

  return FUNC_0((wchar_t *)VAR_1->filterInfo.pz, (wchar_t*) VAR_2, VAR_1->bytes/VAR_0) == 0;
}
