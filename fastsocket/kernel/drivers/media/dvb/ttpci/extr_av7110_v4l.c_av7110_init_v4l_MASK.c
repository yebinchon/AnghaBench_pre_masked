
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vidioc_s_fmt_sliced_vbi_out; int vidioc_g_fmt_sliced_vbi_out; int vidioc_g_sliced_vbi_cap; int vidioc_s_audio; int vidioc_g_audio; int vidioc_s_frequency; int vidioc_g_frequency; int vidioc_s_tuner; int vidioc_g_tuner; int vidioc_s_input; int vidioc_g_input; int vidioc_enum_input; } ;
struct saa7146_ext_vv {TYPE_1__ ops; } ;
struct saa7146_dev {int dummy; } ;
struct av7110 {int vbi_dev; int v4l_dev; scalar_t__ analog_tuner_flags; struct saa7146_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct saa7146_ext_vv VAR_3 ;
 struct saa7146_ext_vv VAR_4 ;
 scalar_t__ FUNC_1 (int *,struct saa7146_dev*,char*,int ) ;
 int FUNC_2 (struct saa7146_dev*,struct saa7146_ext_vv*) ;
 int FUNC_3 (struct saa7146_dev*) ;
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

int FUNC_4(struct av7110 *VAR_17)
{
 struct saa7146_dev* VAR_18 = VAR_17->dev;
 struct saa7146_ext_vv *VAR_19;
 int VAR_20;




 if (VAR_17->analog_tuner_flags)
  VAR_19 = &VAR_3;
 else
  VAR_19 = &VAR_4;
 VAR_20 = FUNC_2(VAR_18, VAR_19);

 if (VAR_20) {
  FUNC_0(("cannot init capture device. skipping.\n"));
  return -VAR_0;
 }
 VAR_19->ops.vidioc_enum_input = VAR_5;
 VAR_19->ops.vidioc_g_input = VAR_9;
 VAR_19->ops.vidioc_s_input = VAR_15;
 VAR_19->ops.vidioc_g_tuner = VAR_11;
 VAR_19->ops.vidioc_s_tuner = VAR_16;
 VAR_19->ops.vidioc_g_frequency = VAR_8;
 VAR_19->ops.vidioc_s_frequency = VAR_14;
 VAR_19->ops.vidioc_g_audio = VAR_6;
 VAR_19->ops.vidioc_s_audio = VAR_12;
 VAR_19->ops.vidioc_g_sliced_vbi_cap = VAR_10;
 VAR_19->ops.vidioc_g_fmt_sliced_vbi_out = VAR_7;
 VAR_19->ops.vidioc_s_fmt_sliced_vbi_out = VAR_13;

 if (FUNC_1(&VAR_17->v4l_dev, VAR_18, "av7110", VAR_1)) {
  FUNC_0(("cannot register capture device. skipping.\n"));
  FUNC_3(VAR_18);
  return -VAR_0;
 }
 if (FUNC_1(&VAR_17->vbi_dev, VAR_18, "av7110", VAR_2))
  FUNC_0(("cannot register vbi v4l2 device. skipping.\n"));
 return 0;
}
