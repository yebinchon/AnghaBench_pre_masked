
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; scalar_t__ bytesperline; scalar_t__ colorspace; int sizeimage; int height; int width; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
struct hdpvr_video_info {int height; int width; } ;
struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct hdpvr_device {int bulk_in_size; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hdpvr_video_info* FUNC_0 (struct hdpvr_device*) ;
 int FUNC_1 (struct hdpvr_video_info*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
    struct v4l2_format *VAR_7)
{
 struct hdpvr_fh *VAR_8 = VAR_5->private_data;
 struct hdpvr_device *VAR_9 = VAR_8->dev;
 struct hdpvr_video_info *VAR_10;

 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_9);
 if (!VAR_10)
  return -VAR_0;

 VAR_7->type = VAR_2;
 VAR_7->fmt.pix.pixelformat = VAR_4;
 VAR_7->fmt.pix.width = VAR_10->width;
 VAR_7->fmt.pix.height = VAR_10->height;
 VAR_7->fmt.pix.sizeimage = VAR_9->bulk_in_size;
 VAR_7->fmt.pix.colorspace = 0;
 VAR_7->fmt.pix.bytesperline = 0;
 VAR_7->fmt.pix.field = VAR_3;

 FUNC_1(VAR_10);
 return 0;
}
