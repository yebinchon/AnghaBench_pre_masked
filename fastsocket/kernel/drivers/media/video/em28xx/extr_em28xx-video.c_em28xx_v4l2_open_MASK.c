
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int vfl_type; } ;
struct file {struct em28xx_fh* private_data; } ;
struct em28xx_fh {int radio; int type; int vb_vbiq; int vb_vidq; struct em28xx* dev; } ;
struct em28xx_buffer {int dummy; } ;
struct em28xx {scalar_t__ users; int lock; int slock; scalar_t__ progressive; int v4l2_dev; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (char*) ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*) ;
 int FUNC_3 (struct em28xx*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct em28xx*) ;
 struct em28xx_fh* FUNC_6 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int * VAR_12 ;
 struct video_device* FUNC_8 (struct file*) ;
 int FUNC_9 (struct video_device*) ;
 struct em28xx* FUNC_10 (struct file*) ;
 int FUNC_11 (int *,int *,int *,int *,int,int,int,struct em28xx_fh*,int *) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_13)
{
 int VAR_14 = 0, VAR_15 = 0;
 struct video_device *VAR_16 = FUNC_8(VAR_13);
 struct em28xx *VAR_17 = FUNC_10(VAR_13);
 enum v4l2_buf_type VAR_18 = 0;
 struct em28xx_fh *VAR_19;
 enum v4l2_field VAR_20;

 switch (VAR_16->vfl_type) {
 case 130:
  VAR_18 = VAR_4;
  break;
 case 128:
  VAR_18 = VAR_3;
  break;
 case 129:
  VAR_15 = 1;
  break;
 }

 FUNC_4("open dev=%s type=%s users=%d\n",
   FUNC_9(VAR_16), VAR_12[VAR_18],
   VAR_17->users);


 VAR_19 = FUNC_6(sizeof(struct em28xx_fh), VAR_2);
 if (!VAR_19) {
  FUNC_0("em28xx-video.c: Out of memory?!\n");
  return -VAR_1;
 }
 VAR_19->dev = VAR_17;
 VAR_19->radio = VAR_15;
 VAR_19->type = VAR_18;
 VAR_13->private_data = VAR_19;

 if (VAR_19->type == VAR_4 && VAR_17->users == 0) {
  FUNC_3(VAR_17, VAR_0);
  FUNC_2(VAR_17);
  FUNC_1(VAR_17);




  FUNC_5(VAR_17);

 }
 if (VAR_19->radio) {
  FUNC_4("video_open: setting radio device\n");
  FUNC_7(&VAR_17->v4l2_dev, 0, VAR_11, VAR_10);
 }

 VAR_17->users++;

 if (VAR_17->progressive)
  VAR_20 = VAR_6;
 else
  VAR_20 = VAR_5;

 FUNC_11(&VAR_19->vb_vidq, &VAR_9,
        ((void*)0), &VAR_17->slock,
        VAR_4, VAR_20,
        sizeof(struct em28xx_buffer), VAR_19, &VAR_17->lock);

 FUNC_11(&VAR_19->vb_vbiq, &VAR_8,
        ((void*)0), &VAR_17->slock,
        VAR_3,
        VAR_7,
        sizeof(struct em28xx_buffer), VAR_19, &VAR_17->lock);

 return VAR_14;
}
