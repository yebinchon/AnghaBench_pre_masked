
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct cn_queue_dev {int wq_creation; struct sock* nls; int wq_created; int queue_lock; int queue_list; int refcnt; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 struct cn_queue_dev* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,char*,char*) ;
 int FUNC_6 (int *) ;

struct cn_queue_dev *FUNC_7(char *VAR_2, struct sock *VAR_3)
{
 struct cn_queue_dev *VAR_4;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_5(VAR_4->name, sizeof(VAR_4->name), "%s", VAR_2);
 FUNC_2(&VAR_4->refcnt, 0);
 FUNC_0(&VAR_4->queue_list);
 FUNC_6(&VAR_4->queue_lock);
 FUNC_3(&VAR_4->wq_created);

 VAR_4->nls = VAR_3;

 FUNC_1(&VAR_4->wq_creation, VAR_1);

 return VAR_4;
}
