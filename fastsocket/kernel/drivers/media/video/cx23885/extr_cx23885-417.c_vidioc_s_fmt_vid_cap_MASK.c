
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sizeimage; int field; int height; int width; scalar_t__ colorspace; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {struct cx23885_fh* private_data; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct TYPE_4__ {int ts_packet_size; int ts_packet_count; } ;
struct cx23885_dev {TYPE_1__ ts1; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct cx23885_fh *VAR_4 = VAR_1->private_data;
 struct cx23885_dev *VAR_5 = VAR_4->dev;

 VAR_3->fmt.pix.pixelformat = VAR_0;
 VAR_3->fmt.pix.bytesperline = 0;
 VAR_3->fmt.pix.sizeimage =
  VAR_5->ts1.ts_packet_size * VAR_5->ts1.ts_packet_count;
 VAR_3->fmt.pix.colorspace = 0;
 FUNC_0(1, "VIDIOC_S_FMT: w: %d, h: %d, f: %d\n",
  VAR_3->fmt.pix.width, VAR_3->fmt.pix.height, VAR_3->fmt.pix.field);
 return 0;
}
