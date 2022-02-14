
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1400_ts {int * ts_task; int ts_idev; scalar_t__ ts_restart; scalar_t__ irq_pending; int ts_wait; int ac97; } ;
struct task_struct {int dummy; } ;
struct sched_param {int sched_priority; } ;


 long VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 scalar_t__ FUNC_0 () ;
 long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct task_struct*,int ,struct sched_param*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ucb1400_ts*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 unsigned int FUNC_13 (struct ucb1400_ts*) ;
 unsigned int FUNC_14 (struct ucb1400_ts*) ;
 unsigned int FUNC_15 (struct ucb1400_ts*) ;
 int FUNC_16 (int ,int,long) ;

__attribute__((used)) static int FUNC_17(void *VAR_3)
{
 struct ucb1400_ts *VAR_4 = VAR_3;
 struct task_struct *VAR_5 = VAR_2;
 int VAR_6 = 0;
 struct sched_param VAR_7 = { .sched_priority = 1 };

 FUNC_3(VAR_5, VAR_1, &VAR_7);

 FUNC_4();
 while (!FUNC_0()) {
  unsigned int VAR_8, VAR_9, VAR_10;
  long VAR_11;

  VAR_4->ts_restart = 0;

  if (VAR_4->irq_pending) {
   VAR_4->irq_pending = 0;
   FUNC_7(VAR_4);
  }

  FUNC_6(VAR_4->ac97);
  VAR_8 = FUNC_14(VAR_4);
  VAR_9 = FUNC_15(VAR_4);
  VAR_10 = FUNC_13(VAR_4);
  FUNC_5(VAR_4->ac97);


  FUNC_11(VAR_4->ac97);

  FUNC_2(10);

  if (FUNC_12(VAR_4->ac97)) {
   FUNC_10(VAR_4->ac97);





   if (VAR_6) {
    FUNC_8(VAR_4->ts_idev);
    VAR_6 = 0;
   }

   VAR_11 = VAR_0;
  } else {
   VAR_6 = 1;
   FUNC_9(VAR_4->ts_idev, VAR_10, VAR_8, VAR_9);
   VAR_11 = FUNC_1(10);
  }

  FUNC_16(VAR_4->ts_wait,
   VAR_4->irq_pending || VAR_4->ts_restart ||
   FUNC_0(), VAR_11);
 }


 if (VAR_6)
  FUNC_8(VAR_4->ts_idev);

 VAR_4->ts_task = ((void*)0);
 return 0;
}
