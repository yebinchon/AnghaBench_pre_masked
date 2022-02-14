
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * msg; void* thandle; int * ahandle; int fp; } ;
typedef int SSqlObj ;
typedef TYPE_1__ SSchedMsg ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int *) ;

void FUNC_2(SSqlObj *VAR_2) {
  FUNC_1("%p sqlObj put in queue to async free", VAR_2);

  SSchedMsg VAR_3;
  VAR_3.fp = VAR_0;
  VAR_3.ahandle = VAR_2;
  VAR_3.thandle = (void *)1;
  VAR_3.msg = ((void*)0);
  FUNC_0(VAR_1, &VAR_3);
}
