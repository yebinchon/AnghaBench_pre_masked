
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int userptr; } ;
struct v4l2_buffer {int index; scalar_t__ memory; int flags; int length; TYPE_2__ m; } ;
struct TYPE_4__ {int userptr; } ;
struct TYPE_6__ {int flags; scalar_t__ memory; int length; TYPE_1__ m; } ;
struct gspca_frame {TYPE_3__ v4l2_buf; } ;
struct gspca_dev {unsigned int nframes; scalar_t__ memory; int* fr_queue; int queue_lock; int fr_q; struct gspca_frame* frame; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_8, void *VAR_9,
   struct v4l2_buffer *VAR_10)
{
 struct gspca_dev *VAR_11 = VAR_9;
 struct gspca_frame *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_0(VAR_1, "qbuf %d", VAR_10->index);

 if (FUNC_3(&VAR_11->queue_lock))
  return -VAR_3;

 VAR_14 = VAR_10->index;
 if ((unsigned) VAR_14 >= VAR_11->nframes) {
  FUNC_0(VAR_1,
   "qbuf idx %d >= %d", VAR_14, VAR_11->nframes);
  VAR_15 = -VAR_2;
  goto out;
 }
 if (VAR_10->memory != VAR_11->memory) {
  FUNC_0(VAR_1, "qbuf bad memory type");
  VAR_15 = -VAR_2;
  goto out;
 }

 VAR_12 = &VAR_11->frame[VAR_14];
 if (VAR_12->v4l2_buf.flags & VAR_0) {
  FUNC_0(VAR_1, "qbuf bad state");
  VAR_15 = -VAR_2;
  goto out;
 }

 VAR_12->v4l2_buf.flags |= VAR_6;

 if (VAR_12->v4l2_buf.memory == VAR_7) {
  VAR_12->v4l2_buf.m.userptr = VAR_10->m.userptr;
  VAR_12->v4l2_buf.length = VAR_10->length;
 }


 VAR_13 = FUNC_1(&VAR_11->fr_q);
 VAR_11->fr_queue[VAR_13] = VAR_14;
 FUNC_2(&VAR_11->fr_q, (VAR_13 + 1) % VAR_4);

 VAR_10->flags |= VAR_6;
 VAR_10->flags &= ~VAR_5;
 VAR_15 = 0;
out:
 FUNC_4(&VAR_11->queue_lock);
 return VAR_15;
}
