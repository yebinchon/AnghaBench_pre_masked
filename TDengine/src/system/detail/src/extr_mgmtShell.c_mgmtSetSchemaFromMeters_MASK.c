
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {void* colId; void* bytes; int name; int type; } ;
struct TYPE_5__ {scalar_t__ schema; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SSchema ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(SSchema *VAR_0, STabObj *VAR_1, uint32_t VAR_2) {
  SSchema *VAR_3 = (SSchema *)(VAR_1->schema);
  for (int VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    VAR_0->type = VAR_3[VAR_4].type;
    FUNC_1(VAR_0->name, VAR_3[VAR_4].name);
    VAR_0->bytes = FUNC_0(VAR_3[VAR_4].bytes);
    VAR_0->colId = FUNC_0(VAR_3[VAR_4].colId);
    VAR_0++;
  }
}
