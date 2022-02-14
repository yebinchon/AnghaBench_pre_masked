
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vivi_fmt {int depth; } ;
struct vivi_fh {struct vivi_dev* dev; } ;
struct vivi_dev {int dummy; } ;
struct TYPE_3__ {int field; int width; int height; int bytesperline; int sizeimage; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vivi_dev*,int,char*,...) ;
 struct vivi_fmt* FUNC_1 (struct v4l2_format*) ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (int*,int,unsigned int,int,int*,int,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
   struct v4l2_format *VAR_5)
{
 struct vivi_fh *VAR_6 = VAR_4;
 struct vivi_dev *VAR_7 = VAR_6->dev;
 struct vivi_fmt *VAR_8;
 enum v4l2_field VAR_9;
 unsigned int VAR_10, VAR_11;

 VAR_8 = FUNC_1(VAR_5);
 if (!VAR_8) {
  FUNC_0(VAR_7, 1, "Fourcc format (0x%08x) invalid.\n",
   VAR_5->fmt.pix.pixelformat);
  return -VAR_0;
 }

 VAR_9 = VAR_5->fmt.pix.field;

 if (VAR_9 == VAR_1) {
  VAR_9 = VAR_2;
 } else if (VAR_2 != VAR_9) {
  FUNC_0(VAR_7, 1, "Field type invalid.\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3();
 VAR_11 = FUNC_2();

 VAR_5->fmt.pix.field = VAR_9;
 FUNC_4(&VAR_5->fmt.pix.width, 48, VAR_10, 2,
         &VAR_5->fmt.pix.height, 32, VAR_11, 0, 0);
 VAR_5->fmt.pix.bytesperline =
  (VAR_5->fmt.pix.width * VAR_8->depth) >> 3;
 VAR_5->fmt.pix.sizeimage =
  VAR_5->fmt.pix.height * VAR_5->fmt.pix.bytesperline;

 return 0;
}
