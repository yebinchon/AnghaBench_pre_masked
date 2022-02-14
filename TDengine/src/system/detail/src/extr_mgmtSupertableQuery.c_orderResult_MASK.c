
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ num; int pRes; } ;
typedef TYPE_2__ tQueryResultset ;
struct TYPE_13__ {int numOfOrderedCols; int * pData; } ;
struct TYPE_15__ {struct TYPE_15__* pTagSchema; TYPE_1__ orderIdx; } ;
typedef TYPE_3__ tOrderDescriptor ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_18__ {int meterId; } ;
struct TYPE_17__ {int* metaElem; } ;
struct TYPE_16__ {int numOfColumns; int numOfTags; scalar_t__ schema; } ;
typedef TYPE_4__ STabObj ;
typedef int SSchema ;
typedef TYPE_5__ SMetricMetaMsg ;
typedef TYPE_6__ SMetricMetaElemMsg ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,TYPE_3__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(SMetricMetaMsg* VAR_2, tQueryResultset* VAR_3, int16_t VAR_4, int32_t VAR_5) {
  SMetricMetaElemMsg* VAR_6 = (SMetricMetaElemMsg*)((char*)VAR_2 + VAR_2->metaElem[VAR_5]);

  tOrderDescriptor* VAR_7 =
      (tOrderDescriptor*)FUNC_0(1, sizeof(tOrderDescriptor) + sizeof(int32_t) * 1);

  STabObj* VAR_8 = FUNC_2(VAR_6->meterId);
  SSchema* VAR_9 = (SSchema*)(VAR_8->schema + VAR_8->numOfColumns * sizeof(SSchema));

  VAR_7->pTagSchema = FUNC_3(VAR_9, VAR_8->numOfTags);

  VAR_7->orderIdx.pData[0] = VAR_4;
  VAR_7->orderIdx.numOfOrderedCols = 1;


  FUNC_4(VAR_3->pRes, VAR_0, 0, VAR_3->num - 1, VAR_7, VAR_1);

  FUNC_1(VAR_7->pTagSchema);
  FUNC_1(VAR_7);
}
