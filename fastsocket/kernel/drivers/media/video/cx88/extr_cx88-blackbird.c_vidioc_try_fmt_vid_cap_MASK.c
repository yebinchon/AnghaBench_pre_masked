
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sizeimage; scalar_t__ colorspace; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int field; } ;
struct cx8802_fh {TYPE_3__ mpegq; struct cx8802_dev* dev; } ;
struct cx8802_dev {int ts_packet_size; int ts_packet_count; int height; int width; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1 (struct file *VAR_1, void *VAR_2,
   struct v4l2_format *VAR_3)
{
 struct cx8802_fh *VAR_4 = VAR_2;
 struct cx8802_dev *VAR_5 = VAR_4->dev;

 VAR_3->fmt.pix.pixelformat = VAR_0;
 VAR_3->fmt.pix.bytesperline = 0;
 VAR_3->fmt.pix.sizeimage = VAR_5->ts_packet_size * VAR_5->ts_packet_count; ;
 VAR_3->fmt.pix.colorspace = 0;
 FUNC_0(0,"VIDIOC_TRY_FMT: w: %d, h: %d, f: %d\n",
  VAR_5->width, VAR_5->height, VAR_4->mpegq.field );
 return 0;
}
