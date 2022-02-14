
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_17__ {scalar_t__ numOfPoints; scalar_t__* offset; } ;
struct TYPE_16__ {scalar_t__ colId; scalar_t__ bytes; int type; } ;
struct TYPE_15__ {scalar_t__ numOfColumns; TYPE_6__* schema; } ;
struct TYPE_14__ {scalar_t__ numOfCols; TYPE_2__* colList; } ;
struct TYPE_13__ {TYPE_4__* pQuery; } ;
struct TYPE_11__ {scalar_t__ colId; } ;
struct TYPE_12__ {scalar_t__ colIdx; TYPE_1__ data; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SMeterObj ;
typedef TYPE_6__ SColumn ;
typedef TYPE_7__ SCacheBlock ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(SQueryRuntimeEnv *VAR_0, SMeterObj *VAR_1, SCacheBlock *VAR_2,
                                    char **VAR_3, int32_t VAR_4) {
  SQuery *VAR_5 = VAR_0->pQuery;





  if (VAR_4 > VAR_2->numOfPoints) {
    VAR_4 = VAR_2->numOfPoints;
  }

  for (int32_t VAR_6 = 0; VAR_6 < VAR_5->numOfCols; ++VAR_6) {
    int32_t VAR_7 = VAR_5->colList[VAR_6].colIdx;
    int32_t VAR_8 = VAR_5->colList[VAR_6].data.colId;

    SColumn *VAR_9 = &VAR_1->schema[VAR_7];

    if (VAR_7 < 0 || VAR_7 >= VAR_1->numOfColumns || VAR_9->colId != VAR_8) {
      FUNC_1(VAR_3[VAR_6], VAR_9->type, VAR_9->bytes);
    } else {
      FUNC_0(VAR_3[VAR_6], VAR_2->offset[VAR_7] + VAR_4 * VAR_9->bytes, VAR_9->bytes);
    }
  }
}
