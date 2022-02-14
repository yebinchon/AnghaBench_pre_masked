
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizeimage; int field; int height; int width; scalar_t__ colorspace; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct saa7164_port {int ts_packet_size; int ts_packet_count; struct saa7164_dev* dev; } ;
struct saa7164_encoder_fh {struct saa7164_port* port; } ;
struct saa7164_dev {int dummy; } ;
struct file {struct saa7164_encoder_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct saa7164_encoder_fh *VAR_5 = VAR_2->private_data;
 struct saa7164_port *VAR_6 = VAR_5->port;
 struct saa7164_dev *VAR_7 = VAR_6->dev;

 VAR_4->fmt.pix.pixelformat = VAR_1;
 VAR_4->fmt.pix.bytesperline = 0;
 VAR_4->fmt.pix.sizeimage =
  VAR_6->ts_packet_size * VAR_6->ts_packet_count;
 VAR_4->fmt.pix.colorspace = 0;

 FUNC_0(VAR_0, "VIDIOC_S_FMT: w: %d, h: %d, f: %d\n",
  VAR_4->fmt.pix.width, VAR_4->fmt.pix.height, VAR_4->fmt.pix.field);

 return 0;
}
