
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wq_unlink_ctx {struct waitq_set* unlink_wqset; struct waitq* unlink_wq; } ;
struct waitq_set {int wqset_prepost_id; int wqset_q; } ;
struct TYPE_2__ {struct waitq_set* wql_set; } ;
struct waitq_link {TYPE_1__ wql_wqs; } ;
struct waitq {scalar_t__ waitq_prepost_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct waitq_set*) ;
 int FUNC_3 (struct waitq_set*) ;
 int FUNC_4 (struct waitq_set*) ;
 int FUNC_5 (struct waitq_set*) ;
 int VAR_3 ;
 int FUNC_6 (int ,struct wq_unlink_ctx*,int ) ;
 int FUNC_7 (struct waitq_link*) ;
 scalar_t__ FUNC_8 (struct waitq_link*) ;
 scalar_t__ FUNC_9 (struct waitq_link*) ;

__attribute__((used)) static int FUNC_10(struct waitq *VAR_4, void *VAR_5,
          struct waitq_link *VAR_6)
{
 (void)VAR_4;
 (void)VAR_5;
 if (FUNC_9(VAR_6) == VAR_0 && FUNC_8(VAR_6))
  FUNC_7(VAR_6);

 if (FUNC_9(VAR_6) == VAR_1) {
  struct waitq_set *VAR_7;
  struct wq_unlink_ctx VAR_8;







  if (VAR_4->waitq_prepost_id == 0)
   goto out;

  VAR_7 = VAR_6->wql_wqs.wql_set;
  FUNC_0(VAR_7 != ((void*)0));
  FUNC_0(!FUNC_1(&VAR_7->wqset_q));

  FUNC_3(VAR_7);

  if (!FUNC_2(VAR_7)) {

   goto out_unlock;
  }
  if (!FUNC_4(VAR_7))
   goto out_unlock;

  VAR_8.unlink_wq = VAR_4;
  VAR_8.unlink_wqset = VAR_7;
  (void)FUNC_6(VAR_7->wqset_prepost_id, &VAR_8,
      VAR_3);
out_unlock:
  FUNC_5(VAR_7);
 }

out:
 return VAR_2;
}
