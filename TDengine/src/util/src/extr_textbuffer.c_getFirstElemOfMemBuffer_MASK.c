
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {TYPE_8__** pBuffer; } ;
typedef TYPE_5__ tMemBucketSegment ;
struct TYPE_17__ {scalar_t__ numOfPages; int startPageId; } ;
typedef TYPE_6__ tFlushoutInfo ;
struct TYPE_18__ {char* data; } ;
typedef TYPE_7__ tFilePage ;
struct TYPE_14__ {TYPE_6__* pFlushoutInfo; } ;
struct TYPE_15__ {scalar_t__ nFileSize; TYPE_3__ flushoutData; } ;
struct TYPE_19__ {scalar_t__ numOfElemsInBuffer; int nPageSize; int dataFile; TYPE_4__ fileMeta; TYPE_2__* pHead; } ;
typedef TYPE_8__ tExtMemBuffer ;
typedef size_t int32_t ;
struct TYPE_12__ {char* data; } ;
struct TYPE_13__ {TYPE_1__ item; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (TYPE_7__*,int,int,int ) ;
 int FUNC_3 (int ,int,int ) ;

char *FUNC_4(tMemBucketSegment *VAR_1, int32_t VAR_2, tFilePage *VAR_3) {
  tExtMemBuffer *VAR_4 = VAR_1->pBuffer[VAR_2];
  char * VAR_5 = ((void*)0);

  if (VAR_1->pBuffer[VAR_2]->numOfElemsInBuffer != 0) {
    VAR_5 = VAR_1->pBuffer[VAR_2]->pHead->item.data;
  } else {



    tFlushoutInfo *VAR_6 = &VAR_4->fileMeta.flushoutData.pFlushoutInfo[0];
    FUNC_1(VAR_6->numOfPages == VAR_4->fileMeta.nFileSize);

    FUNC_3(VAR_4->dataFile, VAR_6->startPageId * VAR_4->nPageSize, VAR_0);
    size_t VAR_7 = FUNC_2(VAR_3, VAR_4->nPageSize, 1, VAR_4->dataFile);
    FUNC_0(VAR_7);
    VAR_5 = VAR_3->data;
  }
  return VAR_5;
}
