
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_33__ {size_t numOfSlots; TYPE_8__** pBuffer; TYPE_4__* pBoundingEntries; } ;
typedef TYPE_5__ tMemBucketSegment ;
struct TYPE_29__ {int i64MinVal; scalar_t__ i64MaxVal; } ;
struct TYPE_34__ {size_t numOfSegs; int dataType; scalar_t__ maxElemsCapacity; size_t nElemSize; TYPE_5__* pSegs; scalar_t__ numOfElems; TYPE_1__ nRange; int numOfAvailPages; int pOrderDesc; } ;
typedef TYPE_6__ tMemBucket ;
struct TYPE_35__ {scalar_t__ numOfPages; int startPageId; } ;
typedef TYPE_7__ tFlushoutInfo ;
struct TYPE_30__ {TYPE_7__* pFlushoutInfo; } ;
struct TYPE_31__ {scalar_t__ nFileSize; TYPE_2__ flushoutData; } ;
struct TYPE_36__ {size_t numOfAllElems; char* data; int nPageSize; scalar_t__ numOfElemsInBuffer; int dataFilePath; int dataFile; int numOfElems; TYPE_3__ fileMeta; scalar_t__ numOfPagesInMem; } ;
typedef TYPE_8__ tFilePage ;
typedef TYPE_8__ tExtMemBuffer ;
typedef double int8_t ;
typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
typedef double int16_t ;
struct TYPE_32__ {double iMaxVal; double dMaxVal; int i64MinVal; scalar_t__ i64MaxVal; } ;
struct TYPE_28__ {double iMinVal; double dMinVal; scalar_t__ i64MinVal; } ;
typedef TYPE_10__ MinMaxEntry ;


 int VAR_0 ;






 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (TYPE_8__*,int,int,int ) ;
 int FUNC_4 (TYPE_8__*) ;
 size_t FUNC_5 (int ,int,int ) ;
 char* FUNC_6 (TYPE_5__*,size_t,TYPE_8__*) ;
 TYPE_10__ FUNC_7 (TYPE_6__*,size_t,size_t) ;
 scalar_t__ FUNC_8 (TYPE_6__*,size_t,size_t) ;
 TYPE_8__* FUNC_9 (TYPE_6__*,size_t,size_t,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (char*,TYPE_6__*,int ) ;
 int FUNC_12 (char*,TYPE_6__*,...) ;
 int FUNC_13 (TYPE_5__*,int) ;
 int FUNC_14 (TYPE_8__**) ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (TYPE_6__*,char*,int ) ;
 int FUNC_17 (TYPE_8__*) ;
 scalar_t__ FUNC_18 (int ) ;

double FUNC_19(tMemBucket *VAR_1, int32_t VAR_2, double VAR_3) {
  int32_t VAR_4 = 0;

  for (int32_t VAR_5 = 0; VAR_5 < VAR_1->numOfSegs; ++VAR_5) {
    tMemBucketSegment *VAR_6 = &VAR_1->pSegs[VAR_5];
    for (int32_t VAR_7 = 0; VAR_7 < VAR_6->numOfSlots; ++VAR_7) {
      if (VAR_6->pBuffer == ((void*)0) || VAR_6->pBuffer[VAR_7] == ((void*)0)) {
        continue;
      }

      if (VAR_4 < (VAR_2 + 1) && VAR_4 + VAR_6->pBuffer[VAR_7]->numOfAllElems >= (VAR_2 + 1)) {
        if (VAR_6->pBuffer[VAR_7]->numOfAllElems + VAR_4 == (VAR_2 + 1)) {





          MinMaxEntry VAR_8 = FUNC_7(VAR_1, VAR_5, VAR_7);

          double VAR_9 = 0;
          double VAR_10 = 0;
          switch (VAR_1->dataType) {
            case 130:
            case 129:
            case 128: {
              VAR_9 = VAR_6->pBoundingEntries[VAR_7].iMaxVal;
              VAR_10 = VAR_8.iMinVal;
              break;
            };
            case 131:
            case 132: {
              VAR_9 = VAR_6->pBoundingEntries[VAR_7].dMaxVal;
              VAR_10 = VAR_8.dMinVal;
              break;
            };
            case 133: {
              VAR_9 = (double)VAR_6->pBoundingEntries[VAR_7].i64MaxVal;
              VAR_10 = (double)VAR_8.i64MinVal;
              break;
            }
          };

          FUNC_1(VAR_10 > VAR_9);

          double VAR_11 = (1 - VAR_3) * VAR_9 + VAR_3 * VAR_10;
          return VAR_11;
        }
        if (VAR_6->pBuffer[VAR_7]->numOfAllElems <= VAR_1->maxElemsCapacity) {

          tFilePage *VAR_12 = FUNC_9(VAR_1, VAR_5, VAR_7, VAR_1->pOrderDesc);
          int32_t VAR_13 = VAR_2 - VAR_4;

          char * VAR_14 = VAR_12->data + VAR_1->nElemSize * VAR_13;
          char * VAR_15 = VAR_14 + VAR_1->nElemSize;
          double VAR_16, VAR_17;
          switch (VAR_1->dataType) {
            case 129: {
              VAR_16 = *(int16_t *)VAR_14;
              VAR_17 = *(int16_t *)VAR_15;
              break;
            }
            case 128: {
              VAR_16 = *(int8_t *)VAR_14;
              VAR_17 = *(int8_t *)VAR_15;
              break;
            }
            case 130: {
              VAR_16 = *(int32_t *)VAR_14;
              VAR_17 = *(int32_t *)VAR_15;
              break;
            };
            case 131: {
              VAR_16 = *(float *)VAR_14;
              VAR_17 = *(float *)VAR_15;
              break;
            }
            case 132: {
              VAR_16 = *(double *)VAR_14;
              VAR_17 = *(double *)VAR_15;
              break;
            }
            case 133: {
              VAR_16 = (double)*(int64_t *)VAR_14;
              VAR_17 = (double)*(int64_t *)VAR_15;
              break;
            }
          }
          double VAR_18 = (1 - VAR_3) * VAR_16 + VAR_3 * VAR_17;
          FUNC_17(VAR_12);

          return VAR_18;
        } else {
          if (FUNC_8(VAR_1, VAR_5, VAR_7)) {
            tExtMemBuffer *VAR_19 = VAR_6->pBuffer[VAR_7];

            tFilePage *VAR_20 = (tFilePage *)FUNC_10(VAR_19->nPageSize);

            char *VAR_21 = FUNC_6(VAR_6, VAR_7, VAR_20);

            double VAR_22 = 0.0;

            switch (VAR_1->dataType) {
              case 129: {
                VAR_22 = *(int16_t *)VAR_21;
                break;
              }
              case 128: {
                VAR_22 = *(int8_t *)VAR_21;
                break;
              }
              case 130: {
                VAR_22 = *(int32_t *)VAR_21;
                break;
              };
              case 131: {
                VAR_22 = *(float *)VAR_21;
                break;
              }
              case 132: {
                VAR_22 = *(double *)VAR_21;
                break;
              }
              case 133: {
                VAR_22 = (double)*(int64_t *)VAR_21;
                break;
              }
            }

            FUNC_4(VAR_20);
            return VAR_22;
          }

          FUNC_12("MemBucket:%p,start second round bucketing", VAR_1);

          if (VAR_6->pBuffer[VAR_7]->numOfElemsInBuffer != 0) {
            FUNC_12("MemBucket:%p,flush %d pages to disk, clear status", VAR_1, VAR_6->pBuffer[VAR_7]->numOfPagesInMem);

            VAR_1->numOfAvailPages += VAR_6->pBuffer[VAR_7]->numOfPagesInMem;
            FUNC_15(VAR_6->pBuffer[VAR_7]);
          }

          tExtMemBuffer *VAR_23 = VAR_6->pBuffer[VAR_7];
          VAR_6->pBuffer[VAR_7] = ((void*)0);


          for (int32_t VAR_24 = 0; VAR_24 < VAR_1->numOfSegs; ++VAR_24) {
            tMemBucketSegment *VAR_25 = &VAR_1->pSegs[VAR_24];
            for (int32_t VAR_26 = 0; VAR_26 < VAR_25->numOfSlots; ++VAR_26) {
              if (VAR_25->pBuffer && VAR_25->pBuffer[VAR_26]) {
                FUNC_14(&VAR_25->pBuffer[VAR_26]);
              }
            }
          }

          VAR_1->nRange.i64MaxVal = VAR_6->pBoundingEntries->i64MaxVal;
          VAR_1->nRange.i64MinVal = VAR_6->pBoundingEntries->i64MinVal;
          VAR_1->numOfElems = 0;

          for (int32_t VAR_27 = 0; VAR_27 < VAR_1->numOfSegs; ++VAR_27) {
            tMemBucketSegment *VAR_28 = &VAR_1->pSegs[VAR_27];
            for (int32_t VAR_29 = 0; VAR_29 < VAR_28->numOfSlots; ++VAR_29) {
              if (VAR_28->pBoundingEntries) {
                FUNC_13(VAR_28, VAR_1->dataType);
              }
            }
          }

          tFilePage *VAR_30 = (tFilePage *)FUNC_10(VAR_23->nPageSize);

          tFlushoutInfo *VAR_31 = &VAR_23->fileMeta.flushoutData.pFlushoutInfo[0];
          FUNC_1(VAR_31->numOfPages == VAR_23->fileMeta.nFileSize);

          int32_t VAR_32 = FUNC_5(VAR_23->dataFile, VAR_31->startPageId * VAR_23->nPageSize, VAR_0);
          FUNC_0(VAR_32);

          for (uint32_t VAR_33 = 0; VAR_33 < VAR_31->numOfPages; ++VAR_33) {
            VAR_32 = FUNC_3(VAR_30, VAR_23->nPageSize, 1, VAR_23->dataFile);
            FUNC_16(VAR_1, VAR_30->data, VAR_30->numOfElems);
          }

          FUNC_2(VAR_23->dataFile);
          if (FUNC_18(VAR_23->dataFilePath) != 0) {
            FUNC_11("MemBucket:%p,remove tmp file %s failed", VAR_1, VAR_23->dataFilePath);
          }
          FUNC_17(VAR_23);
          FUNC_17(VAR_30);

          return FUNC_19(VAR_1, VAR_2 - VAR_4, VAR_3);
        }
      } else {
        VAR_4 += VAR_6->pBuffer[VAR_7]->numOfAllElems;
      }
    }
  }
  return 0;
}
