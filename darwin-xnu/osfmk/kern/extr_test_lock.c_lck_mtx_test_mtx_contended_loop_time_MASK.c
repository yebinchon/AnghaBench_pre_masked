
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int thread_t ;
typedef int thread_continue_t ;
struct lck_mtx_thread_arg {int * other_thread; scalar_t__ my_locked; scalar_t__* other_locked; } ;
typedef scalar_t__ kern_return_t ;
typedef int event_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ,struct lck_mtx_thread_arg*,int *) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (int **,int ,int ) ;
 scalar_t__ FUNC_7 (int ,char*,int) ;
 int VAR_9 ;
 int FUNC_8 (char*,int,char*,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_14 ;

int
FUNC_11(
 int VAR_15,
 char *VAR_16,
 int VAR_17)
{
 thread_t VAR_18, VAR_19;
 kern_return_t VAR_20;
 int VAR_21;
 struct lck_mtx_thread_arg VAR_22[2] = {};
 VAR_12 = 0;
 VAR_14 = 0;
 VAR_8 = VAR_15;
 uint64_t VAR_23, VAR_24;

 VAR_22[0].other_thread = ((void*)0);
 VAR_22[1].other_thread = ((void*)0);

 VAR_20 = FUNC_4((thread_continue_t)VAR_13, &VAR_22[0], &VAR_18);
 if (VAR_20 != VAR_0) {
  return 0;
 }

 VAR_20 = FUNC_4((thread_continue_t)VAR_13, &VAR_22[1], &VAR_19);
 if (VAR_20 != VAR_0) {
  FUNC_10(VAR_18);
  return 0;
 }


 VAR_22[0].my_locked = 0;
 VAR_22[0].other_locked = &VAR_22[1].my_locked;

 FUNC_6(&VAR_22[0].other_thread, VAR_19, VAR_9);


 VAR_22[1].my_locked = 0;
 VAR_22[1].other_locked = &VAR_22[0].my_locked;

 FUNC_6(&VAR_22[1].other_thread, VAR_18, VAR_9);

 while (FUNC_5(&VAR_14, VAR_5) != 2) {
  FUNC_1((event_t) &VAR_14, VAR_4);
  if (FUNC_5(&VAR_14, VAR_5) != 2) {
   (void) FUNC_9(VAR_3);
  } else {
   FUNC_2(FUNC_3(), VAR_2);
  }
 }

 FUNC_10(VAR_18);
 FUNC_10(VAR_19);

 FUNC_0(VAR_6 - VAR_10, &VAR_23);
 FUNC_0(VAR_7 - VAR_11, &VAR_24);

 VAR_21 = FUNC_8(VAR_16, VAR_17, "\n");
 VAR_21 += FUNC_8(&VAR_16[VAR_21], VAR_17 - VAR_21, "total time %llu ns total run time %llu ns ", VAR_23, VAR_24);
 VAR_21 += FUNC_7(VAR_1, &VAR_16[VAR_21], VAR_17 - VAR_21);
 VAR_21 += FUNC_8(&VAR_16[VAR_21], VAR_17 - VAR_21, "\n");

 return VAR_21;
}
