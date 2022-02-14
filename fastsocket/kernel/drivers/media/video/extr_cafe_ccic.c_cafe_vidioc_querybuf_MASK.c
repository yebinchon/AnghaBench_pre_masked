
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_buffer {size_t index; } ;
struct file {struct cafe_camera* private_data; } ;
struct cafe_camera {size_t n_sbufs; int s_mutex; TYPE_1__* sb_bufs; } ;
struct TYPE_2__ {struct v4l2_buffer v4lbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
  struct v4l2_buffer *VAR_3)
{
 struct cafe_camera *VAR_4 = VAR_1->private_data;
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_4->s_mutex);
 if (VAR_3->index >= VAR_4->n_sbufs)
  goto out;
 *VAR_3 = VAR_4->sb_bufs[VAR_3->index].v4lbuf;
 VAR_5 = 0;
  out:
 FUNC_1(&VAR_4->s_mutex);
 return VAR_5;
}
