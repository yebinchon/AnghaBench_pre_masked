
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_dev {scalar_t__ state; int thread_notifier; int atomic_bitflags; int lock; int * thread_task; int running; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct fsg_dev*) ;
 scalar_t__ FUNC_3 (struct fsg_dev*) ;
 scalar_t__ FUNC_4 (struct fsg_dev*) ;
 int VAR_10 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct fsg_dev*) ;
 int FUNC_7 (struct fsg_dev*) ;
 scalar_t__ FUNC_8 (struct fsg_dev*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct fsg_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(void *VAR_11)
{
 struct fsg_dev *VAR_12 = VAR_11;



 FUNC_0(VAR_5);
 FUNC_0(VAR_7);
 FUNC_0(VAR_6);
 FUNC_0(VAR_8);


 FUNC_9();




 FUNC_10(FUNC_5());


 while (VAR_12->state != VAR_3) {
  if (FUNC_3(VAR_12) || FUNC_11(VAR_9)) {
   FUNC_7(VAR_12);
   continue;
  }

  if (!VAR_12->running) {
   FUNC_12(VAR_12);
   continue;
  }

  if (FUNC_6(VAR_12))
   continue;

  FUNC_13(&VAR_12->lock);
  if (!FUNC_3(VAR_12))
   VAR_12->state = VAR_0;
  FUNC_14(&VAR_12->lock);

  if (FUNC_2(VAR_12) || FUNC_4(VAR_12))
   continue;

  FUNC_13(&VAR_12->lock);
  if (!FUNC_3(VAR_12))
   VAR_12->state = VAR_2;
  FUNC_14(&VAR_12->lock);

  if (FUNC_8(VAR_12))
   continue;

  FUNC_13(&VAR_12->lock);
  if (!FUNC_3(VAR_12))
   VAR_12->state = VAR_1;
  FUNC_14(&VAR_12->lock);
  }

 FUNC_13(&VAR_12->lock);
 VAR_12->thread_task = ((void*)0);
 FUNC_14(&VAR_12->lock);



 if (FUNC_15(VAR_4, &VAR_12->atomic_bitflags))
  FUNC_16(&VAR_10);


 FUNC_1(&VAR_12->thread_notifier, 0);
}
