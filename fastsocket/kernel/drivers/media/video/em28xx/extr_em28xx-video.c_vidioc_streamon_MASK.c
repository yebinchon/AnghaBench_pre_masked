
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct em28xx_fh {int type; int vb_vbiq; int vb_vidq; int resources; struct em28xx* dev; } ;
struct em28xx {int resources; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (char*,struct em28xx_fh*,int,int ,int ) ;
 int FUNC_2 (struct em28xx_fh*) ;
 int FUNC_3 (struct em28xx_fh*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_4, void *VAR_5,
     enum v4l2_buf_type VAR_6)
{
 struct em28xx_fh *VAR_7 = VAR_5;
 struct em28xx *VAR_8 = VAR_7->dev;
 int VAR_9 = -VAR_1;

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_4(VAR_6 != VAR_7->type))
  return -VAR_1;

 FUNC_1("vidioc_streamon fh=%p t=%d fh->res=%d dev->res=%d\n",
   VAR_7, VAR_6, VAR_7->resources, VAR_8->resources);

 if (FUNC_4(!FUNC_3(VAR_7, FUNC_2(VAR_7))))
  return -VAR_0;

 if (VAR_7->type == VAR_3)
  VAR_9 = FUNC_5(&VAR_7->vb_vidq);
 else if (VAR_7->type == VAR_2)
  VAR_9 = FUNC_5(&VAR_7->vb_vbiq);

 return VAR_9;
}
