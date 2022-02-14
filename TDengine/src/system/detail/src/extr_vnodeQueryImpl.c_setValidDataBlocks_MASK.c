
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {size_t start; size_t numOfBlocks; int ** pBlock; } ;
typedef TYPE_1__ SMeterDataInfo ;
typedef int SCompBlock ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int **,size_t) ;

__attribute__((used)) static bool FUNC_2(SMeterDataInfo *VAR_1, SCompBlock *VAR_2, int32_t VAR_3) {
  int32_t VAR_4 = (VAR_3 - VAR_1->start) + 1;
  FUNC_0(VAR_4 > 0);

  if (VAR_4 != VAR_1->numOfBlocks) {
    char *VAR_5 = FUNC_1(VAR_1->pBlock, VAR_0 * VAR_4);
    if (VAR_5 == ((void*)0)) {
      return 0;
    }

    VAR_1->pBlock = (SCompBlock **)VAR_5;
    VAR_1->numOfBlocks = VAR_4;
  }

  for (int32_t VAR_6 = VAR_1->start, VAR_7 = 0; VAR_6 <= VAR_3; ++VAR_6, ++VAR_7) {
    VAR_1->pBlock[VAR_7] = &VAR_2[VAR_6];
  }

  return 1;
}
