
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_window {int height; int width; int clipcount; int flags; int chromakey; int y; int x; } ;
struct video_picture {int dummy; } ;
struct video_mmap {int frame; int height; int width; int format; } ;
struct video_mbuf {int size; int frames; int* offsets; } ;
struct video_device {int dummy; } ;
struct video_channel {int channel; int name; int type; int tuners; int flags; } ;
struct video_capability {int channels; int minheight; int minwidth; int maxheight; int maxwidth; int audios; int type; int name; } ;
struct video_buffer {int size; int frames; int* offsets; } ;
struct usb_se401 {char* camera_name; int maxframesize; int framecount; TYPE_1__* frame; int streaming; int cheight; int cwidth; int * height; int * width; int sizes; int dev; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct video_mbuf*,int ,int) ;
 int FUNC_1 (struct usb_se401*) ;
 int FUNC_2 (struct usb_se401*,struct video_picture*) ;
 int FUNC_3 (struct usb_se401*,int) ;
 int FUNC_4 (struct usb_se401*) ;
 int FUNC_5 (struct usb_se401*,struct video_picture*) ;
 int FUNC_6 (struct usb_se401*,int ,int ) ;
 int FUNC_7 (struct usb_se401*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static long FUNC_9(struct file *VAR_10, unsigned int VAR_11, void *VAR_12)
{
 struct video_device *VAR_13 = VAR_10->private_data;
 struct usb_se401 *VAR_14 = (struct usb_se401 *)VAR_13;

 if (!VAR_14->dev)
  return -VAR_2;

 switch (VAR_11) {
 case 145:
 {
  struct video_capability *VAR_15 = VAR_12;
  FUNC_8(VAR_15->name, VAR_14->camera_name);
  VAR_15->type = VAR_9;
  VAR_15->channels = 1;
  VAR_15->audios = 0;
  VAR_15->maxwidth = VAR_14->width[VAR_14->sizes-1];
  VAR_15->maxheight = VAR_14->height[VAR_14->sizes-1];
  VAR_15->minwidth = VAR_14->width[0];
  VAR_15->minheight = VAR_14->height[0];
  return 0;
 }
 case 144:
 {
  struct video_channel *VAR_16 = VAR_12;

  if (VAR_16->channel != 0)
   return -VAR_1;
  VAR_16->flags = 0;
  VAR_16->tuners = 0;
  VAR_16->type = VAR_8;
  FUNC_8(VAR_16->name, "Camera");
  return 0;
 }
 case 134:
 {
  struct video_channel *VAR_17 = VAR_12;

  if (VAR_17->channel != 0)
   return -VAR_1;
  return 0;
 }
 case 140:
 {
  struct video_picture *VAR_18 = VAR_12;

  FUNC_2(VAR_14, VAR_18);
  return 0;
 }
 case 131:
 {
  struct video_picture *VAR_19 = VAR_12;

  if (FUNC_5(VAR_14, VAR_19))
   return -VAR_1;
  return 0;
 }
 case 129:
 {
  struct video_window *VAR_20 = VAR_12;

  if (VAR_20->flags)
   return -VAR_1;
  if (VAR_20->clipcount)
   return -VAR_1;
  if (FUNC_6(VAR_14, VAR_20->width, VAR_20->height))
   return -VAR_1;
  return 0;
 }
 case 138:
 {
  struct video_window *VAR_21 = VAR_12;

  VAR_21->x = 0;
  VAR_21->y = 0;
  VAR_21->chromakey = 0;
  VAR_21->flags = 0;
  VAR_21->clipcount = 0;
  VAR_21->width = VAR_14->cwidth;
  VAR_21->height = VAR_14->cheight;
  return 0;
 }
 case 141:
 {
  struct video_mbuf *VAR_22 = VAR_12;
  int VAR_23;

  FUNC_0(VAR_22, 0, sizeof(*VAR_22));
  VAR_22->size = VAR_6 * VAR_14->maxframesize;
  VAR_22->frames = VAR_6;
  for (VAR_23 = 0; VAR_23 < VAR_6; VAR_23++)
   VAR_22->offsets[VAR_23] = VAR_14->maxframesize * VAR_23;
  return 0;
 }
 case 136:
 {
  struct video_mmap *VAR_24 = VAR_12;

  if (VAR_24->format != VAR_7)
   return -VAR_1;
  if (VAR_24->frame >= VAR_6)
   return -VAR_1;
  if (VAR_14->frame[VAR_24->frame].grabstate != VAR_5)
   return -VAR_0;


  if (FUNC_6(VAR_14, VAR_24->width, VAR_24->height))
   return -VAR_1;
  VAR_14->frame[VAR_24->frame].grabstate = VAR_4;

  if (!VAR_14->streaming)
   FUNC_7(VAR_14);


  if (VAR_14->framecount == 0)
   FUNC_4(VAR_14);

  if (VAR_14->framecount % 20 == 1)
   FUNC_1(VAR_14);

  return 0;
 }
 case 128:
 {
  int *VAR_25 = VAR_12;
  int VAR_26 = 0;

  if (*VAR_25 < 0 || *VAR_25 >= VAR_6)
   return -VAR_1;

  VAR_26 = FUNC_3(VAR_14, *VAR_25);
  VAR_14->frame[*VAR_25].grabstate = VAR_5;
  return VAR_26;
 }
 case 143:
 {
  struct video_buffer *VAR_27 = VAR_12;

  FUNC_0(VAR_27, 0, sizeof(*VAR_27));
  return 0;
 }
 case 137:
  return 0;
 case 147:
  return -VAR_1;
 case 133:
  return -VAR_1;
 case 139:
 case 130:
  return -VAR_1;
 case 142:
 case 132:
  return -VAR_1;
 case 146:
 case 135:
  return -VAR_1;
 default:
  return -VAR_3;
 }

 return 0;
}
