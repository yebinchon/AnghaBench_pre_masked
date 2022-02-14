
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t numOfSlots; TYPE_1__* pBoundingEntries; int * pBuffer; } ;
typedef TYPE_2__ tMemBucketSegment ;
struct TYPE_7__ {size_t numOfSegs; int dataType; TYPE_2__* pSegs; } ;
typedef TYPE_3__ tMemBucket ;
typedef size_t int32_t ;
struct TYPE_5__ {double iMinVal; double iMaxVal; double dMinVal; double dMaxVal; scalar_t__ i64MaxVal; scalar_t__ i64MinVal; } ;


 double VAR_0 ;







__attribute__((used)) static void FUNC_0(tMemBucket *VAR_1, double *VAR_2, double *VAR_3) {
  *VAR_3 = VAR_0;
  *VAR_2 = -VAR_0;

  for (int32_t VAR_4 = 0; VAR_4 < VAR_1->numOfSegs; ++VAR_4) {
    tMemBucketSegment *VAR_5 = &VAR_1->pSegs[VAR_4];
    if (VAR_5->pBuffer == ((void*)0)) {
      continue;
    }
    switch (VAR_1->dataType) {
      case 130:
      case 129:
      case 128: {
        for (int32_t VAR_6 = 0; VAR_6 < VAR_5->numOfSlots; ++VAR_6) {
          double VAR_7 = VAR_5->pBoundingEntries[VAR_6].iMinVal;
          double VAR_8 = VAR_5->pBoundingEntries[VAR_6].iMaxVal;

          if (*VAR_3 > VAR_7) {
            *VAR_3 = VAR_7;
          }
          if (*VAR_2 < VAR_8) {
            *VAR_2 = VAR_8;
          }
        }
        break;
      }
      case 132:
      case 131: {
        for (int32_t VAR_9 = 0; VAR_9 < VAR_5->numOfSlots; ++VAR_9) {
          double VAR_10 = VAR_5->pBoundingEntries[VAR_9].dMinVal;
          double VAR_11 = VAR_5->pBoundingEntries[VAR_9].dMaxVal;

          if (*VAR_3 > VAR_10) {
            *VAR_3 = VAR_10;
          }
          if (*VAR_2 < VAR_11) {
            *VAR_2 = VAR_11;
          }
        }
        break;
      }
      case 133: {
        for (int32_t VAR_12 = 0; VAR_12 < VAR_5->numOfSlots; ++VAR_12) {
          double VAR_13 = (double)VAR_5->pBoundingEntries[VAR_12].i64MinVal;
          double VAR_14 = (double)VAR_5->pBoundingEntries[VAR_12].i64MaxVal;

          if (*VAR_3 > VAR_13) {
            *VAR_3 = VAR_13;
          }
          if (*VAR_2 < VAR_14) {
            *VAR_2 = VAR_14;
          }
        }
        break;
      }
    }
  }
}
