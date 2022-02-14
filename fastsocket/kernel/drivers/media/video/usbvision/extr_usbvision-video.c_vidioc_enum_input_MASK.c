
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {int index; int audioset; int tuner; void* std; int name; void* type; } ;
struct usb_usbvision {int video_inputs; size_t dev_model; scalar_t__ have_tuner; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int video_channels; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_5 ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
    struct v4l2_input *VAR_8)
{
 struct usb_usbvision *VAR_9 = FUNC_1(VAR_6);
 int VAR_10;

 if (VAR_8->index >= VAR_9->video_inputs)
  return -VAR_0;
 if (VAR_9->have_tuner)
  VAR_10 = VAR_8->index;
 else
  VAR_10 = VAR_8->index + 1;



 switch (VAR_10) {
 case 0:
  if (VAR_5[VAR_9->dev_model].video_channels == 4) {
   FUNC_0(VAR_8->name, "White Video Input");
  } else {
   FUNC_0(VAR_8->name, "Television");
   VAR_8->type = VAR_3;
   VAR_8->audioset = 1;
   VAR_8->tuner = VAR_10;
   VAR_8->std = VAR_1;
  }
  break;
 case 1:
  VAR_8->type = VAR_2;
  if (VAR_5[VAR_9->dev_model].video_channels == 4)
   FUNC_0(VAR_8->name, "Green Video Input");
  else
   FUNC_0(VAR_8->name, "Composite Video Input");
  VAR_8->std = VAR_4;
  break;
 case 2:
  VAR_8->type = VAR_2;
  if (VAR_5[VAR_9->dev_model].video_channels == 4)
   FUNC_0(VAR_8->name, "Yellow Video Input");
  else
   FUNC_0(VAR_8->name, "S-Video Input");
  VAR_8->std = VAR_4;
  break;
 case 3:
  VAR_8->type = VAR_2;
  FUNC_0(VAR_8->name, "Red Video Input");
  VAR_8->std = VAR_4;
  break;
 }
 return 0;
}
