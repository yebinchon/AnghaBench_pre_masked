
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ numOfElems; char* data; } ;
typedef TYPE_2__ tFilePage ;
struct TYPE_8__ {scalar_t__ numOfCols; scalar_t__* colOffset; TYPE_1__* pFields; } ;
typedef TYPE_3__ tColModel ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {scalar_t__ bytes; } ;


 int FUNC_0 (char*,char*,scalar_t__) ;

void FUNC_1(tColModel *VAR_0, tFilePage *VAR_1, int32_t VAR_2, int32_t VAR_3, int32_t VAR_4) {
  if (VAR_1->numOfElems == 0 || (VAR_4 - VAR_3 + 1) <= 0) {
    return;
  }

  int32_t VAR_5 = VAR_4 - VAR_3 + 1;
  int32_t VAR_6 = VAR_1->numOfElems - VAR_5;
  int32_t VAR_7 = VAR_1->numOfElems - VAR_4 - 1;


  for (int32_t VAR_8 = 0; VAR_8 < VAR_0->numOfCols; ++VAR_8) {
    char *VAR_9 = VAR_1->data + VAR_0->colOffset[VAR_8] * VAR_2 + VAR_3 * VAR_0->pFields[VAR_8].bytes;
    char *VAR_10 = VAR_9 + VAR_0->pFields[VAR_8].bytes * VAR_5;

    FUNC_0(VAR_9, VAR_10, VAR_0->pFields[VAR_8].bytes * VAR_7);
  }

  VAR_1->numOfElems = VAR_6;
}
