
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct em28xx_fh {scalar_t__ type; int vb_vbiq; int vb_vidq; int resources; struct em28xx* dev; } ;
struct em28xx {int resources; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (char*,struct em28xx_fh*,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct em28xx_fh*,int ) ;
 int FUNC_3 (struct em28xx_fh*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6,
     enum v4l2_buf_type VAR_7)
{
 struct em28xx_fh *VAR_8 = VAR_6;
 struct em28xx *VAR_9 = VAR_8->dev;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_8->type != VAR_4 &&
     VAR_8->type != VAR_3)
  return -VAR_0;
 if (VAR_7 != VAR_8->type)
  return -VAR_0;

 FUNC_1("vidioc_streamoff fh=%p t=%d fh->res=%d dev->res=%d\n",
   VAR_8, VAR_7, VAR_8->resources, VAR_9->resources);

 if (VAR_8->type == VAR_4) {
  if (FUNC_2(VAR_8, VAR_2)) {
   FUNC_4(&VAR_8->vb_vidq);
   FUNC_3(VAR_8, VAR_2);
  }
 } else if (VAR_8->type == VAR_3) {
  if (FUNC_2(VAR_8, VAR_1)) {
   FUNC_4(&VAR_8->vb_vbiq);
   FUNC_3(VAR_8, VAR_1);
  }
 }

 return 0;
}
