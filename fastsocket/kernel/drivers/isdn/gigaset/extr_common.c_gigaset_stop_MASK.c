
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int waiting; int mutex; int waitqueue; int at_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cardstate*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cardstate*,int *,int ,int *,int ,int *) ;
 int FUNC_3 (struct cardstate*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(struct cardstate *VAR_2)
{
 FUNC_4(&VAR_2->mutex);

 VAR_2->waiting = 1;

 if (!FUNC_2(VAR_2, &VAR_2->at_state, VAR_1, ((void*)0), 0, ((void*)0))) {

  goto exit;
 }

 FUNC_1(VAR_0, "scheduling STOP");
 FUNC_3(VAR_2);

 FUNC_6(VAR_2->waitqueue, !VAR_2->waiting);

 FUNC_0(VAR_2);

exit:
 FUNC_5(&VAR_2->mutex);
}
