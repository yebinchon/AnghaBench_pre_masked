
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dMinVal; double dMaxVal; } ;
struct TYPE_5__ {int nTotalSlots; int nSlotsOfSeg; TYPE_1__ nRange; } ;
typedef TYPE_2__ tMemBucket ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;

void FUNC_1(tMemBucket *VAR_1, void *VAR_2, int16_t *VAR_3, int16_t *VAR_4) {
  double VAR_5 = *(double *)VAR_2;

  if (VAR_1->nRange.dMinVal == VAR_0) {




    double VAR_6 = VAR_0 / (VAR_1->nTotalSlots >> 1);
    double VAR_7 = (VAR_5 + VAR_0) / VAR_6;
    *VAR_3 = ((int32_t)VAR_7) / VAR_1->nSlotsOfSeg;
    *VAR_4 = ((int32_t)VAR_7) % VAR_1->nSlotsOfSeg;
  } else {

    double VAR_8 = VAR_1->nRange.dMaxVal - VAR_1->nRange.dMinVal;
    if (VAR_8 < VAR_1->nTotalSlots) {
      int32_t VAR_9 = (int32_t)(VAR_5 - VAR_1->nRange.dMinVal);
      *VAR_3 = VAR_9 / VAR_1->nSlotsOfSeg;
      *VAR_4 = VAR_9 % VAR_1->nSlotsOfSeg;
    } else {
      double VAR_10 = VAR_8 / VAR_1->nTotalSlots;
      double VAR_11 = (VAR_5 - VAR_1->nRange.dMinVal) / VAR_10;
      if (VAR_5 == VAR_1->nRange.dMaxVal) {
        VAR_11 -= 1;
      }
      *VAR_3 = ((int32_t)VAR_11) / VAR_1->nSlotsOfSeg;
      *VAR_4 = ((int32_t)VAR_11) % VAR_1->nSlotsOfSeg;
    }

    if (*VAR_3 < 0 || *VAR_3 > 16 || *VAR_4 < 0 || *VAR_4 > 64) {
      FUNC_0("error in hash process. segment is: %d, slot id is: %d\n", *VAR_3, *VAR_4);
    }
  }
}
