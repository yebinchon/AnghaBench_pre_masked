
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; int vm_flags; int * vm_ops; struct cafe_sio_buffer* vm_private_data; } ;
struct file {struct cafe_camera* private_data; } ;
struct TYPE_3__ {unsigned long offset; } ;
struct TYPE_4__ {int flags; TYPE_1__ m; } ;
struct cafe_sio_buffer {TYPE_2__ v4lbuf; int buffer; } ;
struct cafe_camera {int n_sbufs; int s_mutex; struct cafe_sio_buffer* sb_bufs; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vm_area_struct*) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vm_area_struct*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_7, struct vm_area_struct *VAR_8)
{
 struct cafe_camera *VAR_9 = VAR_7->private_data;
 unsigned long VAR_10 = VAR_8->vm_pgoff << VAR_1;
 int VAR_11 = -VAR_0;
 int VAR_12;
 struct cafe_sio_buffer *VAR_13 = ((void*)0);

 if (! (VAR_8->vm_flags & VAR_5) || ! (VAR_8->vm_flags & VAR_4))
  return -VAR_0;



 FUNC_1(&VAR_9->s_mutex);
 for (VAR_12 = 0; VAR_12 < VAR_9->n_sbufs; VAR_12++)
  if (VAR_9->sb_bufs[VAR_12].v4lbuf.m.offset == VAR_10) {
   VAR_13 = VAR_9->sb_bufs + VAR_12;
   break;
  }
 if (VAR_13 == ((void*)0))
  goto out;

 VAR_11 = FUNC_3(VAR_8, VAR_13->buffer, 0);
 if (VAR_11)
  goto out;
 VAR_8->vm_flags |= VAR_3;
 VAR_8->vm_private_data = VAR_13;
 VAR_8->vm_ops = &VAR_6;
 VAR_13->v4lbuf.flags |= VAR_2;
 FUNC_0(VAR_8);
 VAR_11 = 0;
  out:
 FUNC_2(&VAR_9->s_mutex);
 return VAR_11;
}
