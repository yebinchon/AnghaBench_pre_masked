
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ len; } ;
struct TYPE_12__ {int numOfVnodes; int f; int tsOrder; TYPE_1__* pData; TYPE_6__ tsData; } ;
struct TYPE_11__ {int numOfVnode; int tsOrder; int magic; } ;
struct TYPE_10__ {int info; } ;
typedef int STSVnodeBlockInfo ;
typedef TYPE_2__ STSBufFileHeader ;
typedef TYPE_3__ STSBuf ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_3__*) ;

void FUNC_6(STSBuf* VAR_1) {
  if (VAR_1->tsData.len <= 0) {
    return;
  }

  FUNC_5(VAR_1);
  FUNC_4(&VAR_1->tsData);

  STSVnodeBlockInfo* VAR_2 = &VAR_1->pData[VAR_1->numOfVnodes - 1].info;


  FUNC_1(VAR_1, VAR_1->numOfVnodes - 1, VAR_2);


  STSBufFileHeader VAR_3 = {
      .magic = VAR_0, .numOfVnode = VAR_1->numOfVnodes, .tsOrder = VAR_1->tsOrder};
  FUNC_0(VAR_1, &VAR_3);

  FUNC_3(FUNC_2(VAR_1->f));
}
