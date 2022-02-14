
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* updateEnd; } ;
typedef TYPE_1__ SUserObj ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void *FUNC_3(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  SUserObj *VAR_4 = (SUserObj *)FUNC_0(sizeof(SUserObj));
  if (VAR_4 == ((void*)0)) return ((void*)0);
  FUNC_2(VAR_4, 0, sizeof(SUserObj));

  int VAR_5 = VAR_4->updateEnd - (char *)VAR_4;
  FUNC_1(VAR_4, VAR_1, VAR_5);
  return (void *)VAR_4;
}
