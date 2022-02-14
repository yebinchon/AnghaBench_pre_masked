
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {TYPE_1__* int_ops; } ;
struct videobuf_buffer {int magic; } ;
struct v4l2_framebuffer {int dummy; } ;
struct TYPE_2__ {int magic; } ;


 int FUNC_0 (struct videobuf_queue*,int ,struct videobuf_queue*,struct videobuf_buffer*,struct v4l2_framebuffer*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct videobuf_queue *VAR_3, struct videobuf_buffer *VAR_4,
      struct v4l2_framebuffer *VAR_5)
{
 FUNC_1(VAR_4->magic, VAR_0);
 FUNC_1(VAR_3->int_ops->magic, VAR_1);

 return FUNC_0(VAR_3, VAR_2, VAR_3, VAR_4, VAR_5);
}
