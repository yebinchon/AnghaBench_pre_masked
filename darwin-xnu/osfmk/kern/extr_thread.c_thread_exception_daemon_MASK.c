
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_continue_t ;
typedef int task_t ;
struct thread_exception_elt {int exception_thread; int exception_task; int exception_type; } ;
typedef int exception_type_t ;
typedef int event_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct thread_exception_elt*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_13(void)
{
 struct thread_exception_elt *VAR_3;
 task_t VAR_4;
 thread_t VAR_5;
 exception_type_t VAR_6;

 FUNC_4(&VAR_1);
 while ((VAR_3 = (struct thread_exception_elt *)FUNC_2(&VAR_2)) != ((void*)0)) {
  FUNC_5(&VAR_1);

  VAR_6 = VAR_3->exception_type;
  VAR_4 = VAR_3->exception_task;
  VAR_5 = VAR_3->exception_thread;
  FUNC_0(VAR_5);

  FUNC_3(VAR_3, sizeof (*VAR_3));


  FUNC_8(VAR_4);
  FUNC_10(VAR_4);
  FUNC_9(VAR_4);


  FUNC_6(VAR_4);

  FUNC_12(VAR_5);


  FUNC_7(VAR_4, VAR_5, VAR_6, 0);

  FUNC_4(&VAR_1);
 }

 FUNC_1((event_t)&VAR_2, VAR_0);
 FUNC_5(&VAR_1);

 FUNC_11((thread_continue_t)FUNC_13);
}
