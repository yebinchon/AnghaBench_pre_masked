
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvc_video_queue {unsigned int count; unsigned int buf_size; int mutex; void* mem; TYPE_3__* buffer; int type; } ;
struct TYPE_4__ {unsigned int offset; } ;
struct TYPE_5__ {unsigned int index; unsigned int length; scalar_t__ flags; int memory; int field; int type; TYPE_1__ m; } ;
struct TYPE_6__ {int wait; TYPE_2__ buf; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct uvc_video_queue*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (unsigned int) ;

int FUNC_7(struct uvc_video_queue *VAR_4, unsigned int VAR_5,
  unsigned int VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_6);
 unsigned int VAR_8;
 void *VAR_9 = ((void*)0);
 int VAR_10;

 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;

 FUNC_4(&VAR_4->mutex);

 if ((VAR_10 = FUNC_1(VAR_4)) < 0)
  goto done;


 if (VAR_5 == 0)
  goto done;


 for (; VAR_5 > 0; --VAR_5) {
  VAR_9 = FUNC_6(VAR_5 * VAR_7);
  if (VAR_9 != ((void*)0))
   break;
 }

 if (VAR_9 == ((void*)0)) {
  VAR_10 = -VAR_0;
  goto done;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
  FUNC_3(&VAR_4->buffer[VAR_8], 0, sizeof VAR_4->buffer[VAR_8]);
  VAR_4->buffer[VAR_8].buf.index = VAR_8;
  VAR_4->buffer[VAR_8].buf.m.offset = VAR_8 * VAR_7;
  VAR_4->buffer[VAR_8].buf.length = VAR_6;
  VAR_4->buffer[VAR_8].buf.type = VAR_4->type;
  VAR_4->buffer[VAR_8].buf.field = VAR_2;
  VAR_4->buffer[VAR_8].buf.memory = VAR_3;
  VAR_4->buffer[VAR_8].buf.flags = 0;
  FUNC_2(&VAR_4->buffer[VAR_8].wait);
 }

 VAR_4->mem = VAR_9;
 VAR_4->count = VAR_5;
 VAR_4->buf_size = VAR_7;
 VAR_10 = VAR_5;

done:
 FUNC_5(&VAR_4->mutex);
 return VAR_10;
}
