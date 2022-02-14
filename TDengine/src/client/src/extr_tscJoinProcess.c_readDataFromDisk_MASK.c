
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_9__ {scalar_t__* payload; scalar_t__ padding; scalar_t__ compLen; scalar_t__ tag; scalar_t__ numOfElem; } ;
struct TYPE_7__ {int allocSize; int rawBuf; int len; } ;
struct TYPE_8__ {int f; int bufSize; int assistBuf; TYPE_1__ tsData; TYPE_3__ block; } ;
typedef TYPE_2__ STSBuf ;
typedef TYPE_3__ STSBlock ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,int,int,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__,scalar_t__,int ,int ,int ,int ,int ) ;

STSBlock* FUNC_5(STSBuf* VAR_3, int32_t VAR_4, bool VAR_5) {
  STSBlock* VAR_6 = &VAR_3->block;


  void* VAR_7 = VAR_6->payload;
  FUNC_3(VAR_6, 0, sizeof(STSBlock));
  VAR_6->payload = VAR_7;

  if (VAR_4 == VAR_1) {




    FUNC_2(VAR_3->f, -sizeof(VAR_6->padding), VAR_0);
    FUNC_1(&VAR_6->padding, sizeof(VAR_6->padding), 1, VAR_3->f);

    VAR_6->compLen = VAR_6->padding;
    int32_t VAR_8 = VAR_6->compLen + sizeof(VAR_6->compLen) * 2 + sizeof(VAR_6->numOfElem) + sizeof(VAR_6->tag);
    FUNC_2(VAR_3->f, -VAR_8, VAR_0);
  }

  FUNC_1(&VAR_6->tag, sizeof(VAR_6->tag), 1, VAR_3->f);
  FUNC_1(&VAR_6->numOfElem, sizeof(VAR_6->numOfElem), 1, VAR_3->f);

  FUNC_1(&VAR_6->compLen, sizeof(VAR_6->compLen), 1, VAR_3->f);
  FUNC_1(VAR_6->payload, (size_t)VAR_6->compLen, 1, VAR_3->f);

  if (VAR_5) {
    VAR_3->tsData.len =
        FUNC_4(VAR_6->payload, VAR_6->compLen, VAR_6->numOfElem, VAR_3->tsData.rawBuf,
                              VAR_3->tsData.allocSize, VAR_2, VAR_3->assistBuf, VAR_3->bufSize);
  }


  FUNC_1(&VAR_6->padding, sizeof(VAR_6->padding), 1, VAR_3->f);


  if (VAR_4 == VAR_1) {
    int32_t VAR_9 = VAR_6->compLen + sizeof(VAR_6->compLen) * 2 + sizeof(VAR_6->numOfElem) + sizeof(VAR_6->tag);
    int64_t VAR_10 = FUNC_2(VAR_3->f, -VAR_9, VAR_0);
    FUNC_0(VAR_10);
  }

  return VAR_6;
}
