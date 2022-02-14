
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int numOfRows; char* payLoad; } ;
struct TYPE_4__ {int rowSize; int size; scalar_t__ tsSource; int ordered; scalar_t__ pData; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ STableDataBlocks ;
typedef TYPE_2__ SShellSubmitBlock ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,int,int ) ;
 int VAR_1 ;

void FUNC_3(STableDataBlocks *VAR_2) {
  SShellSubmitBlock *VAR_3 = (SShellSubmitBlock *)VAR_2->pData;


  FUNC_0(VAR_3->numOfRows * VAR_2->rowSize + sizeof(SShellSubmitBlock) == VAR_2->size);


  if (VAR_2->tsSource == VAR_0) {
    FUNC_0(VAR_2->ordered);
  }

  if (!VAR_2->ordered) {
    char *VAR_4 = VAR_3->payLoad;
    FUNC_2(VAR_4, VAR_3->numOfRows, VAR_2->rowSize, VAR_1);

    int32_t VAR_5 = 0;
    int32_t VAR_6 = 1;

    while (VAR_6 < VAR_3->numOfRows) {
      TSKEY VAR_7 = *(TSKEY *)(VAR_4 + VAR_2->rowSize * VAR_5);
      TSKEY VAR_8 = *(TSKEY *)(VAR_4 + VAR_2->rowSize * VAR_6);

      if (VAR_7 == VAR_8) {
        ++VAR_6;
        continue;
      }

      int32_t VAR_9 = (++VAR_5);
      if (VAR_9 != VAR_6) {
        FUNC_1(VAR_4 + VAR_2->rowSize * VAR_9, VAR_4 + VAR_2->rowSize * VAR_6, VAR_2->rowSize);
      }

      ++VAR_6;
    }

    VAR_2->ordered = 1;

    VAR_3->numOfRows = VAR_5 + 1;
    VAR_2->size = sizeof(SShellSubmitBlock) + VAR_2->rowSize * VAR_3->numOfRows;
  }
}
