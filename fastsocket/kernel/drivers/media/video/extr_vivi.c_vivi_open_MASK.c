
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivi_fh {size_t type; int width; int height; int vb_vidq; int * fmt; struct vivi_dev* dev; } ;
struct vivi_dev {int users; int h; int m; int s; int ms; int slock; int timestr; int jiffies; scalar_t__ mv_count; int mutex; TYPE_1__* vfd; } ;
struct vivi_buffer {int dummy; } ;
struct file {struct vivi_fh* private_data; } ;
struct TYPE_2__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vivi_dev*,int,char*,int ,int ,int) ;
 int * VAR_5 ;
 int VAR_6 ;
 struct vivi_fh* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int,int,int,int) ;
 int * VAR_7 ;
 struct vivi_dev* FUNC_5 (struct file*) ;
 int FUNC_6 (int *,int *,int *,int *,size_t,int ,int,struct vivi_fh*) ;
 int FUNC_7 (struct vivi_fh*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct file *VAR_9)
{
 struct vivi_dev *VAR_10 = FUNC_5(VAR_9);
 struct vivi_fh *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_2(&VAR_10->mutex);
 VAR_10->users++;

 if (VAR_10->users > 1) {
  VAR_10->users--;
  FUNC_3(&VAR_10->mutex);
  return -VAR_0;
 }

 FUNC_0(VAR_10, 1, "open /dev/video%d type=%s users=%d\n", VAR_10->vfd->num,
  VAR_7[VAR_3], VAR_10->users);


 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_2);
 if (((void*)0) == VAR_11) {
  VAR_10->users--;
  VAR_12 = -VAR_1;
 }
 FUNC_3(&VAR_10->mutex);

 if (VAR_12)
  return VAR_12;

 VAR_9->private_data = VAR_11;
 VAR_11->dev = VAR_10;

 VAR_11->type = VAR_3;
 VAR_11->fmt = &VAR_5[0];
 VAR_11->width = 640;
 VAR_11->height = 480;


 VAR_10->h = 0;
 VAR_10->m = 0;
 VAR_10->s = 0;
 VAR_10->ms = 0;
 VAR_10->mv_count = 0;
 VAR_10->jiffies = VAR_6;
 FUNC_4(VAR_10->timestr, "%02d:%02d:%02d:%03d",
   VAR_10->h, VAR_10->m, VAR_10->s, VAR_10->ms);

 FUNC_6(&VAR_11->vb_vidq, &VAR_8,
   ((void*)0), &VAR_10->slock, VAR_11->type, VAR_4,
   sizeof(struct vivi_buffer), VAR_11);

 FUNC_7(VAR_11);

 return 0;
}
