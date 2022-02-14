
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_12__ {int offset; scalar_t__ vnode; scalar_t__ compLen; scalar_t__ numOfBlocks; } ;
struct TYPE_15__ {TYPE_1__ info; } ;
struct TYPE_14__ {int f; scalar_t__ tsOrder; scalar_t__ numOfVnodes; int fileSize; } ;
struct TYPE_13__ {scalar_t__ tsOrder; scalar_t__ numOfVnode; int magic; } ;
typedef TYPE_1__ STSVnodeBlockInfo ;
typedef TYPE_2__ STSBufFileHeader ;
typedef TYPE_3__ STSBuf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int,scalar_t__,int ) ;
 int FUNC_8 () ;
 TYPE_3__* FUNC_9 (int) ;

STSBuf* FUNC_10(const char* VAR_4, int32_t VAR_5, int32_t VAR_6, int32_t VAR_7) {
  STSBuf* VAR_8 = FUNC_9(1);

  STSVnodeBlockInfo* VAR_9 = &(FUNC_2(VAR_8, 0)->info);
  VAR_9->numOfBlocks = VAR_5;
  VAR_9->compLen = VAR_6;
  VAR_9->offset = FUNC_8();
  VAR_9->vnode = 0;


  FUNC_1(VAR_8, VAR_8->numOfVnodes - 1, VAR_9);

  FUNC_5(VAR_8->f, VAR_9->offset, VAR_0);
  FUNC_7((void*) VAR_4, 1, VAR_6, VAR_8->f);
  VAR_8->fileSize += VAR_6;

  VAR_8->tsOrder = VAR_7;
  FUNC_3(VAR_7 == VAR_1 || VAR_7 == VAR_2);

  STSBufFileHeader VAR_10 = {
      .magic = VAR_3, .numOfVnode = VAR_8->numOfVnodes, .tsOrder = VAR_8->tsOrder};
  FUNC_0(VAR_8, &VAR_10);

  FUNC_6(FUNC_4(VAR_8->f));

  return VAR_8;
}
