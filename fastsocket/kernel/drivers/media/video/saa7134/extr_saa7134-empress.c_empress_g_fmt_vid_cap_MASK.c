
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int dummy; } ;
struct TYPE_6__ {int sizeimage; int pixelformat; } ;
struct TYPE_5__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct TYPE_4__ {int nr_packets; } ;
struct saa7134_dev {TYPE_1__ ts; } ;
struct file {struct saa7134_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct saa7134_dev*,int ,int ,struct v4l2_mbus_framefmt*) ;
 int FUNC_1 (TYPE_3__*,struct v4l2_mbus_framefmt*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
    struct v4l2_format *VAR_6)
{
 struct saa7134_dev *VAR_7 = VAR_4->private_data;
 struct v4l2_mbus_framefmt VAR_8;

 FUNC_0(VAR_7, VAR_3, VAR_2, &VAR_8);

 FUNC_1(&VAR_6->fmt.pix, &VAR_8);
 VAR_6->fmt.pix.pixelformat = VAR_1;
 VAR_6->fmt.pix.sizeimage = VAR_0 * VAR_7->ts.nr_packets;

 return 0;
}
