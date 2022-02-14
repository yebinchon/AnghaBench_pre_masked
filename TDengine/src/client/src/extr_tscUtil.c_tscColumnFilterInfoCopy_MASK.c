
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filterOnBinary; scalar_t__ lowerRelOptr; scalar_t__ upperRelOptr; scalar_t__ pz; scalar_t__ len; } ;
typedef TYPE_1__ SColumnFilterInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;

void FUNC_3(SColumnFilterInfo* VAR_1, const SColumnFilterInfo* VAR_2) {
  FUNC_0 (VAR_2 != ((void*)0) && VAR_1 != ((void*)0));

  FUNC_0(VAR_2->filterOnBinary == 0 || VAR_2->filterOnBinary == 1);
  if (VAR_2->lowerRelOptr == VAR_0 && VAR_2->upperRelOptr == VAR_0) {
    FUNC_0(0);
  }

  *VAR_1 = *VAR_2;
  if (VAR_1->filterOnBinary) {
    size_t VAR_3 = (size_t) VAR_1->len + 1;
    VAR_1->pz = FUNC_1(1, VAR_3);
    FUNC_2((char*) VAR_1->pz, (char*) VAR_2->pz, (size_t) VAR_3);
  }
}
