
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_16__ {scalar_t__ columnIndex; int tableIndex; } ;
struct TYPE_15__ {int num; TYPE_5__* ids; int member_0; } ;
struct TYPE_14__ {scalar_t__ numOfColumns; scalar_t__ numOfTags; } ;
struct TYPE_13__ {TYPE_3__* pMeterMeta; } ;
struct TYPE_12__ {int name; int type; int bytes; } ;
typedef int SSqlCmd ;
typedef TYPE_1__ SSchema ;
typedef TYPE_2__ SMeterMetaInfo ;
typedef TYPE_3__ SMeterMeta ;
typedef TYPE_4__ SColumnList ;
typedef TYPE_5__ SColumnIndex ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int *,scalar_t__,TYPE_4__*,int ,int ,int ) ;
 TYPE_1__* FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (int *,int ) ;

__attribute__((used)) static int32_t FUNC_5(SSqlCmd* VAR_0, SColumnIndex* VAR_1, int32_t VAR_2) {
  SMeterMetaInfo* VAR_3 = FUNC_4(VAR_0, VAR_1->tableIndex);

  int32_t VAR_4 = 0;
  SMeterMeta* VAR_5 = VAR_3->pMeterMeta;
  SSchema* VAR_6 = FUNC_3(VAR_5);

  if (FUNC_0(VAR_3)) {
    VAR_4 = VAR_5->numOfColumns + VAR_5->numOfTags;
  } else {
    VAR_4 = VAR_5->numOfColumns;
  }

  for (int32_t VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
    FUNC_1(VAR_0, VAR_2 + VAR_7, VAR_7, VAR_1->tableIndex);

    VAR_1->columnIndex = VAR_7;
    SColumnList VAR_8 = {0};
    VAR_8.ids[0] = *VAR_1;


    VAR_8.num = (VAR_7 >= VAR_5->numOfColumns) ? 0 : 1;

    FUNC_2(VAR_0, VAR_2 + VAR_7, &VAR_8, VAR_6[VAR_7].bytes, VAR_6[VAR_7].type, VAR_6[VAR_7].name);
  }

  return VAR_4;
}
