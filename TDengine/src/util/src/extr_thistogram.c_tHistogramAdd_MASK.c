
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_21__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {double dKey; } ;
struct TYPE_28__ {scalar_t__ pData; TYPE_3__** pBackward; struct TYPE_28__** pForward; TYPE_1__ key; } ;
typedef TYPE_4__ tSkipListNode ;
typedef int tSkipListKey ;
typedef size_t int32_t ;
struct TYPE_27__ {scalar_t__ pData; TYPE_4__** pForward; } ;
struct TYPE_33__ {TYPE_3__ pHead; } ;
struct TYPE_32__ {double val; int num; } ;
struct TYPE_31__ {double val; int index; scalar_t__ num; size_t delta; } ;
struct TYPE_30__ {int numOfEntries; size_t maxEntries; int numOfElems; int ordered; size_t maxIndex; double max; double min; TYPE_9__* pList; TYPE_5__* pLoserTree; TYPE_8__* elems; } ;
struct TYPE_29__ {size_t numOfEntries; size_t totalEntries; TYPE_2__* pNode; } ;
struct TYPE_26__ {int index; TYPE_4__* pData; } ;
struct TYPE_25__ {int nSize; } ;
typedef TYPE_5__ SLoserTreeInfo ;
typedef TYPE_6__ SHistogramInfo ;
typedef TYPE_7__ SHistBin ;


 void* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_7__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_6__*,size_t,double) ;
 int FUNC_3 (char*,...) ;
 TYPE_21__* VAR_3 ;
 TYPE_6__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,size_t) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (size_t,double*,int ) ;
 TYPE_4__* FUNC_8 (TYPE_9__*,int *) ;
 int FUNC_9 (TYPE_9__*,int) ;
 TYPE_4__* FUNC_10 (TYPE_9__*,TYPE_7__*,int *,int ) ;
 int FUNC_11 (TYPE_9__*,TYPE_4__*) ;
 size_t FUNC_12 (TYPE_8__*,int,double) ;

int32_t FUNC_13(SHistogramInfo** VAR_4, double VAR_5) {
  if (*VAR_4 == ((void*)0)) {
    *VAR_4 = FUNC_4(VAR_1);
  }
  tSkipListKey VAR_6 = FUNC_7(VAR_2, &VAR_5, VAR_3[VAR_2].nSize);
  SHistBin* VAR_7 = FUNC_1(1, sizeof(SHistBin));
  VAR_7->val = VAR_5;

  tSkipListNode* VAR_8 = FUNC_10((*VAR_4)->pList, VAR_7, &VAR_6, 0);

  SHistBin* VAR_9 = (SHistBin*)VAR_8->pData;
  VAR_9->index = -1;

  tSkipListNode* VAR_10 = ((void*)0);

  if (VAR_9->num == 0) {
    (*VAR_4)->numOfEntries += 1;
    VAR_9->num += 1;


    if (VAR_8->pForward[0] != ((void*)0)) {

      VAR_9->delta = ((SHistBin*)VAR_8->pForward[0]->pData)->val - VAR_5;

      if ((*VAR_4)->ordered) {
        int32_t VAR_11 = (*VAR_4)->maxIndex;
        SLoserTreeInfo* VAR_12 = (*VAR_4)->pLoserTree;

        (*VAR_4)->pLoserTree->pNode[VAR_11 + VAR_12->numOfEntries].pData = VAR_8;
        VAR_9->index = (*VAR_4)->pLoserTree->pNode[VAR_11 + VAR_12->numOfEntries].index;


        if ((*VAR_4)->ordered) {
          FUNC_5(VAR_12, VAR_9->index + VAR_12->numOfEntries);
        }

        tSkipListKey VAR_13 =
            FUNC_7(VAR_2, &(*VAR_4)->max, VAR_3[VAR_2].nSize);
        VAR_10 = FUNC_8((*VAR_4)->pList, &VAR_13);
      }
    } else {


      VAR_9->delta = VAR_0;
      VAR_10 = VAR_8;
    }

    if (VAR_8->pBackward[0] != &(*VAR_4)->pList->pHead) {
      SHistBin* VAR_14 = (SHistBin*)VAR_8->pBackward[0]->pData;
      VAR_14->delta = VAR_5 - VAR_14->val;

      SLoserTreeInfo* VAR_15 = (*VAR_4)->pLoserTree;
      if ((*VAR_4)->ordered) {
        FUNC_5(VAR_15, VAR_14->index + VAR_15->numOfEntries);
        FUNC_6(VAR_15);
      }
    }

    if ((*VAR_4)->numOfEntries >= (*VAR_4)->maxEntries + 1) {

      FUNC_0((*VAR_4)->pLoserTree != ((void*)0));
      if (!(*VAR_4)->ordered) {
        FUNC_9((*VAR_4)->pList, 1);

        SLoserTreeInfo* VAR_16 = (*VAR_4)->pLoserTree;
        tSkipListNode* VAR_17 = (*VAR_4)->pList->pHead.pForward[0];

        tSkipListNode* VAR_18 = VAR_17;

        FUNC_3("\n");
        while (VAR_18 != ((void*)0)) {
          FUNC_3("%f\t", ((SHistBin*)(VAR_18->pData))->delta);
          VAR_18 = VAR_18->pForward[0];
        }
        FUNC_3("\n");


        for (int32_t VAR_19 = VAR_16->numOfEntries; VAR_19 < VAR_16->totalEntries; ++VAR_19) {
          VAR_16->pNode[VAR_19].pData = VAR_17;
          VAR_16->pNode[VAR_19].index = VAR_19 - VAR_16->numOfEntries;
          SHistBin* VAR_20 = (SHistBin*)VAR_17->pData;
          VAR_20->index = VAR_16->pNode[VAR_19].index;

          VAR_17 = VAR_17->pForward[0];
        }

        VAR_10 = VAR_17;

        for (int32_t VAR_21 = 0; VAR_21 < VAR_16->numOfEntries; ++VAR_21) {
          VAR_16->pNode[VAR_21].index = -1;
        }

        FUNC_6(VAR_16);

        for (int32_t VAR_22 = VAR_16->totalEntries - 1; VAR_22 >= VAR_16->numOfEntries; VAR_22--) {
          FUNC_5(VAR_16, VAR_22);
        }

        FUNC_6(VAR_16);
        (*VAR_4)->ordered = 1;
      }

      FUNC_3("delta is:%lf\n", VAR_9->delta);

      FUNC_9((*VAR_4)->pList, 1);


      tSkipListNode* VAR_23 = (*VAR_4)->pLoserTree->pNode[0].pData;
      SHistBin* VAR_24 = (SHistBin*)VAR_23->pData;

      tSkipListNode* VAR_25 = VAR_23->pForward[0];
      SHistBin* VAR_26 = (SHistBin*)VAR_25->pData;
      FUNC_0(VAR_26->val - VAR_24->val == VAR_24->delta);

      double VAR_27 = (VAR_24->val * VAR_24->num + VAR_26->val * VAR_26->num) / (VAR_24->num + VAR_26->num);
      VAR_24->val = VAR_27;
      VAR_23->key.dKey = VAR_27;
      VAR_24->num = VAR_24->num + VAR_26->num;


      VAR_24->delta = (VAR_26->delta + VAR_26->val) - VAR_24->val;


      SHistBin* VAR_28 = (SHistBin*)VAR_23->pBackward[0]->pData;
      if (VAR_28) {
        VAR_28->delta = VAR_24->val - VAR_28->val;
      }

      SLoserTreeInfo* VAR_29 = (*VAR_4)->pLoserTree;
      if (VAR_26->index != -1) {
        (*VAR_4)->maxIndex = VAR_26->index;


        VAR_29->pNode[VAR_26->index + VAR_29->numOfEntries].pData = VAR_10;
        ((SHistBin*)VAR_10->pData)->index = VAR_26->index;
        int32_t VAR_30 = VAR_29->pNode[VAR_26->index + VAR_29->numOfEntries].index;
        FUNC_3("disappear index is:%d\n", VAR_30);
      }

      FUNC_5(VAR_29, VAR_24->index + VAR_29->numOfEntries);

      FUNC_11((*VAR_4)->pList, VAR_25);
      FUNC_9((*VAR_4)->pList, 1);

      FUNC_6((*VAR_4)->pLoserTree);
    } else {
      if (VAR_8->pForward[0] != ((void*)0)) {
        VAR_9->delta = ((SHistBin*)VAR_8->pForward[0]->pData)->val - VAR_5;
      } else {
        VAR_9->delta = VAR_0;
      }

      if (VAR_8->pBackward[0] != &(*VAR_4)->pList->pHead) {
        SHistBin* VAR_31 = (SHistBin*)VAR_8->pBackward[0]->pData;
        VAR_9->delta = VAR_5 - VAR_31->val;
      }

      FUNC_3("delta is:%9lf\n", VAR_9->delta);
    }

  } else {
    SHistBin* VAR_32 = (SHistBin*)VAR_8->pData;
    FUNC_0(VAR_32->val == VAR_5);
    VAR_32->num += 1;
  }


  if (VAR_5 > (*VAR_4)->max) {
    (*VAR_4)->max = VAR_5;
  }

  if (VAR_5 < (*VAR_4)->min) {
    (*VAR_4)->min = VAR_5;
  }

  (*VAR_4)->numOfElems += 1;
  return 0;
}
