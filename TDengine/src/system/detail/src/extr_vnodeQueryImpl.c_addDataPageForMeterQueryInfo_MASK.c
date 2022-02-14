
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int tFilePage ;
struct TYPE_3__ {int numOfPages; int numOfAlloc; int * pageList; } ;
typedef int SMeterQuerySupportObj ;
typedef TYPE_1__ SMeterQueryInfo ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int) ;

tFilePage *FUNC_2(SMeterQueryInfo *VAR_0, SMeterQuerySupportObj *VAR_1) {
  uint32_t VAR_2 = 0;
  tFilePage *VAR_3 = FUNC_0(VAR_1, &VAR_2);

  if (VAR_0->numOfPages >= VAR_0->numOfAlloc) {
    VAR_0->numOfAlloc = VAR_0->numOfAlloc << 1;
    VAR_0->pageList = FUNC_1(VAR_0->pageList, sizeof(uint32_t) * VAR_0->numOfAlloc);
  }

  VAR_0->pageList[VAR_0->numOfPages++] = VAR_2;
  return VAR_3;
}
