
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {scalar_t__ pz; } ;
struct TYPE_5__ {int bytes; TYPE_1__ filterInfo; } ;
typedef int SPatternCompareInfo ;
typedef TYPE_2__ SColumnFilterElem ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *) ;

bool FUNC_1(SColumnFilterElem* VAR_3, char* VAR_4, char *VAR_5) {
  SPatternCompareInfo VAR_6 = VAR_0;

  return FUNC_0((wchar_t*) VAR_3->filterInfo.pz, (wchar_t*) VAR_4, VAR_3->bytes/VAR_1, &VAR_6) == VAR_2;
}
