
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int killed; } ;
struct TYPE_6__ {void* ahandle; void* thandle; int * msg; int fp; int member_0; } ;
typedef TYPE_1__ SSchedMsg ;
typedef TYPE_2__ SQInfo ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(void *VAR_2) {
  SQInfo *VAR_3 = (SQInfo *)VAR_2;

  if (!FUNC_2(VAR_3)) return;

  VAR_3->killed = 1;

  FUNC_0("QInfo:%p set kill flag and add to queue, stop query ASAP", VAR_3);
  SSchedMsg VAR_4 = {0};
  VAR_4.fp = VAR_1;

  VAR_4.msg = ((void*)0);
  VAR_4.thandle = (void *)1;
  VAR_4.ahandle = VAR_2;
  FUNC_1(VAR_0, &VAR_4);
}
