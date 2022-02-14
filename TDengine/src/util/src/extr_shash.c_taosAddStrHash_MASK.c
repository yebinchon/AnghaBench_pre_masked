
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dataSize; } ;
typedef TYPE_1__ SHashObj ;


 void* FUNC_0 (void*,char*,char*,int ) ;

void *FUNC_1(void *VAR_0, char *VAR_1, char *VAR_2) {
  if (VAR_1 == ((void*)0) || VAR_1[0] == 0) return ((void*)0);

  SHashObj *VAR_3 = (SHashObj *)VAR_0;
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->dataSize);
}
