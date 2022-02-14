
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {int dummy; } ;
struct file {int dummy; } ;
struct em28xx_fh {scalar_t__ type; int vb_vbiq; int vb_vidq; struct em28xx* dev; } ;
struct em28xx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (int *,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
     struct v4l2_requestbuffers *VAR_3)
{
 struct em28xx_fh *VAR_4 = VAR_2;
 struct em28xx *VAR_5 = VAR_4->dev;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4->type == VAR_0)
  return FUNC_1(&VAR_4->vb_vidq, VAR_3);
 else
  return FUNC_1(&VAR_4->vb_vbiq, VAR_3);
}
