
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; float* cvarValue; int * cvarStr; scalar_t__ strDef; } ;
typedef TYPE_1__ multiDef_t ;
struct TYPE_6__ {int cvar; scalar_t__ typeData; } ;
typedef TYPE_2__ itemDef_t ;
typedef int buff ;
struct TYPE_7__ {float (* getCVarValue ) (int ) ;int (* getCVarString ) (int ,char*,int) ;} ;


 TYPE_4__* VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 float FUNC_2 (int ) ;

int FUNC_3(itemDef_t *VAR_1) {
 char VAR_2[1024];
 float VAR_3 = 0;
 int VAR_4;
 multiDef_t *VAR_5 = (multiDef_t*)VAR_1->typeData;
 if (VAR_5) {
  if (VAR_5->strDef) {
     VAR_0->getCVarString(VAR_1->cvar, VAR_2, sizeof(VAR_2));
  } else {
   VAR_3 = VAR_0->getCVarValue(VAR_1->cvar);
  }
  for (VAR_4 = 0; VAR_4 < VAR_5->count; VAR_4++) {
   if (VAR_5->strDef) {
    if (FUNC_0(VAR_2, VAR_5->cvarStr[VAR_4]) == 0) {
     return VAR_4;
    }
   } else {
     if (VAR_5->cvarValue[VAR_4] == VAR_3) {
      return VAR_4;
     }
    }
   }
 }
 return 0;
}
