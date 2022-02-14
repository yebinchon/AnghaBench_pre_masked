
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_class_device {int ref; int * class_dev; int minor; } ;
struct request_queue {int kobj; struct bsg_class_device bsg_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(struct request_queue *VAR_3)
{
 struct bsg_class_device *VAR_4 = &VAR_3->bsg_dev;

 if (!VAR_4->class_dev)
  return;

 FUNC_3(&VAR_2);
 FUNC_1(&VAR_1, VAR_4->minor);
 FUNC_5(&VAR_3->kobj, "bsg");
 FUNC_0(VAR_4->class_dev);
 VAR_4->class_dev = ((void*)0);
 FUNC_2(&VAR_4->ref, VAR_0);
 FUNC_4(&VAR_2);
}
