
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* signature; } ;
typedef int TAOS ;
typedef TYPE_1__ STscObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char const*) ;
 int FUNC_1 (int *,char*) ;

int FUNC_2(TAOS *VAR_2, const char *VAR_3) {
  char VAR_4[64];

  STscObj *VAR_5 = (STscObj *)VAR_2;
  if (VAR_5 == ((void*)0) || VAR_5->signature != VAR_5) {
    VAR_1 = VAR_0;
    return VAR_0;
  }

  FUNC_0(VAR_4, "use %s", VAR_3);

  return FUNC_1(VAR_2, VAR_4);
}
