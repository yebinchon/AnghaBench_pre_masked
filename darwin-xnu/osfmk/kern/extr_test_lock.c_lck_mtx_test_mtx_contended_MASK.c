
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_continue_t ;
struct lck_mtx_thread_arg {int * other_thread; scalar_t__ my_locked; scalar_t__* other_locked; } ;
typedef scalar_t__ kern_return_t ;
typedef int event_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,struct lck_mtx_thread_arg*,int *) ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (int **,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_9 ;

kern_return_t
FUNC_10(
 int VAR_10,
 char* VAR_11,
 int VAR_12)
{
 thread_t VAR_13, VAR_14;
 kern_return_t VAR_15;
 struct lck_mtx_thread_arg VAR_16[2] = {};
 VAR_7 = 0;
 VAR_9 = 0;
 VAR_4 = VAR_10;

 FUNC_3();

 VAR_16[0].other_thread = ((void*)0);
        VAR_16[1].other_thread = ((void*)0);

 VAR_15 = FUNC_5((thread_continue_t)VAR_8, &VAR_16[0], &VAR_13);
 if (VAR_15 != VAR_0) {
  return 0;
 }

 VAR_15 = FUNC_5((thread_continue_t)VAR_8, &VAR_16[1], &VAR_14);
 if (VAR_15 != VAR_0) {
  FUNC_9(VAR_13);
  return 0;
 }


 VAR_16[0].my_locked = 0;
 VAR_16[0].other_locked = &VAR_16[1].my_locked;

 FUNC_7(&VAR_16[0].other_thread, VAR_14, VAR_6);


 VAR_16[1].my_locked = 0;
 VAR_16[1].other_locked = &VAR_16[0].my_locked;

 FUNC_7(&VAR_16[1].other_thread, VAR_13, VAR_6);

 while (FUNC_6(&VAR_9, VAR_5) != 2) {
  FUNC_0((event_t) &VAR_9, VAR_3);
  if (FUNC_6(&VAR_9, VAR_5) != 2) {
   (void) FUNC_8(VAR_2);
  } else {
   FUNC_1(FUNC_2(), VAR_1);
  }
 }

 FUNC_9(VAR_13);
 FUNC_9(VAR_14);

 return FUNC_4(VAR_11, VAR_12);
}
