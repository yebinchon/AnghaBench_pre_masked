
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pixelformat; int width; int height; int bytesperline; scalar_t__ priv; int colorspace; int sizeimage; int field; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_4__ fmt; } ;
struct uvc_streaming_control {int bmHint; int dwMaxVideoFrameSize; int dwFrameInterval; int bFrameIndex; int bFormatIndex; } ;
struct TYPE_6__ {int dwMaxVideoFrameSize; } ;
struct uvc_streaming {scalar_t__ type; unsigned int nformats; int mutex; TYPE_2__ ctrl; TYPE_1__* dev; struct uvc_format* format; } ;
struct uvc_frame {int wWidth; int wHeight; int dwDefaultFrameInterval; int bFrameIndex; } ;
struct uvc_format {scalar_t__ fcc; unsigned int nframes; int bpp; int colorspace; int index; struct uvc_frame* frame; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_5__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uvc_streaming_control*,int ,int) ;
 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct uvc_streaming*,struct uvc_streaming_control*) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (struct uvc_frame*,int) ;

__attribute__((used)) static int FUNC_7(struct uvc_streaming *VAR_4,
 struct v4l2_format *VAR_5, struct uvc_streaming_control *VAR_6,
 struct uvc_format **VAR_7, struct uvc_frame **VAR_8)
{
 struct uvc_format *VAR_9 = ((void*)0);
 struct uvc_frame *VAR_10 = ((void*)0);
 __u16 VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15;
 __u32 VAR_16;
 int VAR_17 = 0;
 __u8 *VAR_18;

 if (VAR_5->type != VAR_4->type)
  return -VAR_0;

 VAR_18 = (__u8 *)&VAR_5->fmt.pix.pixelformat;
 FUNC_5(VAR_2, "Trying format 0x%08x (%c%c%c%c): %ux%u.\n",
   VAR_5->fmt.pix.pixelformat,
   VAR_18[0], VAR_18[1], VAR_18[2], VAR_18[3],
   VAR_5->fmt.pix.width, VAR_5->fmt.pix.height);


 for (VAR_15 = 0; VAR_15 < VAR_4->nformats; ++VAR_15) {
  VAR_9 = &VAR_4->format[VAR_15];
  if (VAR_9->fcc == VAR_5->fmt.pix.pixelformat)
   break;
 }

 if (VAR_9 == ((void*)0) || VAR_9->fcc != VAR_5->fmt.pix.pixelformat) {
  FUNC_5(VAR_2, "Unsupported format 0x%08x.\n",
    VAR_5->fmt.pix.pixelformat);
  return -VAR_0;
 }





 VAR_11 = VAR_5->fmt.pix.width;
 VAR_12 = VAR_5->fmt.pix.height;
 VAR_14 = (unsigned int)-1;

 for (VAR_15 = 0; VAR_15 < VAR_9->nframes; ++VAR_15) {
  __u16 VAR_19 = VAR_9->frame[VAR_15].wWidth;
  __u16 VAR_20 = VAR_9->frame[VAR_15].wHeight;

  VAR_13 = FUNC_1(VAR_19, VAR_11) * FUNC_1(VAR_20, VAR_12);
  VAR_13 = VAR_19*VAR_20 + VAR_11*VAR_12 - 2*VAR_13;
  if (VAR_13 < VAR_14) {
   VAR_14 = VAR_13;
   VAR_10 = &VAR_9->frame[VAR_15];
  }

  if (VAR_14 == 0)
   break;
 }

 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_2, "Unsupported size %ux%u.\n",
    VAR_5->fmt.pix.width, VAR_5->fmt.pix.height);
  return -VAR_0;
 }


 VAR_16 = VAR_10->dwDefaultFrameInterval;
 FUNC_5(VAR_2, "Using default frame interval %u.%u us "
  "(%u.%u fps).\n", VAR_16/10, VAR_16%10, 10000000/VAR_16,
  (100000000/VAR_16)%10);


 FUNC_0(VAR_6, 0, sizeof *VAR_6);
 VAR_6->bmHint = 1;
 VAR_6->bFormatIndex = VAR_9->index;
 VAR_6->bFrameIndex = VAR_10->bFrameIndex;
 VAR_6->dwFrameInterval = FUNC_6(VAR_10, VAR_16);
 FUNC_2(&VAR_4->mutex);
 if (VAR_4->dev->quirks & VAR_1)
  VAR_6->dwMaxVideoFrameSize =
   VAR_4->ctrl.dwMaxVideoFrameSize;


 VAR_17 = FUNC_4(VAR_4, VAR_6);
 FUNC_3(&VAR_4->mutex);
 if (VAR_17 < 0)
  goto done;

 VAR_5->fmt.pix.width = VAR_10->wWidth;
 VAR_5->fmt.pix.height = VAR_10->wHeight;
 VAR_5->fmt.pix.field = VAR_3;
 VAR_5->fmt.pix.bytesperline = VAR_9->bpp * VAR_10->wWidth / 8;
 VAR_5->fmt.pix.sizeimage = VAR_6->dwMaxVideoFrameSize;
 VAR_5->fmt.pix.colorspace = VAR_9->colorspace;
 VAR_5->fmt.pix.priv = 0;

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_9;
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_10;

done:
 return VAR_17;
}
