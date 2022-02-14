
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t num; int ** pRes; } ;
typedef TYPE_1__ tQueryResultset ;
typedef size_t int32_t ;
struct TYPE_6__ {int bytes; int type; int member_0; } ;
typedef int STabObj ;
typedef TYPE_2__ SSchema ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int ,int ) ;
 char* FUNC_1 (int *,size_t,TYPE_2__*) ;

__attribute__((used)) static int32_t FUNC_2(tQueryResultset* VAR_2, int32_t VAR_3, int32_t VAR_4) {
  SSchema VAR_5 = {0};

  for (int32_t VAR_6 = 1; VAR_6 < VAR_2[VAR_3].num; ++VAR_6) {
    STabObj* VAR_7 = VAR_2[VAR_3].pRes[VAR_6 - 1];
    STabObj* VAR_8 = VAR_2[VAR_3].pRes[VAR_6];

    char* VAR_9 = FUNC_1(VAR_7, VAR_4, &VAR_5);
    char* VAR_10 = FUNC_1(VAR_8, VAR_4, ((void*)0));

    if (FUNC_0(VAR_9, VAR_10, VAR_5.type, VAR_5.bytes) == 0) {
      return VAR_0;
    }
  }

  return VAR_1;
}
