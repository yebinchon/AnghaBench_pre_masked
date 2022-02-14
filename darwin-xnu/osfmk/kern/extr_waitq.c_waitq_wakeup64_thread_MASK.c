
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_result_t ;
typedef int thread_t ;
struct waitq {int dummy; } ;
typedef int spl_t ;
typedef scalar_t__ kern_return_t ;
typedef int event64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct waitq*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct waitq*) ;
 int FUNC_7 (struct waitq*) ;
 scalar_t__ FUNC_8 (struct waitq*,int ,int ,int *) ;
 int FUNC_9 (struct waitq*) ;
 int FUNC_10 (struct waitq*) ;
 int FUNC_11 (struct waitq*) ;
 int FUNC_12 (struct waitq*) ;

kern_return_t FUNC_13(struct waitq *VAR_2,
        event64_t VAR_3,
        thread_t VAR_4,
        wait_result_t VAR_5)
{
 kern_return_t VAR_6;
 spl_t VAR_7, VAR_8;

 if (!FUNC_12(VAR_2))
  FUNC_1("Invalid waitq: %p", VAR_2);

 if (FUNC_6(VAR_2))
  VAR_7 = FUNC_2();
 FUNC_7(VAR_2);

 VAR_6 = FUNC_8(VAR_2, VAR_3, VAR_4, &VAR_8);


 FUNC_11(VAR_2);

 if (VAR_6 == VAR_1) {
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  FUNC_0(VAR_6 == VAR_1);
  FUNC_5(VAR_4);
  FUNC_3(VAR_8);
  FUNC_10(VAR_2);
 } else {
  VAR_6 = VAR_0;
  FUNC_9(VAR_2);
 }

 if (FUNC_6(VAR_2))
  FUNC_3(VAR_7);

 return VAR_6;
}
