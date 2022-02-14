
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int width; int height; unsigned int left; } ;
struct v4l2_window {int clipcount; int field; TYPE_5__ w; } ;
struct bttv_fh {TYPE_4__* ovfmt; int do_crop; TYPE_3__* btv; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef int __s32 ;
struct TYPE_9__ {int depth; } ;
struct TYPE_8__ {TYPE_2__* crop; } ;
struct TYPE_6__ {int height; } ;
struct TYPE_7__ {TYPE_1__ rect; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (struct bttv_fh*,unsigned int*,int*,int,unsigned int,int ,int,int) ;

__attribute__((used)) static int
FUNC_2 (struct bttv_fh * VAR_2,
    struct v4l2_window * VAR_3,
    int VAR_4,
    int VAR_5)
{
 enum v4l2_field VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_3->w.width < 48 || VAR_3->w.height < 32)
  return -VAR_0;
 if (VAR_3->clipcount > 2048)
  return -VAR_0;

 VAR_6 = VAR_3->field;

 if (VAR_1 == VAR_6) {
  __s32 VAR_9;

  VAR_9 = VAR_2->btv->crop[!!VAR_2->do_crop].rect.height >> 1;
  VAR_6 = (VAR_3->w.height > VAR_9)
   ? 129
   : 128;
 }
 switch (VAR_6) {
 case 128:
 case 130:
 case 129:
  break;
 default:
  return -VAR_0;
 }


 if (((void*)0) == VAR_2->ovfmt)
  return -VAR_0;
 VAR_7 = ~0;
 switch (VAR_2->ovfmt->depth) {
 case 8:
 case 24:
  VAR_7 = ~3;
  break;
 case 16:
  VAR_7 = ~1;
  break;
 case 32:
  break;
 default:
  FUNC_0();
 }

 VAR_3->w.width -= VAR_3->w.left & ~VAR_7;
 VAR_3->w.left = (VAR_3->w.left - VAR_7 - 1) & VAR_7;

 VAR_8 = FUNC_1(VAR_2, &VAR_3->w.width, &VAR_3->w.height,
          VAR_6, VAR_7,
                                       0,
          VAR_4, VAR_5);
 if (0 != VAR_8)
  return VAR_8;

 VAR_3->field = VAR_6;
 return 0;
}
