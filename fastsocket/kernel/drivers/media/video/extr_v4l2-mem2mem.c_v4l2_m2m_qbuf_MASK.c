
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct v4l2_buffer {int type; } ;
struct file {int dummy; } ;


 struct videobuf_queue* FUNC_0 (struct v4l2_m2m_ctx*,int ) ;
 int FUNC_1 (struct v4l2_m2m_ctx*) ;
 int FUNC_2 (struct videobuf_queue*,struct v4l2_buffer*) ;

int FUNC_3(struct file *VAR_0, struct v4l2_m2m_ctx *VAR_1,
    struct v4l2_buffer *VAR_2)
{
 struct videobuf_queue *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2->type);
 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_4)
  FUNC_1(VAR_1);

 return VAR_4;
}
