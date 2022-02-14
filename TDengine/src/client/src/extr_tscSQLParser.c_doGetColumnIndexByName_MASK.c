
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_14__ {scalar_t__ columnIndex; scalar_t__ tableIndex; } ;
struct TYPE_13__ {int n; int z; } ;
struct TYPE_12__ {scalar_t__ numOfTables; } ;
typedef TYPE_1__ SSqlCmd ;
typedef TYPE_2__ SSQLToken ;
typedef TYPE_3__ SColumnIndex ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

int32_t FUNC_5(SSQLToken* VAR_6, SSqlCmd* VAR_7, SColumnIndex* VAR_8) {
  const char* VAR_9 = "ambiguous column name";
  const char* VAR_10 = "invalid column name";

  if (FUNC_2(VAR_6)) {
    VAR_8->columnIndex = VAR_5;
  } else if (FUNC_4(VAR_6->z, VAR_1, VAR_6->n) == 0) {
    VAR_8->columnIndex = VAR_2;
  } else {

    if (VAR_8->tableIndex == VAR_0) {
      for (int16_t VAR_11 = 0; VAR_11 < VAR_7->numOfTables; ++VAR_11) {
        int16_t VAR_12 = FUNC_1(VAR_7, VAR_11, VAR_6);

        if (VAR_12 != VAR_0) {
          if (VAR_8->columnIndex != VAR_0) {
            FUNC_3(VAR_7, VAR_9);
            return VAR_3;
          } else {
            VAR_8->tableIndex = VAR_11;
            VAR_8->columnIndex = VAR_12;
          }
        }
      }
    } else {
      int16_t VAR_13 = FUNC_1(VAR_7, VAR_8->tableIndex, VAR_6);
      if (VAR_13 != VAR_0) {
        VAR_8->columnIndex = VAR_13;
      }
    }

    if (VAR_8->columnIndex == VAR_0) {
      FUNC_3(VAR_7, VAR_10);
      return VAR_3;
    }
  }

  if (FUNC_0(*VAR_8)) {
    return VAR_4;
  } else {
    return VAR_3;
  }
}
