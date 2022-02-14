
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audmgr {scalar_t__ state; int * ept; int * task; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,struct audmgr*,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct audmgr *VAR_6)
{
 int VAR_7;

 if (VAR_6->state != VAR_3)
  return 0;

 VAR_6->ept = FUNC_5(VAR_0,
    VAR_1,
    VAR_2);

 FUNC_2(&VAR_6->wait);

 if (FUNC_0(VAR_6->ept)) {
  VAR_7 = FUNC_1(VAR_6->ept);
  VAR_6->ept = ((void*)0);
  FUNC_6("audmgr: failed to connect to audmgr svc\n");
  return VAR_7;
 }

 VAR_6->task = FUNC_3(VAR_5, VAR_6, "audmgr_rpc");
 if (FUNC_0(VAR_6->task)) {
  VAR_7 = FUNC_1(VAR_6->task);
  VAR_6->task = ((void*)0);
  FUNC_4(VAR_6->ept);
  VAR_6->ept = ((void*)0);
  return VAR_7;
 }

 VAR_6->state = VAR_4;
 return 0;
}
