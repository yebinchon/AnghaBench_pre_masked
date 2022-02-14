
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {size_t* blockIndexArray; size_t* numOfBlocksPerMeter; TYPE_3__** pDataBlockInfoEx; } ;
struct TYPE_6__ {TYPE_1__* compBlock; } ;
struct TYPE_7__ {TYPE_2__ pBlock; } ;
struct TYPE_5__ {scalar_t__ offset; scalar_t__ last; } ;
typedef TYPE_3__ SMeterDataBlockInfoEx ;
typedef TYPE_4__ SBlockOrderSupporter ;


 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2) {
  int32_t VAR_3 = *(int32_t *)VAR_0;
  int32_t VAR_4 = *(int32_t *)VAR_1;

  SBlockOrderSupporter *VAR_5 = (SBlockOrderSupporter *)VAR_2;

  int32_t VAR_6 = VAR_5->blockIndexArray[VAR_3];
  int32_t VAR_7 = VAR_5->blockIndexArray[VAR_4];

  if (VAR_6 > VAR_5->numOfBlocksPerMeter[VAR_3]) {

    return 1;
  } else if (VAR_7 > VAR_5->numOfBlocksPerMeter[VAR_4]) {

    return -1;
  }

  SMeterDataBlockInfoEx *VAR_8 = &VAR_5->pDataBlockInfoEx[VAR_3][VAR_6];
  SMeterDataBlockInfoEx *VAR_9 = &VAR_5->pDataBlockInfoEx[VAR_4][VAR_7];


  if (VAR_8->pBlock.compBlock->offset == VAR_9->pBlock.compBlock->offset &&
      VAR_8->pBlock.compBlock->last == VAR_9->pBlock.compBlock->last) {

    FUNC_0("error in header file, two block with same offset:%p", VAR_8->pBlock.compBlock->offset);
  }

  return VAR_8->pBlock.compBlock->offset > VAR_9->pBlock.compBlock->offset ? 1 : -1;
}
