
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct v4l2_buffer {int type; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 struct videobuf_queue* FUNC_0 (struct v4l2_m2m_ctx*,int ) ;
 int FUNC_1 (struct videobuf_queue*,struct v4l2_buffer*,int) ;

int FUNC_2(struct file *VAR_1, struct v4l2_m2m_ctx *VAR_2,
     struct v4l2_buffer *VAR_3)
{
 struct videobuf_queue *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3->type);
 return FUNC_1(VAR_4, VAR_3, VAR_1->f_flags & VAR_0);
}
