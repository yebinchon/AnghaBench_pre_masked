
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {struct waitq* wqp_wq_ptr; } ;
struct wq_prepost {TYPE_1__ wqp_wq; } ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct waitq*) ;
 int FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq*,struct waitq_set*) ;
 int FUNC_6 (struct waitq*) ;
 int FUNC_7 (struct waitq*) ;
 struct wq_prepost* FUNC_8 (int ) ;
 int FUNC_9 (struct wq_prepost*) ;

void FUNC_10(uint64_t VAR_0, struct waitq_set *VAR_1)
{
 struct wq_prepost *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_8(VAR_0);
 if (VAR_2) {
  struct waitq *VAR_3;

  VAR_3 = VAR_2->wqp_wq.wqp_wq_ptr;
  FUNC_0(!FUNC_3(VAR_3));

  FUNC_4(VAR_3);
  FUNC_9(VAR_2);

  if (!FUNC_7(VAR_3)) {

   FUNC_6(VAR_3);
   FUNC_2();
   return;
  }


  FUNC_5(VAR_3, VAR_1);

  FUNC_6(VAR_3);
 }
 FUNC_2();
 return;
}
