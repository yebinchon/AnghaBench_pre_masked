
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_13__ {scalar_t__ val; scalar_t__ num; } ;
struct TYPE_12__ {int numOfEntries; scalar_t__ min; scalar_t__ max; TYPE_2__* elems; scalar_t__ numOfElems; } ;
typedef TYPE_1__ SHistogramInfo ;
typedef TYPE_2__ SHistBin ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,size_t*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_1__* FUNC_4 (size_t) ;

SHistogramInfo* FUNC_5(SHistogramInfo* VAR_1, SHistogramInfo* VAR_2, int32_t VAR_3) {
  SHistogramInfo* VAR_4 = FUNC_4(VAR_3);


  if (VAR_1->numOfEntries > VAR_0 || VAR_2->numOfEntries > VAR_0) {
    return VAR_4;
  }

  SHistBin* VAR_5 = FUNC_0(1, sizeof(SHistBin) * (VAR_1->numOfEntries + VAR_2->numOfEntries));
  int32_t VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

  while (VAR_6 < VAR_1->numOfEntries && VAR_7 < VAR_2->numOfEntries) {
    if (VAR_1->elems[VAR_6].val < VAR_2->elems[VAR_7].val) {
      VAR_5[VAR_8++] = VAR_1->elems[VAR_6++];
    } else if (VAR_1->elems[VAR_6].val > VAR_2->elems[VAR_7].val) {
      VAR_5[VAR_8++] = VAR_2->elems[VAR_7++];
    } else {
      VAR_5[VAR_8] = VAR_1->elems[VAR_6++];
      VAR_5[VAR_8++].num += VAR_2->elems[VAR_7++].num;
    }
  }

  if (VAR_6 < VAR_1->numOfEntries) {
    int32_t VAR_9 = VAR_1->numOfEntries - VAR_6;
    FUNC_3(&VAR_5[VAR_8], &VAR_1->elems[VAR_6], sizeof(SHistBin) * VAR_9);
    VAR_8 += VAR_9;
  }

  if (VAR_7 < VAR_2->numOfEntries) {
    int32_t VAR_10 = VAR_2->numOfEntries - VAR_7;
    FUNC_3(&VAR_5[VAR_8], &VAR_2->elems[VAR_7], sizeof(SHistBin) * VAR_10);
    VAR_8 += VAR_10;
  }


  VAR_4->numOfElems = VAR_1->numOfElems + VAR_2->numOfElems;
  VAR_4->min = (VAR_1->min < VAR_2->min) ? VAR_1->min : VAR_2->min;
  VAR_4->max = (VAR_1->max > VAR_2->max) ? VAR_1->max : VAR_2->max;

  while (VAR_8 > VAR_3) {
    FUNC_2(VAR_5, &VAR_8);
  }

  VAR_4->numOfEntries = VAR_8;
  FUNC_3(VAR_4->elems, VAR_5, sizeof(SHistBin) * VAR_8);

  FUNC_1(VAR_5);
  return VAR_4;
}
