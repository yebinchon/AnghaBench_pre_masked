
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * msg; void* thandle; void* ahandle; int fp; } ;
typedef TYPE_1__ SSchedMsg ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(void(*VAR_2), void *VAR_3) {
  SSchedMsg VAR_4;
  VAR_4.fp = VAR_0;
  VAR_4.ahandle = VAR_2;
  VAR_4.thandle = VAR_3;
  VAR_4.msg = ((void*)0);
  FUNC_0(VAR_1, &VAR_4);
}
