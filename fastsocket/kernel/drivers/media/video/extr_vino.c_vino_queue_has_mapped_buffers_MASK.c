
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_framebuffer_queue {scalar_t__ magic; unsigned int length; int queue_lock; TYPE_1__** buffer; } ;
struct TYPE_2__ {scalar_t__ map_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct vino_framebuffer_queue *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3 = 0;
 unsigned long VAR_4;

 if (VAR_1->magic != VAR_0) {
  return VAR_3;
 }

 FUNC_0(&VAR_1->queue_lock, VAR_4);
 for (VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2++) {
  if (VAR_1->buffer[VAR_2]->map_count > 0) {
   VAR_3 = 1;
   break;
  }
 }
 FUNC_1(&VAR_1->queue_lock, VAR_4);

 return VAR_3;
}
