
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* updateEnd; } ;
typedef TYPE_1__ SDbObj ;


 int FUNC_0 (char*,TYPE_1__*,int) ;

void *FUNC_1(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  SDbObj *VAR_4 = (SDbObj *)VAR_0;
  int VAR_5 = VAR_4->updateEnd - (char *)VAR_4;
  if (VAR_2 < VAR_5) {
    *VAR_3 = -1;
  } else {
    FUNC_0(VAR_1, VAR_4, VAR_5);
    *VAR_3 = VAR_5;
  }

  return ((void*)0);
}
