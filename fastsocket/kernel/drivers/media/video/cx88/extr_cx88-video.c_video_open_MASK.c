
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {int vfl_type; } ;
struct file {struct cx8800_fh* private_data; } ;
struct TYPE_5__ {scalar_t__ audioroute; int gpio2; int gpio1; int gpio0; int gpio3; } ;
struct TYPE_6__ {scalar_t__ audio_chip; TYPE_2__ radio; } ;
struct cx88_core {int lock; int users; int tvaudio; TYPE_3__ board; } ;
struct cx88_buffer {int dummy; } ;
struct cx8800_fh {int radio; int type; int width; int height; int vbiq; int vidq; int fmt; struct cx8800_dev* dev; } ;
struct cx8800_dev {int slock; TYPE_1__* pci; struct cx88_core* core; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int VAR_15 ;
 int FUNC_1 (struct cx88_core*,int ,int ,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct cx88_core*,int ,int) ;
 int FUNC_3 (struct cx88_core*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ) ;
 struct cx8800_fh* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_10 (int) ;
 int * VAR_21 ;
 struct video_device* FUNC_11 (struct file*) ;
 int FUNC_12 (struct video_device*) ;
 struct cx8800_dev* FUNC_13 (struct file*) ;
 int FUNC_14 (int *,int *,int *,int *,int,int ,int,struct cx8800_fh*,int *) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_22)
{
 struct video_device *VAR_23 = FUNC_11(VAR_22);
 struct cx8800_dev *VAR_24 = FUNC_13(VAR_22);
 struct cx88_core *VAR_25 = VAR_24->core;
 struct cx8800_fh *VAR_26;
 enum v4l2_buf_type VAR_27 = 0;
 int VAR_28 = 0;

 switch (VAR_23->vfl_type) {
 case 130:
  VAR_27 = VAR_7;
  break;
 case 128:
  VAR_27 = VAR_6;
  break;
 case 129:
  VAR_28 = 1;
  break;
 }

 FUNC_5(1, "open dev=%s radio=%d type=%s\n",
  FUNC_12(VAR_23), VAR_28, VAR_21[VAR_27]);


 VAR_26 = FUNC_7(sizeof(*VAR_26),VAR_1);
 if (FUNC_10(!VAR_26))
  return -VAR_0;

 VAR_22->private_data = VAR_26;
 VAR_26->dev = VAR_24;
 VAR_26->radio = VAR_28;
 VAR_26->type = VAR_27;
 VAR_26->width = 320;
 VAR_26->height = 240;
 VAR_26->fmt = FUNC_6(VAR_11);

 FUNC_8(&VAR_25->lock);

 FUNC_14(&VAR_26->vidq, &VAR_17,
       &VAR_24->pci->dev, &VAR_24->slock,
       VAR_7,
       VAR_8,
       sizeof(struct cx88_buffer),
       VAR_26, ((void*)0));
 FUNC_14(&VAR_26->vbiq, &VAR_16,
       &VAR_24->pci->dev, &VAR_24->slock,
       VAR_6,
       VAR_9,
       sizeof(struct cx88_buffer),
       VAR_26, ((void*)0));

 if (VAR_26->radio) {
  FUNC_5(1,"video_open: setting radio device\n");
  FUNC_4(VAR_5, VAR_25->board.radio.gpio3);
  FUNC_4(VAR_2, VAR_25->board.radio.gpio0);
  FUNC_4(VAR_3, VAR_25->board.radio.gpio1);
  FUNC_4(VAR_4, VAR_25->board.radio.gpio2);
  if (VAR_25->board.radio.audioroute) {
   if(VAR_25->board.audio_chip &&
    VAR_25->board.audio_chip == VAR_10) {
    FUNC_1(VAR_25, VAR_15, VAR_19,
     VAR_25->board.radio.audioroute, 0, 0);
   }

   VAR_25->tvaudio = VAR_14;
   FUNC_3(VAR_25);
  } else {

   VAR_25->tvaudio = VAR_13;
   FUNC_3(VAR_25);
   FUNC_2(VAR_25,VAR_12,1);
  }
  FUNC_1(VAR_25, VAR_20, VAR_18);
 }

 FUNC_0(&VAR_25->users);
 FUNC_9(&VAR_25->lock);

 return 0;
}
