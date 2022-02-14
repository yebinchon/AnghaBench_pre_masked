
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_window {int height; int width; int clipcount; int flags; } ;
struct video_tuner {int flags; int mode; int tuner; int rangehigh; int rangelow; int name; } ;
struct video_picture {int depth; int brightness; int hue; int colour; int contrast; int palette; } ;
struct video_device {int dummy; } ;
struct video_channel {int channel; int tuners; int name; int type; int flags; } ;
struct video_capability {int type; int channels; int maxwidth; int maxheight; int minwidth; int minheight; int audios; int name; } ;
struct pms_device {int width; int height; int lock; struct video_picture picture; } ;
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
 int VAR_9 ;
 int FUNC_0 (struct video_window*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_10 ;
 int FUNC_13 (int ,char*) ;
 struct video_device* FUNC_14 (struct file*) ;

__attribute__((used)) static long FUNC_15(struct file *VAR_11, unsigned int VAR_12, void *VAR_13)
{
 struct video_device *VAR_14 = FUNC_14(VAR_11);
 struct pms_device *VAR_15=(struct pms_device *)VAR_14;

 switch(VAR_12)
 {
  case 142:
  {
   struct video_capability *VAR_16 = VAR_13;
   FUNC_13(VAR_16->name, "Mediavision PMS");
   VAR_16->type = VAR_8|VAR_9;
   VAR_16->channels = 4;
   VAR_16->audios = 0;
   VAR_16->maxwidth = 640;
   VAR_16->maxheight = 480;
   VAR_16->minwidth = 16;
   VAR_16->minheight = 16;
   return 0;
  }
  case 141:
  {
   struct video_channel *VAR_17 = VAR_13;
   if(VAR_17->channel<0 || VAR_17->channel>3)
    return -VAR_0;
   VAR_17->flags=0;
   VAR_17->tuners=1;

   VAR_17->type = VAR_7;
   switch(VAR_17->channel)
   {
    case 0:
     FUNC_13(VAR_17->name, "Composite");break;
    case 1:
     FUNC_13(VAR_17->name, "SVideo");break;
    case 2:
     FUNC_13(VAR_17->name, "Composite(VCR)");break;
    case 3:
     FUNC_13(VAR_17->name, "SVideo(VCR)");break;
   }
   return 0;
  }
  case 133:
  {
   struct video_channel *VAR_18 = VAR_13;
   if(VAR_18->channel<0 || VAR_18->channel>3)
    return -VAR_0;
   FUNC_1(&VAR_15->lock);
   FUNC_12(VAR_18->channel&1);
   FUNC_11(VAR_18->channel>>1);
   FUNC_2(&VAR_15->lock);
   return 0;
  }
  case 137:
  {
   struct video_tuner *VAR_19 = VAR_13;
   if(VAR_19->tuner)
    return -VAR_0;
   FUNC_13(VAR_19->name, "Format");
   VAR_19->rangelow=0;
   VAR_19->rangehigh=0;
   VAR_19->flags= VAR_5|VAR_4|VAR_6;
   switch(VAR_10)
   {
    case 0:
     VAR_19->mode = 148;
     break;
    case 1:
     VAR_19->mode = 147;
     break;
    case 2:
     VAR_19->mode = 146;
     break;
    case 3:
     VAR_19->mode = 145;
     break;
   }
   return 0;
  }
  case 129:
  {
   struct video_tuner *VAR_20 = VAR_13;
   if(VAR_20->tuner)
    return -VAR_0;
   FUNC_1(&VAR_15->lock);
   switch(VAR_20->mode)
   {
    case 148:
     FUNC_7(25);
     FUNC_10(0);
     FUNC_6(0);
     break;
    case 147:
     FUNC_7(30);
     FUNC_10(0);
     FUNC_6(1);
     break;
    case 146:
     FUNC_7(25);
     FUNC_10(0);
     FUNC_6(2);
     break;
    case 145:
     FUNC_7(25);
     FUNC_10(1);
     FUNC_6(2);
     break;
    default:
     FUNC_2(&VAR_15->lock);
     return -VAR_0;
   }
   FUNC_2(&VAR_15->lock);
   return 0;
  }
  case 138:
  {
   struct video_picture *VAR_21 = VAR_13;
   *VAR_21 = VAR_15->picture;
   return 0;
  }
  case 130:
  {
   struct video_picture *VAR_22 = VAR_13;
   if(!((VAR_22->palette==VAR_3 && VAR_22->depth==16)
       ||(VAR_22->palette==VAR_2 && VAR_22->depth==15)))
    return -VAR_0;
   VAR_15->picture= *VAR_22;





   FUNC_1(&VAR_15->lock);
   FUNC_3(VAR_22->brightness>>8);
   FUNC_8(VAR_22->hue>>8);
   FUNC_4(VAR_22->colour>>8);
   FUNC_5(VAR_22->contrast>>8);
   FUNC_2(&VAR_15->lock);
   return 0;
  }
  case 128:
  {
   struct video_window *VAR_23 = VAR_13;
   if(VAR_23->flags)
    return -VAR_0;
   if(VAR_23->clipcount)
    return -VAR_0;
   if(VAR_23->height<16||VAR_23->height>480)
    return -VAR_0;
   if(VAR_23->width<16||VAR_23->width>640)
    return -VAR_0;
   VAR_15->width=VAR_23->width;
   VAR_15->height=VAR_23->height;
   FUNC_1(&VAR_15->lock);
   FUNC_9(VAR_15->width, VAR_15->height);
   FUNC_2(&VAR_15->lock);
   return 0;
  }
  case 136:
  {
   struct video_window *VAR_24 = VAR_13;
   FUNC_0(VAR_24,0,sizeof(*VAR_24));
   VAR_24->width=VAR_15->width;
   VAR_24->height=VAR_15->height;
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
