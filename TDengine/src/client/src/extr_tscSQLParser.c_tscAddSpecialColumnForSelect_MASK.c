
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_16__ {int tableIndex; int columnIndex; } ;
struct TYPE_15__ {scalar_t__ num; } ;
struct TYPE_14__ {int name; int type; int bytes; } ;
struct TYPE_12__ {int flag; } ;
struct TYPE_13__ {TYPE_1__ colInfo; } ;
typedef TYPE_2__ SSqlExpr ;
typedef int SSqlCmd ;
typedef TYPE_3__ SSchema ;
typedef TYPE_4__ SColumnList ;
typedef TYPE_5__ SColumnIndex ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_4__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *,int ,TYPE_4__*,int ,int ,int ) ;
 TYPE_2__* FUNC_4 (int *,int ,int ,TYPE_5__*,int ,int ,int ) ;

void FUNC_5(SSqlCmd* VAR_0, int32_t VAR_1, int16_t VAR_2, SColumnIndex* VAR_3,
                                  SSchema* VAR_4, int16_t VAR_5) {
  SSqlExpr* VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4->type, VAR_4->bytes,
                                     VAR_4->bytes);

  SColumnList VAR_7 = FUNC_2(1, VAR_3->tableIndex, VAR_3->columnIndex);
  if (FUNC_0(VAR_5)) {
    VAR_7.num = 0;
  }

  FUNC_3(VAR_0, VAR_1, &VAR_7, VAR_4->bytes, VAR_4->type, VAR_4->name);

  VAR_6->colInfo.flag = VAR_5;
  if (FUNC_0(VAR_5)) {
    FUNC_1(VAR_0, VAR_3->columnIndex, VAR_3->tableIndex);
  }
}
