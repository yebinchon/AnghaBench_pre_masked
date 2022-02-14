
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct au0828_fh {int type; int vb_vbiq; int vb_vidq; int resources; struct au0828_dev* dev; } ;
struct au0828_dev {int vid_timeout_running; int vbi_timeout_running; int vbi_timeout; int vid_timeout; int v4l2_dev; int resources; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (struct au0828_dev*) ;
 int FUNC_2 (int,char*,struct au0828_fh*,int,int ,int ) ;
 int FUNC_3 (struct au0828_fh*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct au0828_fh*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int ,int ,int) ;
 int VAR_7 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_8, void *VAR_9,
      enum v4l2_buf_type VAR_10)
{
 struct au0828_fh *VAR_11 = VAR_9;
 struct au0828_dev *VAR_12 = VAR_11->dev;
 int VAR_13 = -VAR_1;

 VAR_13 = FUNC_1(VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 if (FUNC_6(VAR_10 != VAR_11->type))
  return -VAR_1;

 FUNC_2(1, "vidioc_streamon fh=%p t=%d fh->res=%d dev->res=%d\n",
  VAR_11, VAR_10, VAR_11->resources, VAR_12->resources);

 if (FUNC_6(!FUNC_5(VAR_11, FUNC_3(VAR_11))))
  return -VAR_0;

 if (VAR_10 == VAR_4) {
  FUNC_0(VAR_12);
  FUNC_7(&VAR_12->v4l2_dev, 0, VAR_7, VAR_6, 1);
 }

 if (VAR_11->type == VAR_4) {
  VAR_13 = FUNC_8(&VAR_11->vb_vidq);
  VAR_12->vid_timeout_running = 1;
  FUNC_4(&VAR_12->vid_timeout, VAR_5 + (VAR_2 / 10));
 } else if (VAR_11->type == VAR_3) {
  VAR_13 = FUNC_8(&VAR_11->vb_vbiq);
  VAR_12->vbi_timeout_running = 1;
  FUNC_4(&VAR_12->vbi_timeout, VAR_5 + (VAR_2 / 10));
 }

 return VAR_13;
}
