
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct au0828_fh {scalar_t__ type; int vb_vbiq; int vb_vidq; int resources; struct au0828_dev* dev; } ;
struct au0828_dev {int vbi_timeout; scalar_t__ vbi_timeout_running; int v4l2_dev; int vid_timeout; scalar_t__ vid_timeout_running; int resources; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int (* audio_setup ) (struct au0828_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct au0828_dev*) ;
 int FUNC_2 (struct au0828_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,struct au0828_fh*,int,int ,int ) ;
 int FUNC_5 (struct au0828_fh*,int ) ;
 int VAR_6 ;
 int FUNC_6 (struct au0828_dev*,int ) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_8, void *VAR_9,
       enum v4l2_buf_type VAR_10)
{
 struct au0828_fh *VAR_11 = VAR_9;
 struct au0828_dev *VAR_12 = VAR_11->dev;
 int VAR_13;
 int VAR_14;

 VAR_13 = FUNC_2(VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_11->type != VAR_5 &&
     VAR_11->type != VAR_4)
  return -VAR_3;
 if (VAR_10 != VAR_11->type)
  return -VAR_3;

 FUNC_4(1, "vidioc_streamoff fh=%p t=%d fh->res=%d dev->res=%d\n",
  VAR_11, VAR_10, VAR_11->resources, VAR_12->resources);

 if (VAR_11->type == VAR_5) {
  VAR_12->vid_timeout_running = 0;
  FUNC_3(&VAR_12->vid_timeout);

  FUNC_7(&VAR_12->v4l2_dev, 0, VAR_7, VAR_6, 0);
  VAR_13 = FUNC_1(VAR_12);
  if (VAR_13 != 0)
   return VAR_13;

  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
   if (FUNC_0(VAR_14).audio_setup == ((void*)0))
    continue;
   (FUNC_0(VAR_14).audio_setup)(VAR_12, 0);
  }

  FUNC_8(&VAR_11->vb_vidq);
  FUNC_5(VAR_11, VAR_2);
 } else if (VAR_11->type == VAR_4) {
  VAR_12->vbi_timeout_running = 0;
  FUNC_3(&VAR_12->vbi_timeout);

  FUNC_8(&VAR_11->vb_vbiq);
  FUNC_5(VAR_11, VAR_1);
 }

 return 0;
}
