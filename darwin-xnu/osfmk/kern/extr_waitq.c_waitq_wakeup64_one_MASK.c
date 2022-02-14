
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_result_t ;
typedef int uint64_t ;
struct waitq {int dummy; } ;
typedef int spl_t ;
typedef int kern_return_t ;
typedef int event64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct waitq*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct waitq*) ;
 int FUNC_4 (struct waitq*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct waitq*,int ,int ) ;
 int FUNC_7 (struct waitq*) ;
 int FUNC_8 (struct waitq*,int ,int ,int *,int,int ) ;

kern_return_t FUNC_9(struct waitq *VAR_2, event64_t VAR_3,
     wait_result_t VAR_4, int VAR_5)
{
 kern_return_t VAR_6;
 uint64_t VAR_7 = 0;
 spl_t VAR_8;

 if (!FUNC_7(VAR_2))
  FUNC_0("Invalid waitq: %p", VAR_2);

 if (!FUNC_3(VAR_2)) {

  VAR_7 = FUNC_6(VAR_2, 0, VAR_0);
 } else {
  VAR_8 = FUNC_1();
  FUNC_4(VAR_2);
 }


 VAR_6 = FUNC_8(VAR_2, VAR_3, VAR_4,
           &VAR_7, VAR_5, VAR_1);

 if (FUNC_3(VAR_2))
  FUNC_2(VAR_8);


 FUNC_5(VAR_7);

 return VAR_6;
}
