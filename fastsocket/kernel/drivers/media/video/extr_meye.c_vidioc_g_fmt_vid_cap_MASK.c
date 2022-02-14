
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int bytesperline; int sizeimage; int field; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int mchip_mode; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
        struct v4l2_format *VAR_6)
{
 switch (VAR_3.mchip_mode) {
 case 128:
 default:
  VAR_6->fmt.pix.pixelformat = VAR_2;
  break;
 case 129:
  VAR_6->fmt.pix.pixelformat = VAR_1;
  break;
 }

 VAR_6->fmt.pix.field = VAR_0;
 VAR_6->fmt.pix.width = FUNC_0();
 VAR_6->fmt.pix.height = FUNC_1();
 VAR_6->fmt.pix.bytesperline = VAR_6->fmt.pix.width * 2;
 VAR_6->fmt.pix.sizeimage = VAR_6->fmt.pix.height *
          VAR_6->fmt.pix.bytesperline;

 return 0;
}
