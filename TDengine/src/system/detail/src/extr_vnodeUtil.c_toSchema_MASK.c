
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {int colId; int bytes; int type; } ;
struct TYPE_9__ {scalar_t__ colNameList; } ;
struct TYPE_8__ {int name; int colId; int bytes; int type; } ;
typedef TYPE_1__ SSchema ;
typedef TYPE_2__ SQueryMeterMsg ;
typedef TYPE_3__ SColumnInfo ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static SSchema* FUNC_3(SQueryMeterMsg* VAR_0, SColumnInfo* VAR_1, int32_t VAR_2) {
  char* VAR_3 = (char*)VAR_0->colNameList;
  char* VAR_4 = VAR_3;

  SSchema* VAR_5 = FUNC_0(1, sizeof(SSchema) * VAR_2);
  for (int32_t VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
    VAR_5[VAR_6].type = VAR_1[VAR_6].type;
    VAR_5[VAR_6].bytes = VAR_1[VAR_6].bytes;
    VAR_5[VAR_6].colId = VAR_1[VAR_6].colId;

    VAR_4 = FUNC_2(VAR_3, ",");
    FUNC_1(VAR_5[VAR_6].name, VAR_3, VAR_4 - VAR_3);
    VAR_3 = VAR_4 + 1;
  }

  return VAR_5;
}
