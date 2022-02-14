
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_buffer {scalar_t__ baddr; } ;
struct v4l2_buffer {size_t index; } ;
struct TYPE_3__ {struct videobuf_buffer** bufs; } ;
struct omap24xxcam_fh {TYPE_1__ vbq; struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int sensor_reset_work; int mutex; int sdev; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,struct v4l2_buffer*,int) ;
 int FUNC_4 (TYPE_1__*,struct v4l2_buffer*) ;
 int FUNC_5 (int ,void*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, void *VAR_4, struct v4l2_buffer *VAR_5)
{
 struct omap24xxcam_fh *VAR_6 = VAR_4;
 struct omap24xxcam_device *VAR_7 = VAR_6->cam;
 struct videobuf_buffer *VAR_8;
 int VAR_9;

videobuf_dqbuf_again:
 VAR_9 = FUNC_3(&VAR_6->vbq, VAR_5, VAR_3->f_flags & VAR_2);
 if (VAR_9)
  goto out;

 VAR_8 = VAR_6->vbq.bufs[VAR_5->index];

 FUNC_0(&VAR_7->mutex);

 VAR_9 = FUNC_5(VAR_7->sdev, (void *)VAR_8->baddr);
 FUNC_1(&VAR_7->mutex);
 if (VAR_9 == -VAR_1)
  FUNC_2(&VAR_7->sensor_reset_work);
 else
  VAR_9 = 0;

out:





 if (VAR_9 == -VAR_1) {
  FUNC_4(&VAR_6->vbq, VAR_5);
  if (!(VAR_3->f_flags & VAR_2))
   goto videobuf_dqbuf_again;




  VAR_9 = -VAR_0;
 }

 return VAR_9;
}
