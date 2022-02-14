
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {scalar_t__ nAggTimeInterval; scalar_t__ numOfTagsCols; scalar_t__ numOfCols; scalar_t__ numOfSids; scalar_t__ numOfGroupCols; scalar_t__ numOfOutputCols; scalar_t__ tagLength; } ;
typedef TYPE_1__ SQueryMeterMsg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_1(SQueryMeterMsg *VAR_2) {
  if (VAR_2->nAggTimeInterval < 0) {
    FUNC_0("qmsg:%p illegal value of aggTimeInterval %ld", VAR_2, VAR_2->nAggTimeInterval);
    return -1;
  }

  if (VAR_2->numOfTagsCols < 0 || VAR_2->numOfTagsCols > VAR_1 + 1) {
    FUNC_0("qmsg:%p illegal value of numOfTagsCols %ld", VAR_2, VAR_2->numOfTagsCols);
    return -1;
  }

  if (VAR_2->numOfCols <= 0 || VAR_2->numOfCols > VAR_0) {
    FUNC_0("qmsg:%p illegal value of numOfCols %ld", VAR_2, VAR_2->numOfCols);
    return -1;
  }

  if (VAR_2->numOfSids <= 0) {
    FUNC_0("qmsg:%p illegal value of numOfSids %ld", VAR_2, VAR_2->numOfSids);
    return -1;
  }

  if (VAR_2->numOfGroupCols < 0) {
    FUNC_0("qmsg:%p illegal value of numOfGroupbyCols %ld", VAR_2, VAR_2->numOfGroupCols);
    return -1;
  }

  if (VAR_2->numOfOutputCols > VAR_0 || VAR_2->numOfOutputCols <= 0) {
    FUNC_0("qmsg:%p illegal value of output columns %d", VAR_2, VAR_2->numOfOutputCols);
    return -1;
  }

  if (VAR_2->tagLength < 0) {
    FUNC_0("qmsg:%p illegal value of tag length %d", VAR_2, VAR_2->tagLength);
    return -1;
  }

  return 0;
}
