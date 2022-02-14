
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_28__ {TYPE_13__* pSchema; } ;
typedef TYPE_5__ tOrderDescriptor ;
struct TYPE_29__ {TYPE_1__* pSegs; } ;
typedef TYPE_6__ tMemBucket ;
struct TYPE_30__ {int startPageId; scalar_t__ numOfPages; } ;
typedef TYPE_7__ tFlushoutInfo ;
struct TYPE_27__ {scalar_t__ numOfElems; int data; } ;
struct TYPE_31__ {struct TYPE_31__* pNext; TYPE_4__ item; } ;
typedef TYPE_8__ tFilePagesItem ;
struct TYPE_32__ {scalar_t__ numOfElems; int data; } ;
typedef TYPE_9__ tFilePage ;
struct TYPE_25__ {size_t nLength; TYPE_7__* pFlushoutInfo; } ;
struct TYPE_26__ {scalar_t__ numOfElemsInFile; TYPE_2__ flushoutData; } ;
struct TYPE_22__ {int nElemSize; int numOfAllElems; int nPageSize; TYPE_8__* pHead; TYPE_3__ fileMeta; int dataFile; } ;
typedef TYPE_10__ tExtMemBuffer ;
typedef size_t int32_t ;
struct TYPE_24__ {TYPE_10__** pBuffer; } ;
struct TYPE_23__ {size_t maxCapacity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;
 size_t FUNC_3 (TYPE_9__*,int,int,int ) ;
 size_t FUNC_4 (int ,int,int ) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 TYPE_10__* FUNC_6 (TYPE_6__*,size_t,size_t) ;
 int FUNC_7 (TYPE_5__*,scalar_t__,int ,scalar_t__,int ,int ) ;
 int FUNC_8 (TYPE_13__*,TYPE_9__*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_10__*) ;
 int FUNC_10 (TYPE_9__*) ;

__attribute__((used)) static tFilePage *FUNC_11(tMemBucket *VAR_2, int32_t VAR_3, int32_t VAR_4,
                                         tOrderDescriptor *VAR_5) {

  tExtMemBuffer *VAR_6 = VAR_2->pSegs[VAR_3].pBuffer[VAR_4];
  tFilePage * VAR_7 = (tFilePage *)FUNC_2(1, VAR_6->nElemSize * VAR_6->numOfAllElems + sizeof(tFilePage));
  int32_t VAR_8 = VAR_5->pSchema->maxCapacity;
  VAR_5->pSchema->maxCapacity = VAR_6->numOfAllElems;

  if (!FUNC_9(VAR_6)) {
    VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4);
    FUNC_1(VAR_6->numOfAllElems > 0);


    tFilePage *VAR_9 = (tFilePage *)FUNC_2(1, VAR_6->nPageSize);

    for (int32_t VAR_10 = 0; VAR_10 < VAR_6->fileMeta.flushoutData.nLength; ++VAR_10) {
      tFlushoutInfo *VAR_11 = &VAR_6->fileMeta.flushoutData.pFlushoutInfo[VAR_10];

      int32_t VAR_12 = FUNC_4(VAR_6->dataFile, VAR_11->startPageId * VAR_6->nPageSize, VAR_0);
      FUNC_0(VAR_12);

      for (uint32_t VAR_13 = 0; VAR_13 < VAR_11->numOfPages; ++VAR_13) {
        VAR_12 = FUNC_3(VAR_9, VAR_6->nPageSize, 1, VAR_6->dataFile);
        FUNC_1(VAR_9->numOfElems > 0);

        FUNC_8(VAR_5->pSchema, VAR_7, VAR_9->data, 0, VAR_9->numOfElems, VAR_9->numOfElems);
        FUNC_5("id: %d  count: %d\n", VAR_13, VAR_7->numOfElems);
      }
    }
    FUNC_10(VAR_9);

    FUNC_1(VAR_7->numOfElems == VAR_6->fileMeta.numOfElemsInFile);
  }


  tFilePagesItem *VAR_14 = VAR_6->pHead;
  while (VAR_14 != ((void*)0)) {
    FUNC_8(VAR_5->pSchema, VAR_7, VAR_14->item.data, 0, VAR_14->item.numOfElems,
                    VAR_14->item.numOfElems);
    VAR_14 = VAR_14->pNext;
  }

  FUNC_7(VAR_5, VAR_7->numOfElems, 0, VAR_7->numOfElems - 1, VAR_7->data, VAR_1);

  VAR_5->pSchema->maxCapacity = VAR_8;
  return VAR_7;
}
