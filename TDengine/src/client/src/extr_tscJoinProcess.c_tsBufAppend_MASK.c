
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_15__ {scalar_t__ tag; } ;
struct TYPE_17__ {scalar_t__ len; scalar_t__ rawBuf; scalar_t__ threshold; } ;
struct TYPE_18__ {int numOfVnodes; scalar_t__ numOfTotal; TYPE_2__ block; TYPE_3__* pData; TYPE_4__ tsData; } ;
struct TYPE_14__ {scalar_t__ vnode; } ;
struct TYPE_16__ {int len; TYPE_1__ info; } ;
typedef TYPE_3__ STSVnodeBlockInfoEx ;
typedef TYPE_4__ STSList ;
typedef TYPE_5__ STSBuf ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_5__*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (scalar_t__,char const*,size_t) ;
 int FUNC_4 (TYPE_5__*,char const*,scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;

void FUNC_8(STSBuf* VAR_1, int32_t VAR_2, int64_t VAR_3, const char* VAR_4, int32_t VAR_5) {
  STSVnodeBlockInfoEx* VAR_6 = ((void*)0);
  STSList* VAR_7 = &VAR_1->tsData;

  if (VAR_1->numOfVnodes == 0 || VAR_1->pData[VAR_1->numOfVnodes - 1].info.vnode != VAR_2) {
    FUNC_7(VAR_1);
    FUNC_5(VAR_7);

    VAR_6 = FUNC_0(VAR_1, VAR_2);
  } else {
    VAR_6 = &VAR_1->pData[VAR_1->numOfVnodes - 1];
  }

  FUNC_1(VAR_6->info.vnode == VAR_2);

  if (VAR_1->block.tag != VAR_3 && VAR_7->len > 0) {

    FUNC_7(VAR_1);
  } else {
    FUNC_2(VAR_7, VAR_5);
  }

  VAR_1->block.tag = VAR_3;
  FUNC_3(VAR_7->rawBuf + VAR_7->len, VAR_4, (size_t)VAR_5);


  FUNC_4(VAR_1, VAR_4, VAR_5);

  VAR_7->len += VAR_5;
  VAR_6->len += VAR_5;

  VAR_1->numOfTotal += VAR_5 / VAR_0;

  if (VAR_7->len >= VAR_7->threshold) {
    FUNC_7(VAR_1);
    FUNC_5(VAR_7);
  }

  FUNC_6(VAR_1);
}
