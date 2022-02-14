
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {struct waitq* wqp_wq_ptr; } ;
struct wq_prepost {TYPE_1__ wqp_wq; } ;
struct waitq {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct waitq*) ;
 int FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq*) ;
 int FUNC_6 (struct waitq*) ;
 struct wq_prepost* FUNC_7 (int ) ;
 int FUNC_8 (struct wq_prepost*) ;

struct waitq *FUNC_9(uint64_t VAR_0)
{
 struct waitq *VAR_1 = ((void*)0);
 struct wq_prepost *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2) {
  VAR_1 = VAR_2->wqp_wq.wqp_wq_ptr;

  FUNC_0(!FUNC_3(VAR_1));

  FUNC_4(VAR_1);
  FUNC_8(VAR_2);

  if (!FUNC_6(VAR_1)) {

   FUNC_5(VAR_1);
   FUNC_2();
   return ((void*)0);
  }
 }
 FUNC_2();
 return VAR_1;
}
