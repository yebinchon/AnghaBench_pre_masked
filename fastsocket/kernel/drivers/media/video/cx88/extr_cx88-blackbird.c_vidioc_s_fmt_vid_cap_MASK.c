
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
struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct TYPE_4__ {int field; } ;
struct cx8802_fh {TYPE_1__ mpegq; struct cx8802_dev* dev; } ;
struct cx8802_dev {int ts_packet_size; int ts_packet_count; int height; int width; struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx8802_dev*,int ,int,int ,int ,int ) ;
 int FUNC_1 (struct cx88_core*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3 (struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct cx8802_fh *VAR_5 = VAR_3;
 struct cx8802_dev *VAR_6 = VAR_5->dev;
 struct cx88_core *VAR_7 = VAR_6->core;

 VAR_4->fmt.pix.pixelformat = VAR_1;
 VAR_4->fmt.pix.bytesperline = 0;
 VAR_4->fmt.pix.sizeimage = VAR_6->ts_packet_size * VAR_6->ts_packet_count; ;
 VAR_4->fmt.pix.colorspace = 0;
 VAR_6->width = VAR_4->fmt.pix.width;
 VAR_6->height = VAR_4->fmt.pix.height;
 VAR_5->mpegq.field = VAR_4->fmt.pix.field;
 FUNC_1(VAR_7, VAR_4->fmt.pix.width, VAR_4->fmt.pix.height, VAR_4->fmt.pix.field);
 FUNC_0(VAR_6, VAR_0, 2, 0,
    VAR_4->fmt.pix.height, VAR_4->fmt.pix.width);
 FUNC_2(0,"VIDIOC_S_FMT: w: %d, h: %d, f: %d\n",
  VAR_4->fmt.pix.width, VAR_4->fmt.pix.height, VAR_4->fmt.pix.field );
 return 0;
}
