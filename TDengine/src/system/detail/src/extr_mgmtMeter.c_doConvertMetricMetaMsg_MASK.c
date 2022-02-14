
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
typedef size_t int16_t ;
struct TYPE_6__ {size_t orderIndex; size_t orderType; size_t numOfTags; size_t numOfGroupCols; int condLen; int cond; size_t elemLen; int tableCond; int tableCondLen; size_t rel; size_t* tagCols; int groupbyTagColumnList; } ;
struct TYPE_5__ {int* metaElem; } ;
typedef TYPE_1__ SMetricMetaMsg ;
typedef TYPE_2__ SMetricMetaElemMsg ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;

__attribute__((used)) static SMetricMetaElemMsg *FUNC_2(SMetricMetaMsg *VAR_0, int32_t VAR_1) {
  SMetricMetaElemMsg *VAR_2 = (SMetricMetaElemMsg *)((char *)VAR_0 + VAR_0->metaElem[VAR_1]);

  VAR_2->orderIndex = FUNC_1(VAR_2->orderIndex);
  VAR_2->orderType = FUNC_1(VAR_2->orderType);
  VAR_2->numOfTags = FUNC_1(VAR_2->numOfTags);

  VAR_2->numOfGroupCols = FUNC_1(VAR_2->numOfGroupCols);
  VAR_2->condLen = FUNC_0(VAR_2->condLen);
  VAR_2->cond = FUNC_0(VAR_2->cond);

  VAR_2->elemLen = FUNC_1(VAR_2->elemLen);

  VAR_2->tableCond = FUNC_0(VAR_2->tableCond);
  VAR_2->tableCondLen = FUNC_0(VAR_2->tableCondLen);

  VAR_2->rel = FUNC_1(VAR_2->rel);

  for (int32_t VAR_3 = 0; VAR_3 < VAR_2->numOfTags; ++VAR_3) {
    VAR_2->tagCols[VAR_3] = FUNC_1(VAR_2->tagCols[VAR_3]);
  }

  VAR_2->groupbyTagColumnList = FUNC_0(VAR_2->groupbyTagColumnList);

  int16_t *VAR_4 = (int16_t*) (((char *)VAR_0) + VAR_2->groupbyTagColumnList);
  for (int32_t VAR_5 = 0; VAR_5 < VAR_2->numOfGroupCols; ++VAR_5) {
    VAR_4[VAR_5] = FUNC_1(VAR_4[VAR_5]);
  }

  return VAR_2;
}
