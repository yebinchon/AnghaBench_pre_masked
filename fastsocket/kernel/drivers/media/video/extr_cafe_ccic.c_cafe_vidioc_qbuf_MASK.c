
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_buffer {scalar_t__ index; } ;
struct file {struct cafe_camera* private_data; } ;
struct TYPE_2__ {int flags; } ;
struct cafe_sio_buffer {int list; TYPE_1__ v4lbuf; } ;
struct cafe_camera {scalar_t__ n_sbufs; int s_mutex; int dev_lock; int sb_avail; struct cafe_sio_buffer* sb_bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5,
  struct v4l2_buffer *VAR_6)
{
 struct cafe_camera *VAR_7 = VAR_4->private_data;
 struct cafe_sio_buffer *VAR_8;
 int VAR_9 = -VAR_1;
 unsigned long VAR_10;

 FUNC_1(&VAR_7->s_mutex);
 if (VAR_6->index >= VAR_7->n_sbufs)
  goto out;
 VAR_8 = VAR_7->sb_bufs + VAR_6->index;
 if (VAR_8->v4lbuf.flags & VAR_3) {
  VAR_9 = 0;
  goto out;
 }
 if (VAR_8->v4lbuf.flags & VAR_2) {

  VAR_9 = -VAR_0;
  goto out;
 }
 VAR_8->v4lbuf.flags |= VAR_3;
 FUNC_3(&VAR_7->dev_lock, VAR_10);
 FUNC_0(&VAR_8->list, &VAR_7->sb_avail);
 FUNC_4(&VAR_7->dev_lock, VAR_10);
 VAR_9 = 0;
  out:
 FUNC_2(&VAR_7->s_mutex);
 return VAR_9;
}
