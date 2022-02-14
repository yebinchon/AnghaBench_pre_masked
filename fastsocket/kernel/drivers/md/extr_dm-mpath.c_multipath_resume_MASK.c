
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int lock; int saved_queue_if_no_path; int queue_if_no_path; } ;
struct dm_target {scalar_t__ private; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0)
{
 struct multipath *VAR_1 = (struct multipath *) VAR_0->private;
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_1->queue_if_no_path = VAR_1->saved_queue_if_no_path;
 FUNC_1(&VAR_1->lock, VAR_2);
}
