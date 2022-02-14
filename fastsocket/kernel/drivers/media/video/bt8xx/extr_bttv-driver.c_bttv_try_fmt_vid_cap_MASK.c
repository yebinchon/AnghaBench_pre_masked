
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int field; int height; int width; int pixelformat; } ;
struct TYPE_7__ {TYPE_4__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct bttv_format {int flags; } ;
struct bttv_fh {int do_crop; struct bttv* btv; } ;
struct bttv {TYPE_2__* crop; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef int __s32 ;
struct TYPE_5__ {int height; } ;
struct TYPE_6__ {TYPE_1__ rect; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;


 struct bttv_format* FUNC_0 (int ) ;
 int FUNC_1 (struct bttv_fh*,int*,int*,int,int,int,int,int ) ;
 int FUNC_2 (TYPE_4__*,struct bttv_format const*,int,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
      struct v4l2_format *VAR_6)
{
 const struct bttv_format *VAR_7;
 struct bttv_fh *VAR_8 = VAR_5;
 struct bttv *VAR_9 = VAR_8->btv;
 enum v4l2_field VAR_10;
 __s32 VAR_11, VAR_12;
 int VAR_13;

 VAR_7 = FUNC_0(VAR_6->fmt.pix.pixelformat);
 if (((void*)0) == VAR_7)
  return -VAR_0;

 VAR_10 = VAR_6->fmt.pix.field;

 if (VAR_2 == VAR_10) {
  __s32 VAR_14;

  VAR_14 = VAR_9->crop[!!VAR_8->do_crop].rect.height >> 1;
  VAR_10 = (VAR_6->fmt.pix.height > VAR_14)
   ? 130
   : 131;
 }

 if (VAR_3 == VAR_10)
  VAR_10 = 129;

 switch (VAR_10) {
 case 128:
 case 131:
 case 132:
 case 130:
  break;
 case 129:
  if (VAR_7->flags & VAR_1)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 VAR_11 = VAR_6->fmt.pix.width;
 VAR_12 = VAR_6->fmt.pix.height;

 VAR_13 = FUNC_1(VAR_8, &VAR_11, &VAR_12, VAR_10,
                                     ~3,
                                    2,
                            1,
                            0);
 if (0 != VAR_13)
  return VAR_13;


 VAR_6->fmt.pix.field = VAR_10;
 FUNC_2(&VAR_6->fmt.pix, VAR_7, VAR_11, VAR_12);

 return 0;
}
