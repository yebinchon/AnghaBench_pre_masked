
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_timeout_urgency_t ;
typedef int wait_result_t ;
typedef int wait_interrupt_t ;
typedef int uint64_t ;
typedef int thread_t ;
struct waitq {int dummy; } ;
typedef int spl_t ;
typedef int event64_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*,struct waitq*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct waitq*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct waitq*) ;
 int FUNC_6 (struct waitq*) ;
 int FUNC_7 (struct waitq*) ;
 int FUNC_8 (struct waitq*) ;

wait_result_t FUNC_9(struct waitq *VAR_0,
      event64_t VAR_1,
      wait_interrupt_t VAR_2,
      wait_timeout_urgency_t VAR_3,
      uint64_t VAR_4,
      uint64_t VAR_5)
{
 wait_result_t VAR_6;
 thread_t VAR_7 = FUNC_0();
 spl_t VAR_8;

 if (!FUNC_8(VAR_0))
  FUNC_1("Invalid waitq: %p", VAR_0);

 if (FUNC_5(VAR_0))
  VAR_8 = FUNC_2();

 FUNC_6(VAR_0);
 VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_7);
 FUNC_7(VAR_0);

 if (FUNC_5(VAR_0))
  FUNC_3(VAR_8);

 return VAR_6;
}
