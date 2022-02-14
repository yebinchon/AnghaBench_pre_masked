
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int vfl_type; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {int radio; int type; int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx_buffer {int dummy; } ;
struct TYPE_4__ {int slock; } ;
struct TYPE_3__ {int slock; } ;
struct cx231xx {scalar_t__ users; scalar_t__ model; int video_input; int lock; TYPE_2__ vbi_mode; TYPE_1__ video_mode; int height; int width; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int FUNC_0 (struct cx231xx*,int ,int ) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct cx231xx*,int ,int ) ;
 int FUNC_4 (struct cx231xx*,int ) ;
 int FUNC_5 (struct cx231xx*,int ) ;
 int FUNC_6 (struct cx231xx*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (char*,...) ;
 struct cx231xx_fh* FUNC_8 (int,int ) ;
 int FUNC_9 (struct cx231xx*) ;
 int FUNC_10 (struct cx231xx*) ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 struct video_device* FUNC_11 (struct file*) ;
 int FUNC_12 (struct video_device*) ;
 struct cx231xx* FUNC_13 (struct file*) ;
 int FUNC_14 (int *,int *,int *,int *,int,int ,int,struct cx231xx_fh*,int *) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_18)
{
 int VAR_19 = 0, VAR_20 = 0;
 struct video_device *VAR_21 = FUNC_11(VAR_18);
 struct cx231xx *VAR_22 = FUNC_13(VAR_18);
 struct cx231xx_fh *VAR_23;
 enum v4l2_buf_type VAR_24 = 0;

 switch (VAR_21->vfl_type) {
 case 130:
  VAR_24 = VAR_10;
  break;
 case 128:
  VAR_24 = VAR_9;
  break;
 case 129:
  VAR_20 = 1;
  break;
 }

 FUNC_7("open dev=%s type=%s users=%d\n",
    FUNC_12(VAR_21), VAR_17[VAR_24],
    VAR_22->users);
 VAR_23 = FUNC_8(sizeof(struct cx231xx_fh), VAR_5);
 if (!VAR_23) {
  FUNC_2("cx231xx-video.c: Out of memory?!\n");
  return -VAR_4;
 }
 VAR_23->dev = VAR_22;
 VAR_23->radio = VAR_20;
 VAR_23->type = VAR_24;
 VAR_18->private_data = VAR_23;

 if (VAR_23->type == VAR_10 && VAR_22->users == 0) {
  VAR_22->width = FUNC_10(VAR_22);
  VAR_22->height = FUNC_9(VAR_22);


  if (VAR_22->model == VAR_1 ||
      VAR_22->model == VAR_2)
   FUNC_5(VAR_22,
     VAR_8);
  else
   FUNC_5(VAR_22, VAR_7);






  FUNC_6(VAR_22);



  FUNC_1(VAR_22);


  VAR_22->video_input = VAR_22->video_input > 2 ? 2 : VAR_22->video_input;

 }
 if (VAR_23->radio) {
  FUNC_7("video_open: setting radio device\n");



  FUNC_0(VAR_22, VAR_16, VAR_15);
 }

 VAR_22->users++;

 if (VAR_23->type == VAR_10)
  FUNC_14(&VAR_23->vb_vidq, &VAR_14,
         ((void*)0), &VAR_22->video_mode.slock,
         VAR_23->type, VAR_11,
         sizeof(struct cx231xx_buffer),
         VAR_23, &VAR_22->lock);
 if (VAR_23->type == VAR_9) {


  if (VAR_22->model != VAR_1 &&
      VAR_22->model != VAR_2)
   FUNC_3(VAR_22, VAR_6, 0);

  FUNC_14(&VAR_23->vb_vidq, &VAR_13,
         ((void*)0), &VAR_22->vbi_mode.slock,
         VAR_23->type, VAR_12,
         sizeof(struct cx231xx_buffer),
         VAR_23, &VAR_22->lock);
 }

 return VAR_19;
}
