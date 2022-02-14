
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {struct waitq* wqp_wq_ptr; } ;
struct wq_prepost {TYPE_2__ wqp_prepostid; TYPE_1__ wqp_wq; } ;
struct waitq {scalar_t__ waitq_prepost_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct waitq*) ;
 int FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq*) ;
 int FUNC_4 (struct waitq*) ;
 struct wq_prepost* FUNC_5 (int ,int) ;
 int FUNC_6 (struct wq_prepost*) ;
 int FUNC_7 (struct wq_prepost*) ;

uint64_t FUNC_8(struct waitq *VAR_1)
{
 struct wq_prepost *VAR_2;
 uint64_t VAR_3 = 0;

 if (!FUNC_4(VAR_1))
  return 0;

 FUNC_0(!FUNC_1(VAR_1));

 FUNC_2(VAR_1);

 if (!FUNC_4(VAR_1))
  goto out_unlock;

 if (VAR_1->waitq_prepost_id) {
  VAR_3 = VAR_1->waitq_prepost_id;
  goto out_unlock;
 }


 FUNC_3(VAR_1);

 VAR_2 = FUNC_5(VAR_0, 1);
 if (!VAR_2)
  return 0;


 FUNC_2(VAR_1);

 if (!FUNC_4(VAR_1)) {
  FUNC_6(VAR_2);
  VAR_3 = 0;
  goto out_unlock;
 }

 if (VAR_1->waitq_prepost_id) {

  FUNC_6(VAR_2);
  VAR_3 = VAR_1->waitq_prepost_id;
  goto out_unlock;
 }

 VAR_2->wqp_wq.wqp_wq_ptr = VAR_1;

 FUNC_7(VAR_2);
 VAR_3 = VAR_2->wqp_prepostid.id;
 VAR_1->waitq_prepost_id = VAR_3;

 FUNC_6(VAR_2);

out_unlock:
 FUNC_3(VAR_1);

 return VAR_3;
}
