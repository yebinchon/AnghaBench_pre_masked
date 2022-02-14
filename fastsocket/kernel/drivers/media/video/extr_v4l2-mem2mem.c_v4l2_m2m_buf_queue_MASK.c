
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int type; } ;
struct videobuf_buffer {int state; int queue; } ;
struct v4l2_m2m_queue_ctx {int num_rdy; int rdy_queue; } ;
struct v4l2_m2m_ctx {int dummy; } ;


 int VAR_0 ;
 struct v4l2_m2m_queue_ctx* FUNC_0 (struct v4l2_m2m_ctx*,int ) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct v4l2_m2m_ctx *VAR_1, struct videobuf_queue *VAR_2,
   struct videobuf_buffer *VAR_3)
{
 struct v4l2_m2m_queue_ctx *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2->type);
 if (!VAR_4)
  return;

 FUNC_1(&VAR_3->queue, &VAR_4->rdy_queue);
 VAR_4->num_rdy++;

 VAR_3->state = VAR_0;
}
