
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_queue {scalar_t__ magic; scalar_t__ type; int queue_mutex; int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vino_framebuffer_queue*,int ) ;

__attribute__((used)) static void FUNC_4(struct vino_framebuffer_queue *VAR_2)
{
 FUNC_0("vino_queue_free():\n");

 if (VAR_2->magic != VAR_1)
  return;
 if (VAR_2->type != VAR_0)
  return;

 FUNC_1(&VAR_2->queue_mutex);

 FUNC_3(VAR_2, VAR_2->length);

 FUNC_2(&VAR_2->queue_mutex);
}
