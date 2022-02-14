
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format {int dummy; } ;
struct TYPE_6__ {int width; int height; int pixelformat; int bytesperline; int sizeimage; int field; } ;
struct TYPE_5__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct pwc_raw_frame {int dummy; } ;
struct TYPE_4__ {int x; int y; } ;
struct pwc_device {scalar_t__ pixfmt; int vbandlength; int frame_size; int type; TYPE_1__ view; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_3(const struct pwc_device *VAR_4, struct v4l2_format *VAR_5)
{
 FUNC_2(&VAR_5->fmt.pix, 0, sizeof(struct v4l2_pix_format));
 VAR_5->fmt.pix.width = VAR_4->view.x;
 VAR_5->fmt.pix.height = VAR_4->view.y;
 VAR_5->fmt.pix.field = VAR_0;
 if (VAR_4->pixfmt == VAR_3) {
  VAR_5->fmt.pix.pixelformat = VAR_3;
  VAR_5->fmt.pix.bytesperline = (VAR_5->fmt.pix.width * 3)/2;
  VAR_5->fmt.pix.sizeimage = VAR_5->fmt.pix.height * VAR_5->fmt.pix.bytesperline;
 } else {

  VAR_5->fmt.pix.bytesperline = VAR_4->vbandlength/4;
  VAR_5->fmt.pix.sizeimage = VAR_4->frame_size + sizeof(struct pwc_raw_frame);
  if (FUNC_0(VAR_4->type))
   VAR_5->fmt.pix.pixelformat = VAR_1;
  else
   VAR_5->fmt.pix.pixelformat = VAR_2;
 }
 FUNC_1("pwc_vidioc_fill_fmt() "
   "width=%d, height=%d, bytesperline=%d, sizeimage=%d, pixelformat=%c%c%c%c\n",
   VAR_5->fmt.pix.width,
   VAR_5->fmt.pix.height,
   VAR_5->fmt.pix.bytesperline,
   VAR_5->fmt.pix.sizeimage,
   (VAR_5->fmt.pix.pixelformat)&255,
   (VAR_5->fmt.pix.pixelformat>>8)&255,
   (VAR_5->fmt.pix.pixelformat>>16)&255,
   (VAR_5->fmt.pix.pixelformat>>24)&255);
}
