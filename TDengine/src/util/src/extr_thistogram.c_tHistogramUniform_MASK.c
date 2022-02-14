
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pData; struct TYPE_11__** pForward; } ;
typedef TYPE_4__ tSkipListNode ;
typedef double int64_t ;
typedef int int32_t ;
struct TYPE_13__ {double num; double val; } ;
struct TYPE_12__ {double numOfElems; double min; double max; int numOfEntries; TYPE_3__* pList; TYPE_1__* elems; } ;
struct TYPE_9__ {TYPE_4__** pForward; } ;
struct TYPE_10__ {TYPE_2__ pHead; } ;
struct TYPE_8__ {double num; double val; } ;
typedef TYPE_5__ SHistogramInfo ;
typedef TYPE_6__ SHistBin ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (double) ;
 double* FUNC_2 (int) ;
 int FUNC_3 (char*,double,double,double) ;
 int FUNC_4 (int) ;

double* FUNC_5(SHistogramInfo* VAR_1, double* VAR_2, int32_t VAR_3) {
  double* VAR_4 = FUNC_2(VAR_3 * sizeof(double));

  for (int32_t VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
    double VAR_6 = VAR_2[VAR_5] * VAR_1->numOfElems;

    tSkipListNode* VAR_7 = VAR_1->pList->pHead.pForward[0];
    SHistBin* VAR_8 = (SHistBin*)VAR_7->pData;
    if (VAR_6 == 0) {
      VAR_4[VAR_5] = VAR_1->min;
      FUNC_3("i/numofSlot: %f, v:%f, %f\n", VAR_2[VAR_5], VAR_6, VAR_4[VAR_5]);
      continue;
    } else if (VAR_6 <= VAR_8->num) {
      VAR_4[VAR_5] = VAR_8->val;
      FUNC_3("i/numofSlot: %f, v:%f, %f\n", VAR_2[VAR_5], VAR_6, VAR_4[VAR_5]);
      continue;
    } else if (VAR_6 == VAR_1->numOfElems) {
      VAR_4[VAR_5] = VAR_1->max;
      FUNC_3("i/numofSlot: %f, v:%f, %f\n", VAR_2[VAR_5], VAR_6, VAR_4[VAR_5]);
      continue;
    }

    int32_t VAR_9 = 0;
    int64_t VAR_10 = 0;
    SHistBin* VAR_11 = VAR_8;

    while (VAR_9 < VAR_1->numOfEntries) {
      if (VAR_10 <= VAR_6 && VAR_10 + VAR_8->num > VAR_6) {
        break;
      }

      VAR_10 += VAR_8->num;
      VAR_11 = VAR_8;

      VAR_7 = VAR_7->pForward[0];
      VAR_8 = (SHistBin*)VAR_7->pData;

      VAR_9 += 1;
    }

    FUNC_0(VAR_10 <= VAR_6 && VAR_10 + VAR_8->num > VAR_6);

    double VAR_12 = VAR_6 - VAR_10;
    if (FUNC_1(VAR_12) < VAR_0) {


      VAR_4[VAR_5] = VAR_11->val;
    }

    double VAR_13 = VAR_11->num;
    double VAR_14 = VAR_8->num - VAR_13;

    if (VAR_14 == 0) {
      VAR_4[VAR_5] = (VAR_8->val - VAR_11->val) * VAR_12 / VAR_13 + VAR_11->val;
    } else {
      double VAR_15 = (-2 * VAR_13 + FUNC_4(4 * VAR_13 * VAR_13 - 4 * VAR_14 * (-2 * VAR_12))) / (2 * VAR_14);
      VAR_4[VAR_5] = VAR_11->val + (VAR_8->val - VAR_11->val) * VAR_15;
    }


  }

  return VAR_4;
}
