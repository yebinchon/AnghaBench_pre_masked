
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tOrderDescriptor ;
typedef int tColModel ;
typedef size_t int32_t ;
struct TYPE_8__ {int order; } ;
struct TYPE_7__ {scalar_t__ numOfGroupCols; } ;
struct TYPE_6__ {size_t numOfOutputCols; } ;
struct TYPE_9__ {scalar_t__ nAggTimeInterval; TYPE_3__ order; TYPE_2__ groupbyExpr; TYPE_1__ fieldsInfo; } ;
typedef TYPE_4__ SSqlCmd ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int * FUNC_1 (size_t*,size_t,int *,int ) ;
 int FUNC_2 (size_t*) ;

__attribute__((used)) static int32_t FUNC_3(tOrderDescriptor **VAR_3, SSqlCmd *VAR_4, tColModel *VAR_5) {
  int32_t VAR_6 = 0;
  if (VAR_4->groupbyExpr.numOfGroupCols > 0) {
    VAR_6 = VAR_4->groupbyExpr.numOfGroupCols;
  }


  if (VAR_4->nAggTimeInterval != 0) {
    VAR_6++;
  }

  int32_t *VAR_7 = (int32_t *)FUNC_0(VAR_6, sizeof(int32_t));
  if (VAR_7 == ((void*)0)) {
    return VAR_1;
  }

  if (VAR_6 > 0) {
    int32_t VAR_8 = VAR_4->fieldsInfo.numOfOutputCols - VAR_4->groupbyExpr.numOfGroupCols;


    for (int32_t VAR_9 = 0; VAR_9 < VAR_4->groupbyExpr.numOfGroupCols; ++VAR_9) {
      VAR_7[VAR_9] = VAR_8++;
    }

    if (VAR_4->nAggTimeInterval != 0) {

      VAR_7[VAR_6 - 1] = VAR_0;
    }
  }

  *VAR_3 = FUNC_1(VAR_7, VAR_6, VAR_5, VAR_4->order.order);
  FUNC_2(VAR_7);

  if (*VAR_3 == ((void*)0)) {
    return VAR_1;
  } else {
    return VAR_2;
  }
}
