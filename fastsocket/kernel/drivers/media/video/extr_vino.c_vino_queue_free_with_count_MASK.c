
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_queue {scalar_t__ magic; int type; int * buffer; int out; int in; scalar_t__ length; } ;
struct vino_framebuffer_fifo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vino_framebuffer_queue *VAR_1,
           unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_1->length = 0;
 FUNC_2(&VAR_1->in, 0, sizeof(struct vino_framebuffer_fifo));
 FUNC_2(&VAR_1->out, 0, sizeof(struct vino_framebuffer_fifo));
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0("vino_queue_free_with_count(): freeing buffer %d\n",
   VAR_3);
  FUNC_3(VAR_1->buffer[VAR_3]);
  FUNC_1(VAR_1->buffer[VAR_3]);
 }

 VAR_1->type = VAR_0;
 VAR_1->magic = 0;
}
