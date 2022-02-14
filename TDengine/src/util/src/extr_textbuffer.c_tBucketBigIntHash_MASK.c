
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i64MaxVal; int i64MinVal; } ;
struct TYPE_5__ {int nTotalSlots; int nSlotsOfSeg; TYPE_1__ nRange; } ;
typedef TYPE_2__ tMemBucket ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;

void FUNC_0(tMemBucket *VAR_1, void *VAR_2, int16_t *VAR_3, int16_t *VAR_4) {
  int64_t VAR_5 = *(int64_t *)VAR_2;

  if (VAR_1->nRange.i64MaxVal == VAR_0) {
    if (VAR_5 >= 0) {
      *VAR_3 = ((VAR_5 >> (64 - 9)) >> 6) + 8;
      *VAR_4 = (VAR_5 >> (64 - 9)) & 0x3F;
    } else {
      *VAR_3 = ((-VAR_5) >> (64 - 9)) >> 6;
      *VAR_4 = ((-VAR_5) >> (64 - 9)) & 0x3F;
      *VAR_3 = 7 - (*VAR_3);
    }
  } else {

    int64_t VAR_6 = VAR_1->nRange.i64MaxVal - VAR_1->nRange.i64MinVal;
    if (VAR_6 < VAR_1->nTotalSlots) {
      int32_t VAR_7 = (int32_t)(VAR_5 - VAR_1->nRange.i64MinVal);
      *VAR_3 = VAR_7 / VAR_1->nSlotsOfSeg;
      *VAR_4 = VAR_7 % VAR_1->nSlotsOfSeg;
    } else {
      double VAR_8 = (double)VAR_6 / VAR_1->nTotalSlots;
      double VAR_9 = (VAR_5 - VAR_1->nRange.i64MinVal) / VAR_8;
      if (VAR_5 == VAR_1->nRange.i64MaxVal) {
        VAR_9 -= 1;
      }

      *VAR_3 = ((int32_t)VAR_9) / VAR_1->nSlotsOfSeg;
      *VAR_4 = ((int32_t)VAR_9) % VAR_1->nSlotsOfSeg;
    }
  }
}
