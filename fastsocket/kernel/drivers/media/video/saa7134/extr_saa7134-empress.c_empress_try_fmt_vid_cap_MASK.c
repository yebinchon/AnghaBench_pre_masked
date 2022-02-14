
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sizeimage; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct TYPE_6__ {int nr_packets; } ;
struct saa7134_dev {TYPE_3__ ts; } ;
struct file {struct saa7134_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct saa7134_dev *VAR_5 = VAR_2->private_data;

 VAR_4->fmt.pix.pixelformat = VAR_1;
 VAR_4->fmt.pix.sizeimage = VAR_0 * VAR_5->ts.nr_packets;

 return 0;
}
