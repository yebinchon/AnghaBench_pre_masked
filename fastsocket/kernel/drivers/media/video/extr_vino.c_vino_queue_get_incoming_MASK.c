
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_queue {scalar_t__ magic; scalar_t__ length; int queue_lock; int in; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vino_framebuffer_queue *VAR_2,
       unsigned int *VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;

 if (VAR_2->magic != VAR_1) {
  return VAR_0;
 }

 FUNC_0(&VAR_2->queue_lock, VAR_5);

 if (VAR_2->length == 0) {
  VAR_4 = VAR_0;
  goto out;
 }

 *VAR_3 = FUNC_2(&VAR_2->in);

out:
 FUNC_1(&VAR_2->queue_lock, VAR_5);

 return VAR_4;
}
