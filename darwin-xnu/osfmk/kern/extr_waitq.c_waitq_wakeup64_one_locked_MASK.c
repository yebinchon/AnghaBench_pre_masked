
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ waitq_lock_state_t ;
typedef int wait_result_t ;
typedef int uint64_t ;
typedef scalar_t__ thread_t ;
struct waitq {int dummy; } ;
typedef int spl_t ;
typedef scalar_t__ kern_return_t ;
typedef int event64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int,struct waitq*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct waitq*) ;
 scalar_t__ FUNC_6 (struct waitq*,int ,int *,int *) ;
 scalar_t__ FUNC_7 (struct waitq*,int ,int *,int,int *) ;
 int FUNC_8 (struct waitq*) ;
 int FUNC_9 (struct waitq*) ;
 int FUNC_10 (struct waitq*) ;

kern_return_t FUNC_11(struct waitq *VAR_5,
     event64_t VAR_6,
     wait_result_t VAR_7,
     uint64_t *VAR_8,
     int VAR_9,
     waitq_lock_state_t VAR_10)
{
 thread_t VAR_11;
 spl_t VAR_12;

 FUNC_0(FUNC_5(VAR_5));

 if (VAR_9 == VAR_3) {
  VAR_11 = FUNC_6(VAR_5, VAR_6,
                                   VAR_8,
                                   &VAR_12);
 } else {
  VAR_11 = FUNC_7(VAR_5, VAR_6,
                                   VAR_8,
                                   VAR_9, &VAR_12);
 }


 if (VAR_11 != VAR_2)
  FUNC_9(VAR_5);
 else
  FUNC_8(VAR_5);

 if (VAR_10 == VAR_4)
  FUNC_10(VAR_5);

 if (VAR_11 != VAR_2) {
  FUNC_1(VAR_11, VAR_9, VAR_5);
  kern_return_t VAR_13 = FUNC_3(VAR_11, VAR_7);
  FUNC_0(VAR_13 == VAR_1);
  FUNC_4(VAR_11);
  FUNC_2(VAR_12);
  return VAR_13;
 }

 return VAR_0;
}
