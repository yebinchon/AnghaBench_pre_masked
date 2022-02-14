
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct waitq {int dummy; } ;
struct waitq_set {scalar_t__ wqset_id; int wqset_prepost_hook; struct waitq wqset_q; } ;
struct waitq_select_args {scalar_t__* nthreads; scalar_t__ max_threads; scalar_t__ event; int reserved_preposts; scalar_t__ threadq; struct waitq* waitq; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {struct waitq_set* wql_set; } ;
struct waitq_link {TYPE_2__ wql_setid; TYPE_1__ wql_wqs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct waitq_select_args*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct waitq*) ;
 int FUNC_4 (int ,struct waitq*,int ) ;
 scalar_t__ FUNC_5 (struct waitq_set*) ;
 scalar_t__ FUNC_6 (struct waitq_set*) ;
 int FUNC_7 (struct waitq_set*) ;
 int FUNC_8 (struct waitq_set*) ;
 int FUNC_9 (struct waitq_set*) ;
 int FUNC_10 (struct waitq_set*,struct waitq*,int ) ;
 scalar_t__ FUNC_11 (struct waitq_link*) ;

__attribute__((used)) static int FUNC_12(struct waitq *VAR_4, void *VAR_5,
    struct waitq_link *VAR_6)
{
 int VAR_7 = VAR_2;
 struct waitq_select_args VAR_8 = *((struct waitq_select_args *)VAR_5);
 struct waitq_set *VAR_9;

 (void)VAR_4;
 FUNC_0(FUNC_11(VAR_6) == VAR_1);

 VAR_9 = VAR_6->wql_wqs.wql_set;
 VAR_8.waitq = &VAR_9->wqset_q;

 FUNC_0(!FUNC_3(VAR_4));
 FUNC_0(!FUNC_3(&VAR_9->wqset_q));

 FUNC_7(VAR_9);




 if (VAR_9->wqset_id != VAR_6->wql_setid.id)
  goto out_unlock;

 FUNC_0(FUNC_9(VAR_9));





 FUNC_1(&VAR_8);

 if (*(VAR_8.nthreads) > 0 ||
     (VAR_8.threadq && !FUNC_2(VAR_8.threadq))) {

  if (VAR_8.max_threads > 0 &&
      *(VAR_8.nthreads) >= VAR_8.max_threads) {

   VAR_7 = VAR_3;
  }
  goto out_unlock;
 } else {
  if (VAR_8.event == VAR_0) {
   if (FUNC_5(VAR_9)) {
    FUNC_10(
     VAR_9, VAR_4, VAR_8.reserved_preposts);
   } else if (FUNC_6(VAR_9)) {
    FUNC_4(
     VAR_9->wqset_prepost_hook, VAR_4, 0);
   }
  }
 }

out_unlock:
 FUNC_8(VAR_9);
 return VAR_7;
}
