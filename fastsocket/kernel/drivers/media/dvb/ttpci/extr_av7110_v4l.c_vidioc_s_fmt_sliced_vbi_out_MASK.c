
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_sliced_vbi_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ service_set; scalar_t__** service_lines; int io_size; } ;
struct TYPE_3__ {TYPE_2__ sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct av7110 {int wssMode; scalar_t__ wssData; int arm_app; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct av7110*,int ,int ,int,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
     struct v4l2_format *VAR_6)
{
 struct saa7146_dev *VAR_7 = ((struct saa7146_fh *)VAR_5)->dev;
 struct av7110 *VAR_8 = (struct av7110 *)VAR_7->ext_priv;

 FUNC_2(2, "VIDIOC_S_FMT\n");
 if (FUNC_0(VAR_8->arm_app) < 0x2623)
  return -VAR_1;
 if (VAR_6->fmt.sliced.service_set != VAR_3 &&
     VAR_6->fmt.sliced.service_lines[0][23] != VAR_3) {
  FUNC_3(&VAR_6->fmt.sliced, 0, sizeof(VAR_6->fmt.sliced));

  VAR_8->wssMode = 0;
  VAR_8->wssData = 0;
  return FUNC_1(VAR_8, VAR_0,
         VAR_2, 1, 0);
 } else {
  FUNC_3(&VAR_6->fmt.sliced, 0, sizeof(VAR_6->fmt.sliced));
  VAR_6->fmt.sliced.service_set = VAR_3;
  VAR_6->fmt.sliced.service_lines[0][23] = VAR_3;
  VAR_6->fmt.sliced.io_size = sizeof(struct v4l2_sliced_vbi_data);

  VAR_8->wssMode = 1;
  VAR_8->wssData = 0;
 }
 return 0;
}
