
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uverbs_event_file {int ref; scalar_t__ is_async; } ;
struct file {struct ib_uverbs_event_file* private_data; int * f_op; } ;


 struct file* FUNC_0 (int) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

struct ib_uverbs_event_file *FUNC_3(int VAR_1)
{
 struct ib_uverbs_event_file *VAR_2 = ((void*)0);
 struct file *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return ((void*)0);

 if (VAR_3->f_op != &VAR_0)
  goto out;

 VAR_2 = VAR_3->private_data;
 if (VAR_2->is_async) {
  VAR_2 = ((void*)0);
  goto out;
 }

 FUNC_2(&VAR_2->ref);

out:
 FUNC_1(VAR_3);
 return VAR_2;
}
