
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixelformat; int priv; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct pwc_device {int vcompression; int vframes; int pixfmt; scalar_t__ iso_init; } ;
typedef int pixelformat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct pwc_device*,int ,int ,int,int,int) ;
 int FUNC_2 (struct pwc_device*,struct v4l2_format*) ;
 int FUNC_3 (struct pwc_device*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_4(struct pwc_device *VAR_10, struct v4l2_format *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_12 = FUNC_3(VAR_10, VAR_11);
 if (VAR_12<0)
  return VAR_12;

 VAR_16 = VAR_11->fmt.pix.pixelformat;
 VAR_15 = VAR_10->vcompression;
 VAR_14 = 0;
 VAR_13 = VAR_10->vframes;
 if (VAR_11->fmt.pix.priv) {
  VAR_15 = (VAR_11->fmt.pix.priv & VAR_5) >> VAR_6;
  VAR_14 = !!(VAR_11->fmt.pix.priv & VAR_4);
  VAR_13 = (VAR_11->fmt.pix.priv & VAR_2) >> VAR_3;
  if (VAR_13 == 0)
   VAR_13 = VAR_10->vframes;
 }

 if (VAR_16 != VAR_9 &&
     VAR_16 != VAR_7 &&
     VAR_16 != VAR_8)
  return -VAR_1;

 if (VAR_10->iso_init)
  return -VAR_0;

 FUNC_0("Trying to set format to: width=%d height=%d fps=%d "
   "compression=%d snapshot=%d format=%c%c%c%c\n",
   VAR_11->fmt.pix.width, VAR_11->fmt.pix.height, VAR_13,
   VAR_15, VAR_14,
   (VAR_16)&255,
   (VAR_16>>8)&255,
   (VAR_16>>16)&255,
   (VAR_16>>24)&255);

 VAR_12 = FUNC_1(VAR_10,
     VAR_11->fmt.pix.width,
     VAR_11->fmt.pix.height,
     VAR_13,
     VAR_15,
     VAR_14);

 FUNC_0("pwc_set_video_mode(), return=%d\n", VAR_12);

 if (VAR_12)
  return VAR_12;

 VAR_10->pixfmt = VAR_16;

 FUNC_2(VAR_10, VAR_11);

 return 0;

}
