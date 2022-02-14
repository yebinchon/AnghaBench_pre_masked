
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_queryctrl {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct saa7146_vv {int vflip; int hflip; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;





 struct v4l2_queryctrl* FUNC_1 (int) ;
 int FUNC_2 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, struct v4l2_control *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct saa7146_vv *VAR_6 = VAR_5->vv_data;
 const struct v4l2_queryctrl *VAR_7;
 u32 VAR_8 = 0;

 VAR_7 = FUNC_1(VAR_4->id);
 if (((void*)0) == VAR_7)
  return -VAR_1;
 switch (VAR_4->id) {
 case 132:
  VAR_8 = FUNC_2(VAR_5, VAR_0);
  VAR_4->value = 0xff & (VAR_8 >> 24);
  FUNC_0(("V4L2_CID_BRIGHTNESS: %d\n", VAR_4->value));
  break;
 case 131:
  VAR_8 = FUNC_2(VAR_5, VAR_0);
  VAR_4->value = 0x7f & (VAR_8 >> 16);
  FUNC_0(("V4L2_CID_CONTRAST: %d\n", VAR_4->value));
  break;
 case 129:
  VAR_8 = FUNC_2(VAR_5, VAR_0);
  VAR_4->value = 0x7f & (VAR_8 >> 0);
  FUNC_0(("V4L2_CID_SATURATION: %d\n", VAR_4->value));
  break;
 case 128:
  VAR_4->value = VAR_6->vflip;
  FUNC_0(("V4L2_CID_VFLIP: %d\n", VAR_4->value));
  break;
 case 130:
  VAR_4->value = VAR_6->hflip;
  FUNC_0(("V4L2_CID_HFLIP: %d\n", VAR_4->value));
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
