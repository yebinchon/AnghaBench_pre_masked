
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_queue {scalar_t__ magic; unsigned int length; int queue_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_2(struct vino_framebuffer_queue *VAR_1)
{
 unsigned int VAR_2 = 0;
 unsigned long VAR_3;

 if (VAR_1->magic != VAR_0) {
  return VAR_2;
 }

 FUNC_0(&VAR_1->queue_lock, VAR_3);
 VAR_2 = VAR_1->length;
 FUNC_1(&VAR_1->queue_lock, VAR_3);

 return VAR_2;
}
