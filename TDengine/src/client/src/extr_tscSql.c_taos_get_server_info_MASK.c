
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* sversion; } ;
typedef int TAOS ;
typedef TYPE_1__ STscObj ;



char *FUNC_0(TAOS *VAR_0) {
  STscObj *VAR_1 = (STscObj *)VAR_0;

  if (VAR_1 == ((void*)0)) return ((void*)0);

  return VAR_1->sversion;
}
