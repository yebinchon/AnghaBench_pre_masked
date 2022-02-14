
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numOfOrderedCols; int * pData; } ;
struct TYPE_7__ {int numOfSids; int * starterPos; TYPE_1__ orderIdx; int pTagSchema; struct SMeterSidExtInfo** pSids; } ;
typedef TYPE_2__ tSidSet ;
struct SMeterSidExtInfo {int dummy; } ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_8__ {scalar_t__ flag; int colIdx; } ;
typedef int SSchema ;
typedef TYPE_3__ SColIndexEx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;

tSidSet *FUNC_2(struct SMeterSidExtInfo **VAR_1, int32_t VAR_2, SSchema *VAR_3,
                       int32_t VAR_4, SColIndexEx *VAR_5, int32_t VAR_6) {
  tSidSet *VAR_7 = (tSidSet *)FUNC_0(1, sizeof(tSidSet) + VAR_6 * sizeof(int16_t));
  if (VAR_7 == ((void*)0)) {
    return ((void*)0);
  }

  VAR_7->numOfSids = VAR_2;
  VAR_7->pSids = VAR_1;
  VAR_7->pTagSchema = FUNC_1(VAR_3, VAR_4);
  VAR_7->orderIdx.numOfOrderedCols = VAR_6;




  int32_t VAR_8 = 0;
  for(int32_t VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
    if (VAR_5[VAR_9].flag == VAR_0) {
      VAR_7->orderIdx.pData[VAR_8++] = VAR_5[VAR_9].colIdx;
    }
  }

  VAR_7->orderIdx.numOfOrderedCols = VAR_8;

  VAR_7->starterPos = ((void*)0);
  return VAR_7;
}
