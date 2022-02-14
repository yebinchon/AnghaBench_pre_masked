
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int waitq_iterator_t ;
struct wq_it_ctx {void* input; void* ctx; int it; } ;
struct waitq_set {int wqset_q; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct waitq_set*,void*,int ) ;
 int VAR_1 ;

int FUNC_3(struct waitq_set *VAR_2,
          void *VAR_3, waitq_iterator_t VAR_4)
{
 struct wq_it_ctx VAR_5 = {
  .input = (void *)VAR_2,
  .ctx = VAR_3,
  .it = VAR_4,
 };
 if (!VAR_4 || !VAR_2)
  return VAR_0;

 FUNC_0(FUNC_1(&VAR_2->wqset_q));

 return FUNC_2(VAR_2, (void *)&VAR_5,
      VAR_1);
}
