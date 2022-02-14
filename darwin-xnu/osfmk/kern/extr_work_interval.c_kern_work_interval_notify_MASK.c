
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int task_t ;
struct work_interval {scalar_t__ wi_id; scalar_t__ wi_creator_uniqueid; scalar_t__ wi_creator_pidversion; } ;
struct kern_work_interval_args {scalar_t__ work_interval_id; int urgency; } ;
typedef int spl_t ;
typedef int kern_return_t ;
struct TYPE_6__ {struct work_interval* th_work_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,struct kern_work_interval_args*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int *,int *) ;

kern_return_t
FUNC_9(thread_t VAR_2, struct kern_work_interval_args* VAR_3)
{
 FUNC_0(VAR_2 == FUNC_2());
 FUNC_0(VAR_3->work_interval_id != 0);

 struct work_interval *VAR_4 = VAR_2->th_work_interval;

 if (VAR_4 == ((void*)0) ||
     VAR_4->wi_id != VAR_3->work_interval_id) {

  return (VAR_0);
 }

 task_t VAR_5 = FUNC_1();

 if (VAR_4->wi_creator_uniqueid != FUNC_3(VAR_5) ||
     VAR_4->wi_creator_pidversion != FUNC_4(VAR_5)) {

  return (VAR_0);
 }

 spl_t VAR_6 = FUNC_6();


 uint64_t VAR_7, VAR_8;
 VAR_3->urgency = FUNC_8(VAR_2, &VAR_7, &VAR_8);

 FUNC_7(VAR_6);


 FUNC_5(VAR_2, VAR_3);

 return (VAR_1);
}
