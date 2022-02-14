
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vino_framebuffer_queue {scalar_t__ magic; scalar_t__ type; unsigned int length; int queue_mutex; int out; int in; TYPE_1__** buffer; } ;
struct vino_framebuffer {int dummy; } ;
struct TYPE_4__ {unsigned int id; scalar_t__ size; scalar_t__ offset; int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (struct vino_framebuffer_queue*,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct vino_framebuffer_queue *VAR_8,
      unsigned int *VAR_9)
{
 unsigned int VAR_10;
 int VAR_11 = 0;

 FUNC_0("vino_queue_init(): length = %d\n", *VAR_9);

 if (VAR_8->magic == VAR_7) {
  FUNC_0("vino_queue_init(): queue already initialized!\n");
  return -VAR_0;
 }

 if (VAR_8->type != VAR_6) {
  FUNC_0("vino_queue_init(): queue already initialized!\n");
  return -VAR_0;
 }

 if (*VAR_9 < 1)
  return -VAR_0;

 FUNC_3(&VAR_8->queue_mutex);

 if (*VAR_9 > VAR_3)
  *VAR_9 = VAR_3;

 VAR_8->length = 0;

 for (VAR_10 = 0; VAR_10 < *VAR_9; VAR_10++) {
  FUNC_0("vino_queue_init(): allocating buffer %d\n", VAR_10);
  VAR_8->buffer[VAR_10] = FUNC_2(sizeof(struct vino_framebuffer),
           VAR_2);
  if (!VAR_8->buffer[VAR_10]) {
   FUNC_0("vino_queue_init(): kmalloc() failed\n");
   VAR_11 = -VAR_1;
   break;
  }

  VAR_11 = FUNC_6(VAR_8->buffer[VAR_10],
        VAR_4);
  if (VAR_11) {
   FUNC_1(VAR_8->buffer[VAR_10]);
   FUNC_0("vino_queue_init(): "
    "vino_allocate_buffer() failed\n");
   break;
  }

  VAR_8->buffer[VAR_10]->id = VAR_10;
  if (VAR_10 > 0) {
   VAR_8->buffer[VAR_10]->offset = VAR_8->buffer[VAR_10 - 1]->offset +
    VAR_8->buffer[VAR_10 - 1]->size;
  } else {
   VAR_8->buffer[VAR_10]->offset = 0;
  }

  FUNC_5(&VAR_8->buffer[VAR_10]->state_lock);

  FUNC_0("vino_queue_init(): buffer = %d, offset = %d, "
   "size = %d\n", VAR_10, VAR_8->buffer[VAR_10]->offset,
   VAR_8->buffer[VAR_10]->size);
 }

 if (VAR_11) {
  FUNC_8(VAR_8, VAR_10);
  *VAR_9 = 0;
 } else {
  VAR_8->length = *VAR_9;
  FUNC_7(&VAR_8->in, VAR_8->length);
  FUNC_7(&VAR_8->out, VAR_8->length);
  VAR_8->type = VAR_5;
  VAR_8->magic = VAR_7;
 }

 FUNC_4(&VAR_8->queue_mutex);

 return VAR_11;
}
