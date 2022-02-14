
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int info; } ;
struct TYPE_4__ {TYPE_3__* pData; int numOfVnodes; } ;
typedef int STSVnodeBlockInfo ;
typedef TYPE_1__ STSBuf ;


 int FUNC_0 (TYPE_3__*,int ,int) ;

STSVnodeBlockInfo* FUNC_1(STSBuf* VAR_0, int32_t VAR_1) {
  int32_t VAR_2 = FUNC_0(VAR_0->pData, VAR_0->numOfVnodes, VAR_1);
  if (VAR_2 == -1) {
    return ((void*)0);
  }

  return &VAR_0->pData[VAR_2].info;
}
