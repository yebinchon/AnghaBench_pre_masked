
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvc_video_queue {int buf_used; void* mem; } ;
struct TYPE_6__ {unsigned int max_payload_size; unsigned int payload_size; } ;
struct uvc_streaming {TYPE_3__ bulk; struct uvc_video_queue queue; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_5__ {unsigned int bytesused; TYPE_1__ m; } ;
struct uvc_buffer {TYPE_2__ buf; } ;
typedef int __u8 ;


 int FUNC_0 (int *,void*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct uvc_streaming *VAR_0,
  struct uvc_buffer *VAR_1, __u8 *VAR_2, int VAR_3)
{
 struct uvc_video_queue *VAR_4 = &VAR_0->queue;
 unsigned int VAR_5;
 void *VAR_6;


 VAR_6 = VAR_4->mem + VAR_1->buf.m.offset + VAR_4->buf_used;
 VAR_5 = FUNC_1((unsigned int)VAR_3, VAR_1->buf.bytesused - VAR_4->buf_used);
 VAR_5 = FUNC_1(VAR_0->bulk.max_payload_size - VAR_0->bulk.payload_size,
   VAR_5);
 FUNC_0(VAR_2, VAR_6, VAR_5);

 VAR_4->buf_used += VAR_5;

 return VAR_5;
}
