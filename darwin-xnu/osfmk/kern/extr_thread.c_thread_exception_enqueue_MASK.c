
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int task_t ;
struct thread_exception_elt {int exception_thread; int exception_task; scalar_t__ exception_type; } ;
typedef int queue_entry_t ;
typedef scalar_t__ exception_type_t ;
typedef int event_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 struct thread_exception_elt* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

void
FUNC_6(
 task_t VAR_4,
 thread_t VAR_5,
 exception_type_t VAR_6)
{
 FUNC_0(VAR_1 == VAR_6 || VAR_0 == VAR_6);
 struct thread_exception_elt *VAR_7 = FUNC_2(sizeof (*VAR_7));
 VAR_7->exception_type = VAR_6;
 VAR_7->exception_task = VAR_4;
 VAR_7->exception_thread = VAR_5;

 FUNC_3(&VAR_2);
 FUNC_1(&VAR_3, (queue_entry_t)VAR_7);
 FUNC_4(&VAR_2);

 FUNC_5((event_t)&VAR_3);
}
