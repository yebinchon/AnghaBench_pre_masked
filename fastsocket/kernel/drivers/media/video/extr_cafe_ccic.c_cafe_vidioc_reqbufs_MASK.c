
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ memory; scalar_t__ count; } ;
struct file {struct cafe_camera* private_data; } ;
struct cafe_sio_buffer {int dummy; } ;
struct cafe_camera {scalar_t__ state; scalar_t__ n_sbufs; int s_mutex; int * sb_bufs; struct file* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct cafe_camera*) ;
 int FUNC_1 (struct cafe_camera*) ;
 int FUNC_2 (struct cafe_camera*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_9, void *VAR_10,
  struct v4l2_requestbuffers *VAR_11)
{
 struct cafe_camera *VAR_12 = VAR_9->private_data;
 int VAR_13 = 0;





 if (VAR_11->memory != VAR_6)
  return -VAR_1;




 FUNC_5(&VAR_12->s_mutex);
 if (VAR_11->count == 0) {
  if (VAR_12->state == VAR_5)
   FUNC_0(VAR_12);
  VAR_13 = FUNC_1 (VAR_12);
  goto out;
 }





 if (VAR_12->state != VAR_4 || (VAR_12->owner && VAR_12->owner != VAR_9)) {
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_12->owner = VAR_9;

 if (VAR_11->count < VAR_8)
  VAR_11->count = VAR_8;
 else if (VAR_11->count > VAR_7)
  VAR_11->count = VAR_7;
 if (VAR_12->n_sbufs > 0) {
  VAR_13 = FUNC_1(VAR_12);
  if (VAR_13)
   goto out;
 }

 VAR_12->sb_bufs = FUNC_4(VAR_11->count*sizeof(struct cafe_sio_buffer),
   VAR_3);
 if (VAR_12->sb_bufs == ((void*)0)) {
  VAR_13 = -VAR_2;
  goto out;
 }
 for (VAR_12->n_sbufs = 0; VAR_12->n_sbufs < VAR_11->count; (VAR_12->n_sbufs++)) {
  VAR_13 = FUNC_2(VAR_12, VAR_12->n_sbufs);
  if (VAR_13)
   break;
 }

 if (VAR_12->n_sbufs == 0)
  FUNC_3(VAR_12->sb_bufs);
 VAR_11->count = VAR_12->n_sbufs;

  out:
 FUNC_6(&VAR_12->s_mutex);
 return VAR_13;
}
