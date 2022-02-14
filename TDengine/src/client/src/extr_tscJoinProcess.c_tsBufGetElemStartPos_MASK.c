
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_14__ {int info; } ;
struct TYPE_12__ {int vnodeIndex; int blockIndex; } ;
struct TYPE_13__ {TYPE_9__* pData; TYPE_2__ cur; int numOfVnodes; } ;
struct TYPE_11__ {int vnode; } ;
typedef int STSVnodeBlockInfo ;
typedef TYPE_1__ STSElem ;
typedef TYPE_2__ STSCursor ;
typedef TYPE_3__ STSBuf ;


 int FUNC_0 (TYPE_3__*,int *,int ) ;
 int FUNC_1 (TYPE_9__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 TYPE_1__ FUNC_3 (TYPE_3__*) ;

STSElem FUNC_4(STSBuf* VAR_0, int32_t VAR_1, int64_t VAR_2) {
  STSElem VAR_3 = {.vnode = -1};

  if (VAR_0 == ((void*)0)) {
    return VAR_3;
  }

  int32_t VAR_4 = FUNC_1(VAR_0->pData, VAR_0->numOfVnodes, VAR_1);
  if (VAR_4 == -1) {
    return VAR_3;
  }




  STSCursor* VAR_5 = &VAR_0->cur;
  STSVnodeBlockInfo* VAR_6 = &VAR_0->pData[VAR_4].info;

  int32_t VAR_7 = FUNC_0(VAR_0, VAR_6, VAR_2);
  if (VAR_7 < 0) {
    return VAR_3;
  }

  VAR_5->vnodeIndex = VAR_4;
  VAR_5->blockIndex = VAR_7;
  FUNC_2(VAR_0, VAR_4, VAR_7);

  return FUNC_3(VAR_0);
}
