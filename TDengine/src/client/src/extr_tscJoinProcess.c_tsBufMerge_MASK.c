
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ssize_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_13__ {scalar_t__ numOfVnodes; int numOfAlloc; scalar_t__ fileSize; scalar_t__ numOfTotal; int f; TYPE_2__* pData; } ;
struct TYPE_11__ {int vnode; scalar_t__ offset; scalar_t__ compLen; scalar_t__ numOfBlocks; } ;
struct TYPE_12__ {TYPE_1__ info; scalar_t__ len; } ;
typedef TYPE_2__ STSVnodeBlockInfoEx ;
typedef TYPE_3__ STSBuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,size_t) ;
 int FUNC_6 (char*,char*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int ,int ,scalar_t__*,int) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*) ;

int32_t FUNC_11(STSBuf* VAR_3, const STSBuf* VAR_4, int32_t VAR_5) {
  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_4->numOfVnodes <= 0) {
    return 0;
  }

  if (VAR_3->numOfVnodes + VAR_4->numOfVnodes > VAR_1) {
    return -1;
  }


  if (VAR_4->numOfVnodes > 1) {
    return -1;
  }


  FUNC_10(VAR_3);


  if (VAR_5 != VAR_3->pData[VAR_3->numOfVnodes - 1].info.vnode) {
    int32_t VAR_6 = VAR_3->numOfVnodes;
    int32_t VAR_7 = VAR_6 + VAR_4->numOfVnodes;

    if (VAR_3->numOfAlloc < VAR_7) {
      VAR_3->numOfAlloc = VAR_7;

      STSVnodeBlockInfoEx* VAR_8 = FUNC_7(VAR_3->pData, sizeof(STSVnodeBlockInfoEx) * VAR_7);
      if (VAR_8 == ((void*)0)) {
        return -1;
      }

      VAR_3->pData = VAR_8;
    }


    FUNC_5(&VAR_3->pData[VAR_6], VAR_4->pData, (size_t)VAR_4->numOfVnodes * sizeof(STSVnodeBlockInfoEx));


    for (int32_t VAR_9 = 0; VAR_9 < VAR_4->numOfVnodes; ++VAR_9) {
      STSVnodeBlockInfoEx* VAR_10 = &VAR_3->pData[VAR_9 + VAR_6];
      VAR_10->info.offset = (VAR_4->pData[VAR_9].info.offset - FUNC_4()) + VAR_3->fileSize;
      VAR_10->info.vnode = VAR_5;
    }

    VAR_3->numOfVnodes = VAR_7;
  } else {
    STSVnodeBlockInfoEx* VAR_11 = &VAR_3->pData[VAR_3->numOfVnodes - 1];
    VAR_11->len += VAR_4->pData[0].len;
    VAR_11->info.numOfBlocks += VAR_4->pData[0].info.numOfBlocks;
    VAR_11->info.compLen += VAR_4->pData[0].info.compLen;
    VAR_11->info.vnode = VAR_5;
  }

  int64_t VAR_12 = FUNC_2(VAR_3->f, 0, VAR_0);
  FUNC_0(VAR_12 == 0);

  int64_t VAR_13 = FUNC_4();
  int32_t VAR_14 = VAR_4->fileSize - VAR_13;




  ssize_t VAR_15 = FUNC_3(VAR_3->f, VAR_4->f, &VAR_13, VAR_14);

  if (VAR_15 == -1) {
    FUNC_6("%s\n", FUNC_9(VAR_2));
    return -1;
  }

  if (VAR_15 != VAR_14) {
    FUNC_6("%s\n", FUNC_9(VAR_2));
    return -1;
  }

  VAR_3->numOfTotal += VAR_4->numOfTotal;

  return 0;
}
