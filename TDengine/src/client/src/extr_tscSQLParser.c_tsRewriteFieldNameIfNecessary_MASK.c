
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_9__ {char* name; } ;
struct TYPE_7__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_8__ {TYPE_1__ fieldsInfo; } ;
typedef TYPE_2__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,scalar_t__) ;

int32_t FUNC_4(SSqlCmd* VAR_3) {
  const char VAR_4[] = {'(', ')', '*', ',', '.', '/', '\\', '+', '-', '%', ' '};

  for (int32_t VAR_5 = 0; VAR_5 < VAR_3->fieldsInfo.numOfOutputCols; ++VAR_5) {
    char* VAR_6 = FUNC_3(VAR_3, VAR_5)->name;
    for (int32_t VAR_7 = 0; VAR_7 < VAR_2 && VAR_6[VAR_7] != 0; ++VAR_7) {
      for (int32_t VAR_8 = 0; VAR_8 < FUNC_2(VAR_4); ++VAR_8) {
        if (VAR_6[VAR_7] == VAR_4[VAR_8]) {
          VAR_6[VAR_7] = '_';
          break;
        }
      }
    }

    VAR_6[VAR_2 - 1] = 0;
  }


  for (int32_t VAR_9 = 0; VAR_9 < VAR_3->fieldsInfo.numOfOutputCols; ++VAR_9) {
    char* VAR_10 = FUNC_3(VAR_3, VAR_9)->name;
    for (int32_t VAR_11 = VAR_9 + 1; VAR_11 < VAR_3->fieldsInfo.numOfOutputCols; ++VAR_11) {
      if (FUNC_1(VAR_10, FUNC_3(VAR_3, VAR_11)->name, VAR_2) == 0) {
        const char* VAR_12 = "duplicated column name in new table";
        FUNC_0(VAR_3, VAR_12);
        return VAR_0;
      }
    }
  }

  return VAR_1;
}
