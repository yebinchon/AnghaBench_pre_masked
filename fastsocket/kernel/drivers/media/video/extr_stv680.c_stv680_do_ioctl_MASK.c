
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_window {int height; int width; int clipcount; int flags; int chromakey; int y; int x; } ;
struct video_picture {int dummy; } ;
struct video_mmap {int format; int frame; int height; int width; } ;
struct video_mbuf {int size; int frames; int* offsets; } ;
struct video_device {int dummy; } ;
struct video_channel {int channel; int name; int type; int tuners; int flags; } ;
struct video_capability {int channels; int maxwidth; int maxheight; int minwidth; int minheight; int audios; int type; int name; } ;
struct video_buffer {int size; int frames; int* offsets; } ;
struct usb_stv {char* camera_name; int maxwidth; int maxheight; int maxframesize; TYPE_1__* frame; int streaming; int vwidth; int vheight; int udev; } ;
struct file {struct video_device* private_data; } ;
struct TYPE_2__ {int grabstate; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct video_mbuf*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct usb_stv*,struct video_picture*) ;
 int FUNC_4 (struct usb_stv*,int) ;
 int FUNC_5 (struct usb_stv*,struct video_picture*) ;
 int FUNC_6 (struct usb_stv*,int ,int ) ;
 int FUNC_7 (struct usb_stv*) ;
 int VAR_12 ;
 int VAR_13 ;
 struct usb_stv* FUNC_8 (struct video_device*) ;

__attribute__((used)) static long FUNC_9(struct file *VAR_14, unsigned int VAR_15, void *VAR_16)
{
 struct video_device *VAR_17 = VAR_14->private_data;
 struct usb_stv *VAR_18 = FUNC_8(VAR_17);

 if (!VAR_18->udev)
  return -VAR_2;

 switch (VAR_15) {
 case 145:{
   struct video_capability *VAR_19 = VAR_16;

   FUNC_2 (VAR_19->name, VAR_18->camera_name);
   VAR_19->type = VAR_11;
   VAR_19->channels = 1;
   VAR_19->audios = 0;
   VAR_19->maxwidth = VAR_18->maxwidth;
   VAR_19->maxheight = VAR_18->maxheight;
   VAR_19->minwidth = VAR_18->maxwidth / 2;
   VAR_19->minheight = VAR_18->maxheight / 2;
   return 0;
  }
 case 144:{
   struct video_channel *VAR_20 = VAR_16;

   if (VAR_20->channel != 0)
    return -VAR_1;
   VAR_20->flags = 0;
   VAR_20->tuners = 0;
   VAR_20->type = VAR_10;
   FUNC_2 (VAR_20->name, "STV Camera");
   return 0;
  }
 case 134:{
   struct video_channel *VAR_21 = VAR_16;
   if (VAR_21->channel != 0)
    return -VAR_1;
   return 0;
  }
 case 140:{
   struct video_picture *VAR_22 = VAR_16;

   FUNC_3 (VAR_18, VAR_22);
   return 0;
  }
 case 131:{
   struct video_picture *VAR_23 = VAR_16;

   if (FUNC_5 (VAR_18, VAR_23))
    return -VAR_1;
   return 0;
  }
 case 129:{
   struct video_window *VAR_24 = VAR_16;

   if (VAR_24->flags)
    return -VAR_1;
   if (VAR_24->clipcount)
    return -VAR_1;
   if (VAR_24->width != VAR_18->vwidth) {
    if (FUNC_6 (VAR_18, VAR_24->width, VAR_24->height)) {
     FUNC_0 (2, "STV(e): failed (from user) set size in VIDIOCSWIN");
     return -VAR_1;
    }
   }
   return 0;
  }
 case 138:{
   struct video_window *VAR_25 = VAR_16;

   VAR_25->x = 0;
   VAR_25->y = 0;
   VAR_25->chromakey = 0;
   VAR_25->flags = 0;
   VAR_25->clipcount = 0;
   VAR_25->width = VAR_18->vwidth;
   VAR_25->height = VAR_18->vheight;
   return 0;
  }
 case 141:{
   struct video_mbuf *VAR_26 = VAR_16;
   int VAR_27;

   FUNC_1 (VAR_26, 0, sizeof (*VAR_26));
   VAR_26->size = VAR_8 * VAR_18->maxframesize;
   VAR_26->frames = VAR_8;
   for (VAR_27 = 0; VAR_27 < VAR_8; VAR_27++)
    VAR_26->offsets[VAR_27] = VAR_18->maxframesize * VAR_27;
   return 0;
  }
 case 136:{
   struct video_mmap *VAR_28 = VAR_16;

   if (VAR_28->format != VAR_9) {
    FUNC_0 (2, "STV(i): VIDIOCMCAPTURE vm.format (%i) != VIDEO_PALETTE (%i)",
     VAR_28->format, VAR_9);
    if ((VAR_28->format == 3) && (VAR_13 == 0)) {
     FUNC_0 (2, "STV(i): VIDIOCMCAPTURE swapRGB is (auto) ON");

     VAR_12 = 1;
    }
    return -VAR_1;
   }
   if (VAR_28->frame >= VAR_8) {
    FUNC_0 (2, "STV(e): VIDIOCMCAPTURE vm.frame > NUMFRAMES");
    return -VAR_1;
   }
   if ((VAR_18->frame[VAR_28->frame].grabstate == VAR_4)
       || (VAR_18->frame[VAR_28->frame].grabstate == VAR_5)) {
    FUNC_0 (2, "STV(e): VIDIOCMCAPTURE grabstate (%i) error",
     VAR_18->frame[VAR_28->frame].grabstate);
    return -VAR_0;
   }

   if (VAR_18->vwidth != VAR_28->width) {
    if (FUNC_6 (VAR_18, VAR_28->width, VAR_28->height)) {
     FUNC_0 (2, "STV(e): VIDIOCMCAPTURE set_size failed");
     return -VAR_1;
    }
   }
   VAR_18->frame[VAR_28->frame].grabstate = VAR_6;

   if (!VAR_18->streaming)
    FUNC_7 (VAR_18);

   return 0;
  }
 case 128:{
   int *VAR_29 = VAR_16;
   int VAR_30 = 0;

   if (*VAR_29 < 0 || *VAR_29 >= VAR_8) {
    FUNC_0 (2, "STV(e): Bad frame # in VIDIOCSYNC");
    return -VAR_1;
   }
   VAR_30 = FUNC_4 (VAR_18, *VAR_29);
   VAR_18->frame[*VAR_29].grabstate = VAR_7;
   return VAR_30;
  }
 case 143:{
   struct video_buffer *VAR_31 = VAR_16;

   FUNC_1 (VAR_31, 0, sizeof (*VAR_31));
   return 0;
  }
 case 137:
  return 0;
 case 147:
  {
   FUNC_0 (2, "STV(e): VIDIOCCAPTURE failed");
   return -VAR_1;
  }
 case 133:
 case 139:
 case 130:
 case 142:
 case 132:
 case 146:
 case 135:
  return -VAR_1;
 default:
  return -VAR_3;
 }

 return 0;
}
