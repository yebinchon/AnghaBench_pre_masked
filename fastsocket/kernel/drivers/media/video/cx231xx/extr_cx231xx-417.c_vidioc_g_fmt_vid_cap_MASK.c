
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sizeimage; int field; int height; int width; scalar_t__ colorspace; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct TYPE_8__ {int field; } ;
struct cx231xx_fh {TYPE_4__ vidq; struct cx231xx* dev; } ;
struct TYPE_7__ {int ts_packet_size; int ts_packet_count; int height; int width; } ;
struct cx231xx {TYPE_3__ ts1; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct cx231xx_fh *VAR_4 = VAR_1->private_data;
 struct cx231xx *VAR_5 = VAR_4->dev;
 FUNC_0(3, "enter vidioc_g_fmt_vid_cap()\n");
 VAR_3->fmt.pix.pixelformat = VAR_0;
 VAR_3->fmt.pix.bytesperline = 0;
 VAR_3->fmt.pix.sizeimage =
  VAR_5->ts1.ts_packet_size * VAR_5->ts1.ts_packet_count;
 VAR_3->fmt.pix.colorspace = 0;
 VAR_3->fmt.pix.width = VAR_5->ts1.width;
 VAR_3->fmt.pix.height = VAR_5->ts1.height;
 VAR_3->fmt.pix.field = VAR_4->vidq.field;
 FUNC_0(1, "VIDIOC_G_FMT: w: %d, h: %d, f: %d\n",
  VAR_5->ts1.width, VAR_5->ts1.height, VAR_4->vidq.field);
 FUNC_0(3, "exit vidioc_g_fmt_vid_cap()\n");
 return 0;
}
