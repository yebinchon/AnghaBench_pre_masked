
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ numOfElems; char* data; } ;
typedef TYPE_2__ tFilePage ;
struct TYPE_9__ {scalar_t__ maxCapacity; scalar_t__ numOfCols; TYPE_1__* pFields; } ;
typedef TYPE_3__ tColModel ;
typedef scalar_t__ int32_t ;
struct TYPE_7__ {scalar_t__ bytes; } ;


 char* FUNC_0 (char*,TYPE_3__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,scalar_t__) ;

void FUNC_3(tColModel *VAR_0, tFilePage *VAR_1, void *VAR_2, int32_t VAR_3, int32_t VAR_4,
                     int32_t VAR_5) {
  FUNC_1(VAR_1->numOfElems + VAR_4 <= VAR_0->maxCapacity);

  for (int32_t VAR_6 = 0; VAR_6 < VAR_0->numOfCols; ++VAR_6) {
    char *VAR_7 = FUNC_0(VAR_1->data, VAR_0, VAR_0->maxCapacity, VAR_1->numOfElems, VAR_6);
    char *VAR_8 = FUNC_0((char *)VAR_2, VAR_0, VAR_5, VAR_3, VAR_6);

    FUNC_2(VAR_7, VAR_8, VAR_0->pFields[VAR_6].bytes * VAR_4);
  }

  VAR_1->numOfElems += VAR_4;
}
