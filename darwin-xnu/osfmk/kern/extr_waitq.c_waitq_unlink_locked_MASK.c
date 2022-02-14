
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct wq_unlink_ctx {struct waitq_set* unlink_wqset; struct waitq* unlink_wq; } ;
struct waitq {scalar_t__ waitq_set_id; scalar_t__ waitq_prepost_id; int waitq_prepost; } ;
struct waitq_set {scalar_t__ wqset_id; int wqset_prepost_id; struct waitq wqset_q; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct waitq*) ;
 int FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq_set*) ;
 int FUNC_4 (struct waitq_set*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct waitq_set*) ;
 scalar_t__ FUNC_6 (int ,struct waitq*,scalar_t__,int ,void*,int ) ;
 int FUNC_7 (int ,void*,int ) ;

__attribute__((used)) static kern_return_t FUNC_8(struct waitq *VAR_7,
                                         struct waitq_set *VAR_8)
{
 uint64_t VAR_9;
 kern_return_t VAR_10;

 FUNC_0(!FUNC_2(VAR_7));

 if (VAR_7->waitq_set_id == 0) {






  if (VAR_7->waitq_prepost_id != 0)
   (void)FUNC_1(VAR_7);
  return VAR_0;
 }

 if (!FUNC_5(VAR_8)) {




  return VAR_0;
 }

 VAR_9 = VAR_8->wqset_id;

 if (VAR_7->waitq_set_id == VAR_9) {
  VAR_7->waitq_set_id = 0;






  (void)FUNC_1(VAR_7);
  return VAR_1;
 }
 VAR_10 = FUNC_6(VAR_2, VAR_7, VAR_7->waitq_set_id,
         VAR_3, (void *)&VAR_9, VAR_5);

 if (VAR_10 == VAR_4) {
  struct wq_unlink_ctx VAR_11;

  VAR_10 = VAR_1;


  if (!VAR_8->wqset_q.waitq_prepost)
   goto out;

  FUNC_0(!FUNC_2(&VAR_8->wqset_q));

  FUNC_3(VAR_8);





  VAR_11.unlink_wq = VAR_7;
  VAR_11.unlink_wqset = VAR_8;
  (void)FUNC_7(VAR_8->wqset_prepost_id, (void *)&VAR_11,
      VAR_6);
  FUNC_4(VAR_8);
 } else {
  VAR_10 = VAR_0;
 }

out:
 return VAR_10;
}
