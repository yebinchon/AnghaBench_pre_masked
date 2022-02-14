
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct second_thread_args {scalar_t__ iterations; scalar_t__ last_poke_time; int cpuno; double* wakeup_second_jitter_arr; double too_much; int return_semaphore; int woke_on_same_cpu; int wakeup_semaphore; int pol; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,scalar_t__,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void *
FUNC_9(void *VAR_2)
{
 struct second_thread_args *VAR_3 = (struct second_thread_args *)VAR_2;
 int VAR_4;
 uint64_t VAR_5;
 kern_return_t VAR_6;
 uint64_t VAR_7;
 int VAR_8;


 VAR_4 = FUNC_8(VAR_3->pol);
 if (VAR_4 != 0) {
  FUNC_5("Couldn't set thread policy.\n");
  FUNC_2(1);
 }





 for (VAR_5 = 0; VAR_5 < VAR_3->iterations; VAR_5++) {


  VAR_6 = FUNC_7(VAR_3->wakeup_semaphore);
  if (VAR_6 != VAR_1) {
   FUNC_1(1, "semaphore_wait %d", VAR_6);
  }

  VAR_7 = FUNC_4();
  VAR_8 = FUNC_0();
  if (VAR_7 < VAR_3->last_poke_time) {


   FUNC_1(1, "woke in past %llu (%d) < %llu (%d)", VAR_7, VAR_8, VAR_3->last_poke_time, VAR_3->cpuno);
  }

  if (VAR_8 == VAR_3->cpuno) {
   VAR_3->woke_on_same_cpu++;
  }

  VAR_3->wakeup_second_jitter_arr[VAR_5] = (double)(VAR_7 - VAR_3->last_poke_time);


  if (VAR_3->wakeup_second_jitter_arr[VAR_5] >= VAR_3->too_much) {
   FUNC_3(0xeeeee4 | VAR_0, 0, 0, 0, 0);
  }

  VAR_6 = FUNC_6(VAR_3->return_semaphore);
  if (VAR_6 != VAR_1) {
   FUNC_1(1, "semaphore_signal %d", VAR_6);
  }

 }

 return ((void*)0);
}
