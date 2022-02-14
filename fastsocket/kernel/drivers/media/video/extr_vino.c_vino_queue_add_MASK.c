
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_queue {scalar_t__ magic; unsigned int length; int queue_lock; struct vino_framebuffer** buffer; int in; int out; } ;
struct vino_framebuffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 unsigned int FUNC_4 (int *) ;

__attribute__((used)) static struct vino_framebuffer *FUNC_5(struct
            vino_framebuffer_queue *VAR_1,
            unsigned int VAR_2)
{
 struct vino_framebuffer *VAR_3 = ((void*)0);
 unsigned int VAR_4;
 unsigned long VAR_5;

 FUNC_0("vino_queue_add(): id = %d\n", VAR_2);

 if (VAR_1->magic != VAR_0) {
  return VAR_3;
 }

 FUNC_1(&VAR_1->queue_lock, VAR_5);

 if (VAR_1->length == 0)
  goto out;

 if (VAR_2 >= VAR_1->length)
  goto out;






 VAR_4 = FUNC_4(&VAR_1->in) +
  FUNC_4(&VAR_1->out);
 if (VAR_4 >= VAR_1->length)
  goto out;

 if (FUNC_3(&VAR_1->in, VAR_2))
  goto out;

 VAR_3 = VAR_1->buffer[VAR_2];

out:
 FUNC_2(&VAR_1->queue_lock, VAR_5);

 return VAR_3;
}
