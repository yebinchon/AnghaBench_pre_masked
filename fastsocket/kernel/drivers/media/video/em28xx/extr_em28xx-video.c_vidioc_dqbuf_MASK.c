
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {int f_flags; } ;
struct em28xx_fh {scalar_t__ type; int vb_vbiq; int vb_vidq; struct em28xx* dev; } ;
struct em28xx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_buffer *VAR_4)
{
 struct em28xx_fh *VAR_5 = VAR_3;
 struct em28xx *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_5->type == VAR_1)
  return FUNC_1(&VAR_5->vb_vidq, VAR_4, VAR_2->f_flags &
          VAR_0);
 else
  return FUNC_1(&VAR_5->vb_vbiq, VAR_4, VAR_2->f_flags &
          VAR_0);
}
