
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {int f_flags; } ;
struct au0828_fh {scalar_t__ type; int vb_vbiq; int vb_vidq; struct au0828_dev* dev; } ;
struct au0828_dev {int greenscreen_detected; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (struct au0828_dev*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4, struct v4l2_buffer *VAR_5)
{
 struct au0828_fh *VAR_6 = VAR_4;
 struct au0828_dev *VAR_7 = VAR_6->dev;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;



 if (VAR_7->greenscreen_detected == 1) {
  FUNC_2(1, "Detected green frame.  Resetting stream...\n");
  FUNC_0(VAR_7);
  VAR_7->greenscreen_detected = 0;
 }

 if (VAR_6->type == VAR_2)
  VAR_8 = FUNC_3(&VAR_6->vb_vidq, VAR_5, VAR_3->f_flags & VAR_0);
 else if (VAR_6->type == VAR_1)
  VAR_8 = FUNC_3(&VAR_6->vb_vbiq, VAR_5, VAR_3->f_flags & VAR_0);

 return VAR_8;
}
