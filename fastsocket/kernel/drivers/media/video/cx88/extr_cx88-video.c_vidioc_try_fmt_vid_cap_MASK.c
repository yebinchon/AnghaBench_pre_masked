
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int field; unsigned int height; int width; int bytesperline; int sizeimage; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct cx88_core {int tvnorm; } ;
struct cx8800_fmt {int depth; } ;
struct cx8800_fh {TYPE_1__* dev; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_4__ {struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct cx8800_fmt* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int*,int,unsigned int,int,unsigned int*,int,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
   struct v4l2_format *VAR_4)
{
 struct cx88_core *VAR_5 = ((struct cx8800_fh *)VAR_3)->dev->core;
 struct cx8800_fmt *VAR_6;
 enum v4l2_field VAR_7;
 unsigned int VAR_8, VAR_9;

 VAR_6 = FUNC_0(VAR_4->fmt.pix.pixelformat);
 if (((void*)0) == VAR_6)
  return -VAR_0;

 VAR_7 = VAR_4->fmt.pix.field;
 VAR_8 = FUNC_2(VAR_5->tvnorm);
 VAR_9 = FUNC_1(VAR_5->tvnorm);

 if (VAR_1 == VAR_7) {
  VAR_7 = (VAR_4->fmt.pix.height > VAR_9/2)
   ? 129
   : 130;
 }

 switch (VAR_7) {
 case 128:
 case 130:
  VAR_9 = VAR_9 / 2;
  break;
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_4->fmt.pix.field = VAR_7;
 FUNC_3(&VAR_4->fmt.pix.width, 48, VAR_8, 2,
         &VAR_4->fmt.pix.height, 32, VAR_9, 0, 0);
 VAR_4->fmt.pix.bytesperline =
  (VAR_4->fmt.pix.width * VAR_6->depth) >> 3;
 VAR_4->fmt.pix.sizeimage =
  VAR_4->fmt.pix.height * VAR_4->fmt.pix.bytesperline;

 return 0;
}
