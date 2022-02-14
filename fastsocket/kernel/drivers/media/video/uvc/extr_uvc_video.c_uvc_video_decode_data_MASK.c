
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_video_queue {void* mem; } ;
struct uvc_streaming {struct uvc_video_queue queue; } ;
struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {unsigned int length; unsigned int bytesused; TYPE_1__ m; } ;
struct uvc_buffer {int state; TYPE_2__ buf; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int const*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct uvc_streaming *VAR_2,
  struct uvc_buffer *VAR_3, const __u8 *VAR_4, int VAR_5)
{
 struct uvc_video_queue *VAR_6 = &VAR_2->queue;
 unsigned int VAR_7, VAR_8;
 void *VAR_9;

 if (VAR_5 <= 0)
  return;


 VAR_7 = VAR_3->buf.length - VAR_3->buf.bytesused;
 VAR_9 = VAR_6->mem + VAR_3->buf.m.offset + VAR_3->buf.bytesused;
 VAR_8 = FUNC_1((unsigned int)VAR_5, VAR_7);
 FUNC_0(VAR_9, VAR_4, VAR_8);
 VAR_3->buf.bytesused += VAR_8;


 if (VAR_5 > VAR_7) {
  FUNC_2(VAR_1, "Frame complete (overflow).\n");
  VAR_3->state = VAR_0;
 }
}
