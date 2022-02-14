
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_7__ {scalar_t__ nType; char* pz; size_t nLen; scalar_t__* wpz; } ;
struct TYPE_6__ {int nLevel; TYPE_2__ key; struct TYPE_6__** pBackward; void* pData; struct TYPE_6__** pForward; } ;
typedef TYPE_1__ tSkipListNode ;
typedef TYPE_2__ tSkipListKey ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 size_t FUNC_1 (TYPE_2__ const*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,size_t) ;

__attribute__((used)) static tSkipListNode *FUNC_4(void *VAR_2, const tSkipListKey *VAR_3, int32_t VAR_4) {
  size_t VAR_5 = FUNC_1(VAR_3, VAR_4);
  tSkipListNode *VAR_6 = (tSkipListNode *)FUNC_0(1, VAR_5);

  VAR_6->pForward = (tSkipListNode **)(&VAR_6[1]);
  VAR_6->pBackward = (VAR_6->pForward + VAR_4);

  VAR_6->pData = VAR_2;

  VAR_6->key = *VAR_3;
  if (VAR_3->nType == VAR_0) {
    VAR_6->key.pz = (char *)(VAR_6->pBackward + VAR_4);

    FUNC_2(VAR_6->key.pz, VAR_3->pz);
    VAR_6->key.pz[VAR_3->nLen] = 0;
  } else if (VAR_3->nType == VAR_1) {
    VAR_6->key.wpz = (wchar_t *)(VAR_6->pBackward + VAR_4);
    FUNC_3(VAR_6->key.wpz, VAR_3->wpz, VAR_3->nLen);
    VAR_6->key.wpz[VAR_3->nLen] = 0;
  }

  VAR_6->nLevel = VAR_4;
  return VAR_6;
}
