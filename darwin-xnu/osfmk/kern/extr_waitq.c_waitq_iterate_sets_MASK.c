
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int waitq_iterator_t ;
struct wq_it_ctx {void* input; void* ctx; int it; } ;
struct waitq {int waitq_set_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct waitq*,int ,int ,void*,int ) ;

int FUNC_1(struct waitq *VAR_6, void *VAR_7, waitq_iterator_t VAR_8)
{
 int VAR_9;
 struct wq_it_ctx VAR_10 = {
  .input = (void *)VAR_6,
  .ctx = VAR_7,
  .it = VAR_8,
 };
 if (!VAR_8 || !VAR_6)
  return VAR_0;

 VAR_9 = FUNC_0(VAR_1, VAR_6, VAR_6->waitq_set_id,
          VAR_2, (void *)&VAR_10, VAR_5);
 if (VAR_9 == VAR_3)
  VAR_9 = VAR_4;
 return VAR_9;
}
