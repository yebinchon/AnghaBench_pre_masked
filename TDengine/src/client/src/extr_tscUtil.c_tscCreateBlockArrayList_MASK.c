
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int nAlloc; int * pData; } ;
typedef TYPE_1__ SDataBlockList ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;

SDataBlockList* FUNC_2() {
  const int32_t VAR_1 = 16;

  SDataBlockList* VAR_2 = FUNC_0(1, sizeof(SDataBlockList));
  if (VAR_2 == ((void*)0)) {
    return ((void*)0);
  }
  VAR_2->nAlloc = VAR_1;
  VAR_2->pData = FUNC_0(1, VAR_0 * VAR_2->nAlloc);
  if (VAR_2->pData == ((void*)0)) {
    FUNC_1(VAR_2);
    return ((void*)0);
  }

  return VAR_2;
}
