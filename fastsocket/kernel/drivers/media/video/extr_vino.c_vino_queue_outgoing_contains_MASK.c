
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_queue {scalar_t__ magic; scalar_t__ length; int queue_lock; int out; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct vino_framebuffer_queue *VAR_1,
     unsigned int VAR_2)
{
 int VAR_3 = 0;
 unsigned long VAR_4;

 if (VAR_1->magic != VAR_0) {
  return VAR_3;
 }

 FUNC_0(&VAR_1->queue_lock, VAR_4);

 if (VAR_1->length == 0)
  goto out;

 VAR_3 = FUNC_2(&VAR_1->out, VAR_2);

out:
 FUNC_1(&VAR_1->queue_lock, VAR_4);

 return VAR_3;
}
