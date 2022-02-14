
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_11__ {int len; int allocSize; int rawBuf; } ;
struct TYPE_10__ {int numOfElem; int compLen; int* payload; int tag; } ;
struct TYPE_9__ {int numOfVnodes; TYPE_6__ tsData; TYPE_2__* pData; int fileSize; int f; int bufSize; int assistBuf; TYPE_4__ block; } ;
struct TYPE_7__ {int numOfBlocks; int compLen; } ;
struct TYPE_8__ {TYPE_1__ info; } ;
typedef TYPE_3__ STSBuf ;
typedef TYPE_4__ STSBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int*,int,int,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,int,int,int*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(STSBuf* VAR_3) {
  if (VAR_3->tsData.len == 0) {
    return;
  }

  STSBlock* VAR_4 = &VAR_3->block;

  VAR_4->numOfElem = VAR_3->tsData.len / VAR_1;
  VAR_4->compLen =
      FUNC_4(VAR_3->tsData.rawBuf, VAR_3->tsData.len, VAR_3->tsData.len / VAR_1, VAR_4->payload,
                          VAR_3->tsData.allocSize, VAR_2, VAR_3->assistBuf, VAR_3->bufSize);

  int64_t VAR_5 = FUNC_1(VAR_3->f, VAR_3->fileSize, VAR_0);
  FUNC_0(VAR_5);
  FUNC_2(&VAR_4->tag, sizeof(VAR_4->tag), 1, VAR_3->f);
  FUNC_2(&VAR_4->numOfElem, sizeof(VAR_4->numOfElem), 1, VAR_3->f);

  FUNC_2(&VAR_4->compLen, sizeof(VAR_4->compLen), 1, VAR_3->f);

  FUNC_2(VAR_4->payload, (size_t)VAR_4->compLen, 1, VAR_3->f);

  FUNC_2(&VAR_4->compLen, sizeof(VAR_4->compLen), 1, VAR_3->f);

  int32_t VAR_6 = sizeof(VAR_4->tag) + sizeof(VAR_4->numOfElem) + sizeof(VAR_4->compLen) * 2 + VAR_4->compLen;
  VAR_3->fileSize += VAR_6;

  VAR_3->tsData.len = 0;

  VAR_3->pData[VAR_3->numOfVnodes - 1].info.compLen += VAR_6;
  VAR_3->pData[VAR_3->numOfVnodes - 1].info.numOfBlocks += 1;

  FUNC_3(&VAR_3->tsData);
}
