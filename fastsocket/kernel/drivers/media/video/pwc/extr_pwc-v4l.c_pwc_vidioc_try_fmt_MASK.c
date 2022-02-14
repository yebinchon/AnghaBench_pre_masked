
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pixelformat; scalar_t__ width; scalar_t__ height; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_3__ fmt; } ;
struct TYPE_8__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_5__ {scalar_t__ x; scalar_t__ y; } ;
struct pwc_device {TYPE_4__ view_min; TYPE_1__ view_max; int type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;




__attribute__((used)) static int FUNC_3(struct pwc_device *VAR_2, struct v4l2_format *VAR_3)
{
 if (VAR_3->type != VAR_1) {
  FUNC_2("Bad video type must be V4L2_BUF_TYPE_VIDEO_CAPTURE\n");
  return -VAR_0;
 }

 switch (VAR_3->fmt.pix.pixelformat) {
  case 128:
   break;
  case 130:
   if (FUNC_1(VAR_2->type)) {
    FUNC_2("codec1 is only supported for old pwc webcam\n");
    return -VAR_0;
   }
   break;
  case 129:
   if (FUNC_0(VAR_2->type)) {
    FUNC_2("codec23 is only supported for new pwc webcam\n");
    return -VAR_0;
   }
   break;
  default:
   FUNC_2("Unsupported pixel format\n");
   return -VAR_0;

 }

 if (VAR_3->fmt.pix.width > VAR_2->view_max.x)
  VAR_3->fmt.pix.width = VAR_2->view_max.x;
 else if (VAR_3->fmt.pix.width < VAR_2->view_min.x)
  VAR_3->fmt.pix.width = VAR_2->view_min.x;

 if (VAR_3->fmt.pix.height > VAR_2->view_max.y)
  VAR_3->fmt.pix.height = VAR_2->view_max.y;
 else if (VAR_3->fmt.pix.height < VAR_2->view_min.y)
  VAR_3->fmt.pix.height = VAR_2->view_min.y;

 return 0;
}
