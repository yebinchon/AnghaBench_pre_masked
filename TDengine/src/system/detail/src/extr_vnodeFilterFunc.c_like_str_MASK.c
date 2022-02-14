
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pz; } ;
struct TYPE_5__ {int bytes; TYPE_1__ filterInfo; } ;
typedef int SPatternCompareInfo ;
typedef TYPE_2__ SColumnFilterElem ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int ,int *) ;

bool FUNC_1(SColumnFilterElem *VAR_2, char *VAR_3, char *VAR_4) {
  SPatternCompareInfo VAR_5 = VAR_0;

  return FUNC_0((char *)VAR_2->filterInfo.pz, VAR_3, VAR_2->bytes, &VAR_5) == VAR_1;
}
