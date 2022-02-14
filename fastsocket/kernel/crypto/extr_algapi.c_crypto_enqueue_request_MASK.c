
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_queue {scalar_t__ qlen; scalar_t__ max_qlen; int list; int * backlog; } ;
struct crypto_async_request {int flags; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct crypto_queue *VAR_3,
      struct crypto_async_request *VAR_4)
{
 int VAR_5 = -VAR_2;

 if (FUNC_1(VAR_3->qlen >= VAR_3->max_qlen)) {
  VAR_5 = -VAR_1;
  if (!(VAR_4->flags & VAR_0))
   goto out;
  if (VAR_3->backlog == &VAR_3->list)
   VAR_3->backlog = &VAR_4->list;
 }

 VAR_3->qlen++;
 FUNC_0(&VAR_4->list, &VAR_3->list);

out:
 return VAR_5;
}
