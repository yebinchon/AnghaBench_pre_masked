
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {size_t numOfSids; int* pSidExtInfoList; } ;
typedef TYPE_1__ SVnodeSidList ;
typedef int SMeterSidExtInfo ;


 int FUNC_0 (char*,...) ;

SMeterSidExtInfo* FUNC_1(SVnodeSidList* VAR_0, int32_t VAR_1) {
  if (VAR_0 == ((void*)0)) {
    FUNC_0("illegal sidlist");
    return 0;
  }

  if (VAR_1 < 0 || VAR_1 >= VAR_0->numOfSids) {
    int32_t VAR_2 = (VAR_0->numOfSids > 0) ? (VAR_0->numOfSids - 1) : 0;

    FUNC_0("illegal sidIdx:%d, reset to 0, sidIdx range:%d-%d", VAR_1, 0, VAR_2);
    VAR_1 = 0;
  }
  return (SMeterSidExtInfo*)(VAR_0->pSidExtInfoList[VAR_1] + (char*)VAR_0);
}
