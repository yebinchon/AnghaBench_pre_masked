
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_window {int height; int width; int clipcount; int flags; } ;
struct video_tuner {int mode; int tuner; int flags; int rangehigh; int rangelow; int name; } ;
struct video_picture {int colour; int hue; int brightness; int contrast; int whiteness; int depth; int palette; } ;
struct video_device {int dummy; } ;
struct video_channel {int channel; int name; int type; int tuners; int flags; } ;
struct video_capability {int type; int channels; int maxwidth; int maxheight; int minwidth; int minheight; int audios; int name; } ;
struct qcam_device {int brightness; int contrast; int whitebal; int bpp; int width; int height; int transfer_scale; int status; int lock; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct video_window*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qcam_device*) ;
 int FUNC_4 (int ,char*) ;
 struct video_device* FUNC_5 (struct file*) ;

__attribute__((used)) static long FUNC_6(struct file *VAR_9, unsigned int VAR_10, void *VAR_11)
{
 struct video_device *VAR_12 = FUNC_5(VAR_9);
 struct qcam_device *VAR_13=(struct qcam_device *)VAR_12;

 switch(VAR_10)
 {
  case 142:
  {
   struct video_capability *VAR_14 = VAR_11;
   FUNC_4(VAR_14->name, "Quickcam");
   VAR_14->type = VAR_6|VAR_8|VAR_7;
   VAR_14->channels = 1;
   VAR_14->audios = 0;
   VAR_14->maxwidth = 320;
   VAR_14->maxheight = 240;
   VAR_14->minwidth = 80;
   VAR_14->minheight = 60;
   return 0;
  }
  case 141:
  {
   struct video_channel *VAR_15 = VAR_11;
   if(VAR_15->channel!=0)
    return -VAR_0;
   VAR_15->flags=0;
   VAR_15->tuners=0;

   VAR_15->type = VAR_5;
   FUNC_4(VAR_15->name, "Camera");
   return 0;
  }
  case 133:
  {
   struct video_channel *VAR_16 = VAR_11;
   if(VAR_16->channel!=0)
    return -VAR_0;
   return 0;
  }
  case 137:
  {
   struct video_tuner *VAR_17 = VAR_11;
   if(VAR_17->tuner)
    return -VAR_0;
   FUNC_4(VAR_17->name, "Format");
   VAR_17->rangelow=0;
   VAR_17->rangehigh=0;
   VAR_17->flags= 0;
   VAR_17->mode = VAR_3;
   return 0;
  }
  case 129:
  {
   struct video_tuner *VAR_18 = VAR_11;
   if(VAR_18->tuner)
    return -VAR_0;
   if(VAR_18->mode!=VAR_3)
    return -VAR_0;
   return 0;
  }
  case 138:
  {
   struct video_picture *VAR_19 = VAR_11;
   VAR_19->colour=0x8000;
   VAR_19->hue=0x8000;
   VAR_19->brightness=VAR_13->brightness<<8;
   VAR_19->contrast=VAR_13->contrast<<8;
   VAR_19->whiteness=VAR_13->whitebal<<8;
   VAR_19->depth=VAR_13->bpp;
   VAR_19->palette=VAR_4;
   return 0;
  }
  case 130:
  {
   struct video_picture *VAR_20 = VAR_11;
   if(VAR_20->palette!=VAR_4)
    return -VAR_0;
   if(VAR_20->depth!=4 && VAR_20->depth!=6)
    return -VAR_0;





   VAR_13->brightness = VAR_20->brightness>>8;
   VAR_13->contrast = VAR_20->contrast>>8;
   VAR_13->whitebal = VAR_20->whiteness>>8;
   VAR_13->bpp = VAR_20->depth;

   FUNC_1(&VAR_13->lock);
   FUNC_3(VAR_13);
   FUNC_2(&VAR_13->lock);
   VAR_13->status |= VAR_2;

   return 0;
  }
  case 128:
  {
   struct video_window *VAR_21 = VAR_11;
   if(VAR_21->flags)
    return -VAR_0;
   if(VAR_21->clipcount)
    return -VAR_0;
   if(VAR_21->height<60||VAR_21->height>240)
    return -VAR_0;
   if(VAR_21->width<80||VAR_21->width>320)
    return -VAR_0;

   VAR_13->width = 320;
   VAR_13->height = 240;
   VAR_13->transfer_scale = 4;

   if(VAR_21->width>=160 && VAR_21->height>=120)
   {
    VAR_13->transfer_scale = 2;
   }
   if(VAR_21->width>=320 && VAR_21->height>=240)
   {
    VAR_13->width = 320;
    VAR_13->height = 240;
    VAR_13->transfer_scale = 1;
   }
   FUNC_1(&VAR_13->lock);
   FUNC_3(VAR_13);
   FUNC_2(&VAR_13->lock);



   VAR_13->status |= VAR_2;


   return 0;
  }
  case 136:
  {
   struct video_window *VAR_22 = VAR_11;
   FUNC_0(VAR_22, 0, sizeof(*VAR_22));
   VAR_22->width=VAR_13->width/VAR_13->transfer_scale;
   VAR_22->height=VAR_13->height/VAR_13->transfer_scale;
   return 0;
  }
  case 135:
   return 0;
  case 144:
  case 140:
  case 132:
  case 139:
  case 131:
  case 143:
  case 134:
   return -VAR_0;
  default:
   return -VAR_1;
 }
 return 0;
}
