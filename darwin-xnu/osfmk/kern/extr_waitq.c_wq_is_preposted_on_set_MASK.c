
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq_set {scalar_t__ wqset_prepost_id; } ;
struct waitq {scalar_t__ waitq_prepost_id; } ;
struct _is_posted_ctx {int did_prepost; struct waitq* posting_wq; } ;


 int VAR_0 ;
 int FUNC_0 (struct waitq_set*,void*,int ) ;

__attribute__((used)) static int FUNC_1(struct waitq *VAR_1, struct waitq_set *VAR_2)
{
 int VAR_3;
 struct _is_posted_ctx VAR_4;





 if (VAR_1->waitq_prepost_id != 0 &&
     VAR_2->wqset_prepost_id == VAR_1->waitq_prepost_id)
  return 1;


 VAR_4.posting_wq = VAR_1;
 VAR_4.did_prepost = 0;
 VAR_3 = FUNC_0(VAR_2, (void *)&VAR_4,
     VAR_0);
 return VAR_4.did_prepost;
}
