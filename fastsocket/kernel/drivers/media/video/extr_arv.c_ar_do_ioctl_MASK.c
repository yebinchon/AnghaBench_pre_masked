
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_window {int height; int width; } ;
struct video_device {int dummy; } ;
struct video_capability {int minheight; int minwidth; int maxheight; int maxwidth; int audios; int channels; int type; int name; } ;
struct file {int dummy; } ;
struct ar_device {int lock; void* mode; int line_bytes; int frame_bytes; int size; int width; int height; TYPE_1__* vdev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,char*,...) ;
 long VAR_12 ;
 long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct video_window*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_19 ;
 struct video_device* FUNC_5 (struct file*) ;
 struct ar_device* FUNC_6 (struct video_device*) ;

__attribute__((used)) static long FUNC_7(struct file *VAR_20, unsigned int VAR_21, void *VAR_22)
{
 struct video_device *VAR_23 = FUNC_5(VAR_20);
 struct ar_device *VAR_24 = FUNC_6(VAR_23);

 FUNC_0(1, "ar_ioctl()\n");
 switch(VAR_21) {
 case 154:
 {
  struct video_capability *VAR_25 = VAR_22;
  FUNC_0(1, "VIDIOCGCAP:\n");
  FUNC_4(VAR_25->name, VAR_24->vdev->name);
  VAR_25->type = VAR_18;
  VAR_25->channels = 0;
  VAR_25->audios = 0;
  VAR_25->maxwidth = VAR_15;
  VAR_25->maxheight = VAR_14;
  VAR_25->minwidth = VAR_17;
  VAR_25->minheight = VAR_16;
  return 0;
 }
 case 152:
  FUNC_0(1, "VIDIOCGCHAN:\n");
  return 0;
 case 138:
  FUNC_0(1, "VIDIOCSCHAN:\n");
  return 0;
 case 146:
  FUNC_0(1, "VIDIOCGTUNER:\n");
  return 0;
 case 132:
  FUNC_0(1, "VIDIOCSTUNER:\n");
  return 0;
 case 148:
  FUNC_0(1, "VIDIOCGPICT:\n");
  return 0;
 case 134:
  FUNC_0(1, "VIDIOCSPICT:\n");
  return 0;
 case 156:
  FUNC_0(1, "VIDIOCCAPTURE:\n");
  return -VAR_12;
 case 143:
 {
  struct video_window *VAR_26 = VAR_22;
  FUNC_0(1, "VIDIOCGWIN:\n");
  FUNC_1(VAR_26, 0, sizeof(*VAR_26));
  VAR_26->width = VAR_24->width;
  VAR_26->height = VAR_24->height;
  return 0;
 }
 case 130:
 {
  struct video_window *VAR_27 = VAR_22;
  FUNC_0(1, "VIDIOCSWIN:\n");
  if ((VAR_27->width != VAR_11 || VAR_27->height != VAR_3) &&
      (VAR_27->width != VAR_10 || VAR_27->height != VAR_2))
    return -VAR_12;

  FUNC_2(&VAR_24->lock);
  VAR_24->width = VAR_27->width;
  VAR_24->height = VAR_27->height;
  if (VAR_24->width == VAR_11) {
   VAR_24->size = VAR_9;
   VAR_24->frame_bytes = VAR_1;
   VAR_24->line_bytes = VAR_5;
   if (VAR_19)
    VAR_24->mode = VAR_6;
   else
    VAR_24->mode = VAR_7;
  } else {
   VAR_24->size = VAR_8;
   VAR_24->frame_bytes = VAR_0;
   VAR_24->line_bytes = VAR_4;
   VAR_24->mode = VAR_6;
  }
  FUNC_3(&VAR_24->lock);
  return 0;
 }
 case 151:
  FUNC_0(1, "VIDIOCGFBUF:\n");
  return -VAR_12;
 case 137:
  FUNC_0(1, "VIDIOCSFBUF:\n");
  return -VAR_12;
 case 142:
  FUNC_0(1, "VIDIOCKEY:\n");
  return 0;
 case 150:
  FUNC_0(1, "VIDIOCGFREQ:\n");
  return -VAR_12;
 case 136:
  FUNC_0(1, "VIDIOCSFREQ:\n");
  return -VAR_12;
 case 155:
  FUNC_0(1, "VIDIOCGAUDIO:\n");
  return -VAR_12;
 case 140:
  FUNC_0(1, "VIDIOCSAUDIO:\n");
  return -VAR_12;
 case 128:
  FUNC_0(1, "VIDIOCSYNC:\n");
  return -VAR_12;
 case 141:
  FUNC_0(1, "VIDIOCMCAPTURE:\n");
  return -VAR_12;
 case 149:
  FUNC_0(1, "VIDIOCGMBUF:\n");
  return -VAR_12;
 case 145:
  FUNC_0(1, "VIDIOCGUNIT:\n");
  return -VAR_12;
 case 153:
  FUNC_0(1, "VIDIOCGCAPTURE:\n");
  return -VAR_12;
 case 139:
  FUNC_0(1, "VIDIOCSCAPTURE:\n");
  return -VAR_12;
 case 133:
  FUNC_0(1, "VIDIOCSPLAYMODE:\n");
  return -VAR_12;
 case 129:
  FUNC_0(1, "VIDIOCSWRITEMODE:\n");
  return -VAR_12;
 case 147:
  FUNC_0(1, "VIDIOCGPLAYINFO:\n");
  return -VAR_12;
 case 135:
  FUNC_0(1, "VIDIOCSMICROCODE:\n");
  return -VAR_12;
 case 144:
  FUNC_0(1, "VIDIOCGVBIFMT:\n");
  return -VAR_12;
 case 131:
  FUNC_0(1, "VIDIOCSVBIFMT:\n");
  return -VAR_12;
 default:
  FUNC_0(1, "Unknown ioctl(0x%08x)\n", VAR_21);
  return -VAR_13;
 }
 return 0;
}
