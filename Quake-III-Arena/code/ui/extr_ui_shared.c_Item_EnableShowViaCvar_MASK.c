
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int script ;
typedef int qboolean ;
struct TYPE_4__ {int cvarFlags; scalar_t__* enableCvar; scalar_t__* cvarTest; } ;
typedef TYPE_1__ itemDef_t ;
typedef int buff ;
struct TYPE_5__ {int (* getCVarString ) (scalar_t__*,char*,int) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (char*,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 int FUNC_2 (char**,char const**) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__*,char*,int) ;

qboolean FUNC_5(itemDef_t *VAR_3, int VAR_4) {
  char VAR_5[1024], *VAR_6;
  FUNC_3(VAR_5, 0, sizeof(VAR_5));
  if (VAR_3 && VAR_3->enableCvar && *VAR_3->enableCvar && VAR_3->cvarTest && *VAR_3->cvarTest) {
  char VAR_7[1024];
   VAR_0->getCVarString(VAR_3->cvarTest, VAR_7, sizeof(VAR_7));

    FUNC_0(VAR_5, 1024, VAR_3->enableCvar);
    VAR_6 = VAR_5;
    while (1) {
      const char *VAR_8;

      if (!FUNC_2(&VAR_6, &VAR_8)) {
    return (VAR_3->cvarFlags & VAR_4) ? VAR_1 : VAR_2;
      }

      if (VAR_8[0] == ';' && VAR_8[1] == '\0') {
        continue;
      }


   if (VAR_3->cvarFlags & VAR_4) {
        if (FUNC_1(VAR_7, VAR_8) == 0) {
     return VAR_2;
    }
   } else {

        if (FUNC_1(VAR_7, VAR_8) == 0) {
     return VAR_1;
    }
   }

    }
  return (VAR_3->cvarFlags & VAR_4) ? VAR_1 : VAR_2;
  }
 return VAR_2;
}
