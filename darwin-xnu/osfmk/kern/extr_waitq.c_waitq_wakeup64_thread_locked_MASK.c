
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ waitq_lock_state_t ;
typedef int wait_result_t ;
typedef int thread_t ;
struct waitq {int dummy; } ;
typedef int spl_t ;
typedef scalar_t__ kern_return_t ;
typedef int event64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct waitq*) ;
 scalar_t__ FUNC_6 (struct waitq*,int ,int ,int *) ;
 int FUNC_7 (struct waitq*) ;
 int FUNC_8 (struct waitq*) ;
 int FUNC_9 (struct waitq*) ;

kern_return_t FUNC_10(struct waitq *VAR_3,
        event64_t VAR_4,
        thread_t VAR_5,
        wait_result_t VAR_6,
        waitq_lock_state_t VAR_7)
{
 kern_return_t VAR_8;
 spl_t VAR_9;

 FUNC_0(FUNC_5(VAR_3));
 FUNC_1(VAR_5);





 VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_5, &VAR_9);

 if (VAR_8 == VAR_1)
  FUNC_8(VAR_3);
 else
  FUNC_7(VAR_3);

 if (VAR_7 == VAR_2)
  FUNC_9(VAR_3);

 if (VAR_8 != VAR_1)
  return VAR_0;

 VAR_8 = FUNC_3(VAR_5, VAR_6);
 FUNC_0(VAR_8 == VAR_1);
 FUNC_4(VAR_5);
 FUNC_2(VAR_9);

 return VAR_8;
}
