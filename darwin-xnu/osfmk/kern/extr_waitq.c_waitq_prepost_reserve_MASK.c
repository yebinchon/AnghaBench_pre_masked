
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ waitq_lock_state_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ id; } ;
struct wq_prepost {TYPE_1__ wqp_prepostid; } ;
struct waitq {scalar_t__ waitq_set_id; scalar_t__ waitq_prepost_id; } ;


 scalar_t__ FUNC_0 (struct waitq*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct waitq*,int*,struct wq_prepost**) ;
 int FUNC_3 (struct waitq*,int,int) ;
 int FUNC_4 (struct waitq*) ;
 int FUNC_5 (struct waitq*) ;
 int FUNC_6 (struct waitq*) ;
 int FUNC_7 (char*,void*,int) ;

uint64_t FUNC_8(struct waitq *VAR_2, int VAR_3,
          waitq_lock_state_t VAR_4)
{
 uint64_t VAR_5 = 0;
 uint64_t VAR_6 = 0, VAR_7 = 0;
 struct wq_prepost *VAR_8 = ((void*)0);
 int VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = (VAR_4 == VAR_0);
 int VAR_12 = 0;

 FUNC_7("Attempting to reserve prepost linkages for waitq %p (extra:%d)",
  (void *)FUNC_0(VAR_2), VAR_3);

 if (VAR_2 == ((void*)0) && VAR_3 > 0) {






  VAR_9 = FUNC_2(VAR_3 + 2, ((void*)0),
        &VAR_12, &VAR_8);
  FUNC_1(VAR_9 == VAR_3 + 2);
  return VAR_8->wqp_prepostid.id;
 }

 FUNC_1(VAR_4 == VAR_0 || VAR_4 == VAR_1);

 FUNC_1(!FUNC_4(VAR_2));

 FUNC_5(VAR_2);


 VAR_6 = VAR_2->waitq_set_id;
 VAR_7 = VAR_2->waitq_prepost_id;






 if (VAR_6 == 0 && VAR_11)
  goto out;

 VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_11);


 if (VAR_10 == 0) {
  if (VAR_11)
   goto out;
  goto out_unlock;
 }

try_alloc:

 VAR_9 = FUNC_2(VAR_10, VAR_2,
       &VAR_12, &VAR_8);

 if (!VAR_12) {

  if (VAR_11)
   goto out;
  goto out_unlock;
 }
 if ((VAR_2->waitq_set_id == 0) ||
     (VAR_2->waitq_set_id == VAR_6 &&
      VAR_2->waitq_prepost_id == VAR_7)) {
  if (VAR_11)
   goto out;
  goto out_unlock;
 }

 VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_11);

 if (VAR_10 > VAR_9) {
  VAR_6 = VAR_2->waitq_set_id;
  VAR_7 = VAR_2->waitq_prepost_id;
  VAR_10 = VAR_10 - VAR_9;
  goto try_alloc;
 }

 if (VAR_11)
  goto out;

out_unlock:
 FUNC_6(VAR_2);
out:
 if (VAR_8)
  VAR_5 = VAR_8->wqp_prepostid.id;

 return VAR_5;
}
