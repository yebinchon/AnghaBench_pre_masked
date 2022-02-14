
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ id; } ;
struct wq_prepost {TYPE_1__ wqp_prepostid; } ;
struct waitq {scalar_t__ waitq_prepost_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq*) ;
 int FUNC_6 (struct waitq*) ;
 struct wq_prepost* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct wq_prepost*) ;
 int FUNC_9 (struct wq_prepost*) ;
 int FUNC_10 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (struct wq_prepost*) ;

int FUNC_12(struct waitq *VAR_0)
{
 struct wq_prepost *VAR_1;
 int VAR_2 = 0;

 FUNC_0(!FUNC_4(VAR_0));

 if (VAR_0->waitq_prepost_id == 0)
  return 0;

 VAR_1 = FUNC_7(VAR_0->waitq_prepost_id);
 VAR_0->waitq_prepost_id = 0;
 if (VAR_1) {
  uint64_t VAR_3 = VAR_1->wqp_prepostid.id;
  FUNC_10("invalidate prepost 0x%llx (refcnt:%d)",
   VAR_1->wqp_prepostid.id, FUNC_11(VAR_1));
  FUNC_8(VAR_1);
  while (FUNC_11(VAR_1) > 1) {
   FUNC_2();

   FUNC_6(VAR_0);
   VAR_2 = 1;




   FUNC_1(1);

   FUNC_5(VAR_0);

   FUNC_3();
  }
  if (FUNC_11(VAR_1) > 0 && VAR_1->wqp_prepostid.id == VAR_3)
   FUNC_9(VAR_1);
 }

 return VAR_2;
}
