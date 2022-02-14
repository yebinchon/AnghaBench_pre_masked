
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pData; } ;
typedef TYPE_1__ tSkipListNode ;
struct TYPE_5__ {scalar_t__ num; scalar_t__* pRes; } ;
typedef TYPE_2__ tQueryResultset ;
typedef size_t int32_t ;



__attribute__((used)) static void FUNC_0(tQueryResultset* VAR_0) {
  if (VAR_0 == ((void*)0) || VAR_0->num == 0) {
    return;
  }

  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->num; ++VAR_1) {
    VAR_0->pRes[VAR_1] = ((tSkipListNode*)(VAR_0->pRes[VAR_1]))->pData;
  }
}
