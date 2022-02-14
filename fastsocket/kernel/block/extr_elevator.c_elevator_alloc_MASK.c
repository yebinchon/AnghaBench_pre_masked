
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int node; } ;
struct hlist_head {int dummy; } ;
struct elevator_type {int ops; } ;
struct elevator_queue {int * hash; int sysfs_lock; int kobj; struct elevator_type* elevator_type; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct elevator_type*) ;
 int VAR_3 ;
 int FUNC_2 (struct elevator_queue*) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct elevator_queue *FUNC_7(struct request_queue *VAR_4,
      struct elevator_type *VAR_5)
{
 struct elevator_queue *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1 | VAR_2, VAR_4->node);
 if (FUNC_6(!VAR_6))
  goto err;

 VAR_6->ops = &VAR_5->ops;
 VAR_6->elevator_type = VAR_5;
 FUNC_4(&VAR_6->kobj, &VAR_3);
 FUNC_5(&VAR_6->sysfs_lock);

 VAR_6->hash = FUNC_3(sizeof(struct hlist_head) * VAR_0,
     VAR_1, VAR_4->node);
 if (!VAR_6->hash)
  goto err;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_0(&VAR_6->hash[VAR_7]);

 return VAR_6;
err:
 FUNC_2(VAR_6);
 FUNC_1(VAR_5);
 return ((void*)0);
}
