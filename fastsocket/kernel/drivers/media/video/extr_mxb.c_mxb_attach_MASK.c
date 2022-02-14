
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct saa7146_pci_extension_data {int dummy; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {int vbi_dev; int video_dev; } ;
struct TYPE_4__ {int vidioc_default; int vidioc_s_register; int vidioc_g_register; int vidioc_s_audio; int vidioc_g_audio; int vidioc_s_frequency; int vidioc_g_frequency; int vidioc_s_tuner; int vidioc_g_tuner; int vidioc_s_input; int vidioc_g_input; int vidioc_enum_input; int vidioc_s_ctrl; int vidioc_g_ctrl; int vidioc_queryctrl; } ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct saa7146_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct saa7146_dev*) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int *,struct saa7146_dev*,char*,int ) ;
 int FUNC_6 (struct saa7146_dev*,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_2__ VAR_18 ;

__attribute__((used)) static int FUNC_7(struct saa7146_dev *VAR_19, struct saa7146_pci_extension_data *VAR_20)
{
 struct mxb *VAR_21 = (struct mxb *)VAR_19->ext_priv;

 FUNC_0(("dev:%p\n", VAR_19));




 FUNC_6(VAR_19, &VAR_18);
 VAR_18.ops.vidioc_queryctrl = VAR_11;
 VAR_18.ops.vidioc_g_ctrl = VAR_6;
 VAR_18.ops.vidioc_s_ctrl = VAR_13;
 VAR_18.ops.vidioc_enum_input = VAR_4;
 VAR_18.ops.vidioc_g_input = VAR_8;
 VAR_18.ops.vidioc_s_input = VAR_15;
 VAR_18.ops.vidioc_g_tuner = VAR_10;
 VAR_18.ops.vidioc_s_tuner = VAR_17;
 VAR_18.ops.vidioc_g_frequency = VAR_7;
 VAR_18.ops.vidioc_s_frequency = VAR_14;
 VAR_18.ops.vidioc_g_audio = VAR_5;
 VAR_18.ops.vidioc_s_audio = VAR_12;




 VAR_18.ops.vidioc_default = VAR_3;
 if (FUNC_5(&VAR_21->video_dev, VAR_19, "mxb", VAR_0)) {
  FUNC_1(("cannot register capture v4l2 device. skipping.\n"));
  return -1;
 }


 if (FUNC_2(VAR_19)) {
  if (FUNC_5(&VAR_21->vbi_dev, VAR_19, "mxb", VAR_1)) {
   FUNC_1(("cannot register vbi v4l2 device. skipping.\n"));
  }
 }

 FUNC_4("mxb: found Multimedia eXtension Board #%d.\n", VAR_2);

 VAR_2++;
 FUNC_3(VAR_19);
 return 0;
}
