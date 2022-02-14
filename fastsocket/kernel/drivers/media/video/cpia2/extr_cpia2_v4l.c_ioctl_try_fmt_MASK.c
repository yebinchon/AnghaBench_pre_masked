
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixelformat; int width; int height; scalar_t__ priv; int colorspace; int sizeimage; scalar_t__ bytesperline; int field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_2__ fmt; } ;
struct camera_data {int frame_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_6,struct camera_data *VAR_7)
{
 struct v4l2_format *VAR_8 = VAR_6;

 if (VAR_8->type != VAR_1)
        return -VAR_0;

 if (VAR_8->fmt.pix.pixelformat != VAR_5 &&
     VAR_8->fmt.pix.pixelformat != VAR_4)
        return -VAR_0;

 VAR_8->fmt.pix.field = VAR_3;
 VAR_8->fmt.pix.bytesperline = 0;
 VAR_8->fmt.pix.sizeimage = VAR_7->frame_size;
 VAR_8->fmt.pix.colorspace = VAR_2;
 VAR_8->fmt.pix.priv = 0;

 switch (FUNC_0(VAR_8->fmt.pix.width, VAR_8->fmt.pix.height)) {
 case 128:
  VAR_8->fmt.pix.width = 640;
  VAR_8->fmt.pix.height = 480;
  break;
 case 131:
  VAR_8->fmt.pix.width = 352;
  VAR_8->fmt.pix.height = 288;
  break;
 case 129:
  VAR_8->fmt.pix.width = 320;
  VAR_8->fmt.pix.height = 240;
  break;
 case 132:
  VAR_8->fmt.pix.width = 288;
  VAR_8->fmt.pix.height = 216;
  break;
 case 133:
  VAR_8->fmt.pix.width = 256;
  VAR_8->fmt.pix.height = 192;
  break;
 case 134:
  VAR_8->fmt.pix.width = 224;
  VAR_8->fmt.pix.height = 168;
  break;
 case 135:
  VAR_8->fmt.pix.width = 192;
  VAR_8->fmt.pix.height = 144;
  break;
 case 130:
 default:
  VAR_8->fmt.pix.width = 176;
  VAR_8->fmt.pix.height = 144;
  break;
 }

 return 0;
}
