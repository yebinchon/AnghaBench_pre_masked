
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {char* aliasName; } ;
typedef TYPE_1__ tSQLExprItem ;
typedef int int32_t ;
struct TYPE_20__ {TYPE_4__* pMeterMeta; } ;
struct TYPE_19__ {scalar_t__ columnIndex; int tableIndex; } ;
struct TYPE_18__ {int num; TYPE_6__* ids; int member_0; } ;
struct TYPE_17__ {scalar_t__ numOfColumns; } ;
struct TYPE_16__ {char* name; } ;
struct TYPE_15__ {int resType; int resBytes; } ;
typedef TYPE_2__ SSqlExpr ;
typedef int SSqlCmd ;
typedef TYPE_3__ SSchema ;
typedef TYPE_4__ SMeterMeta ;
typedef TYPE_5__ SColumnList ;
typedef TYPE_6__ SColumnIndex ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (int *,int ,TYPE_5__*,int ,int ,char*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,scalar_t__) ;
 TYPE_7__* FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(SSqlCmd* VAR_1, int32_t VAR_2, SColumnIndex* VAR_3, tSQLExprItem* VAR_4) {
  SSqlExpr* VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3->columnIndex, VAR_3->tableIndex);

  SMeterMeta* VAR_6 = FUNC_3(VAR_1, VAR_3->tableIndex)->pMeterMeta;

  SSchema* VAR_7 = FUNC_2(VAR_6, VAR_3->columnIndex);

  char* VAR_8 = (VAR_4->aliasName == ((void*)0)) ? VAR_7->name : VAR_4->aliasName;

  SColumnList VAR_9 = {0};
  VAR_9.num = 1;
  VAR_9.ids[0] = *VAR_3;

  if (VAR_3->columnIndex >= VAR_6->numOfColumns || VAR_3->columnIndex == VAR_0) {
    VAR_9.num = 0;
  }

  FUNC_1(VAR_1, VAR_2, &VAR_9, VAR_5->resBytes, VAR_5->resType, VAR_8);
}
