
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct v4l2_window {int clipcount; int field; TYPE_3__ w; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_4__ {int * base; } ;
struct saa7134_dev {TYPE_2__ crop_current; int * ovfmt; TYPE_1__ ovbuf; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;




__attribute__((used)) static int FUNC_0(struct saa7134_dev *VAR_2, struct v4l2_window *VAR_3)
{
 enum v4l2_field VAR_4;
 int VAR_5, VAR_6;

 if (((void*)0) == VAR_2->ovbuf.base)
  return -VAR_0;
 if (((void*)0) == VAR_2->ovfmt)
  return -VAR_0;
 if (VAR_3->w.width < 48 || VAR_3->w.height < 32)
  return -VAR_0;
 if (VAR_3->clipcount > 2048)
  return -VAR_0;

 VAR_4 = VAR_3->field;
 VAR_5 = VAR_2->crop_current.width;
 VAR_6 = VAR_2->crop_current.height;

 if (VAR_1 == VAR_4) {
  VAR_4 = (VAR_3->w.height > VAR_6/2)
   ? 129
   : 128;
 }
 switch (VAR_4) {
 case 128:
 case 130:
  VAR_6 = VAR_6 / 2;
  break;
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_3->field = VAR_4;
 if (VAR_3->w.width > VAR_5)
  VAR_3->w.width = VAR_5;
 if (VAR_3->w.height > VAR_6)
  VAR_3->w.height = VAR_6;
 return 0;
}
