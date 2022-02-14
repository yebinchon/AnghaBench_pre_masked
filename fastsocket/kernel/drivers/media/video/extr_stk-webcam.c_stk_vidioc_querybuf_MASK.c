
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {scalar_t__ index; } ;
struct stk_sio_buffer {struct v4l2_buffer v4lbuf; } ;
struct stk_camera {scalar_t__ n_sbufs; struct stk_sio_buffer* sio_bufs; } ;
struct file {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1,
  void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct stk_camera *VAR_4 = VAR_2;
 struct stk_sio_buffer *VAR_5;

 if (VAR_3->index >= VAR_4->n_sbufs)
  return -VAR_0;
 VAR_5 = VAR_4->sio_bufs + VAR_3->index;
 *VAR_3 = VAR_5->v4lbuf;
 return 0;
}
