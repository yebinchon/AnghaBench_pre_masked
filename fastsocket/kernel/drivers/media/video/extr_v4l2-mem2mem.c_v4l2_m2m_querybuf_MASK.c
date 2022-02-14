
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {scalar_t__ type; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct TYPE_2__ {int offset; } ;
struct v4l2_buffer {scalar_t__ memory; TYPE_1__ m; int type; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct videobuf_queue* FUNC_0 (struct v4l2_m2m_ctx*,int ) ;
 int FUNC_1 (struct videobuf_queue*,struct v4l2_buffer*) ;

int FUNC_2(struct file *VAR_3, struct v4l2_m2m_ctx *VAR_4,
        struct v4l2_buffer *VAR_5)
{
 struct videobuf_queue *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_5->type);
 VAR_7 = FUNC_1(VAR_6, VAR_5);

 if (VAR_5->memory == VAR_2
     && VAR_6->type == VAR_1) {
  VAR_5->m.offset += VAR_0;
 }

 return VAR_7;
}
