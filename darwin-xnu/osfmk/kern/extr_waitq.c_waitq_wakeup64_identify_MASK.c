
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_result_t ;
typedef int uint64_t ;
typedef scalar_t__ thread_t ;
struct waitq {int dummy; } ;
typedef int spl_t ;
typedef int event64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct waitq*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct waitq*) ;
 int FUNC_6 (struct waitq*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct waitq*,int ,int ) ;
 int FUNC_9 (struct waitq*) ;
 scalar_t__ FUNC_10 (struct waitq*,int ,int ,int *,int *,int,int ) ;

thread_t
FUNC_11(struct waitq *VAR_3,
                        event64_t VAR_4,
                        wait_result_t VAR_5,
                        int VAR_6)
{
 uint64_t VAR_7 = 0;
 spl_t VAR_8 = 0;
 thread_t VAR_9;
 spl_t VAR_10;

 if (!FUNC_9(VAR_3))
  FUNC_0("Invalid waitq: %p", VAR_3);

 if (!FUNC_5(VAR_3)) {

  VAR_7 = FUNC_8(VAR_3, 0, VAR_1);
 } else {
  VAR_10 = FUNC_1();
  FUNC_6(VAR_3);
 }

 VAR_9 = FUNC_10(VAR_3, VAR_4, VAR_5,
                                         &VAR_8, &VAR_7,
                                         VAR_6, VAR_2);


 if (VAR_9 != VAR_0) {
  FUNC_3(VAR_9);
  FUNC_4(VAR_9);
  FUNC_2(VAR_8);
 }

 if (FUNC_5(VAR_3))
   FUNC_2(VAR_10);


 FUNC_7(VAR_7);


 return VAR_9;
}
