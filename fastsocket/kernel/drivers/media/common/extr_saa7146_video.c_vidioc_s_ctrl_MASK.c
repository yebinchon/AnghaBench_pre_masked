
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_queryctrl {int type; int minimum; int maximum; } ;
struct v4l2_control {int id; int value; } ;
struct saa7146_vv {int hflip; int vflip; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct v4l2_queryctrl* FUNC_3 (int) ;
 int FUNC_4 (struct saa7146_dev*,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct saa7146_dev*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6, void *VAR_7, struct v4l2_control *VAR_8)
{
 struct saa7146_dev *VAR_9 = ((struct saa7146_fh *)VAR_7)->dev;
 struct saa7146_vv *VAR_10 = VAR_9->vv_data;
 const struct v4l2_queryctrl *VAR_11;

 VAR_11 = FUNC_3(VAR_8->id);
 if (((void*)0) == VAR_11) {
  FUNC_0(("unknown control %d\n", VAR_8->id));
  return -VAR_2;
 }

 switch (VAR_11->type) {
 case 130:
 case 128:
 case 129:
  if (VAR_8->value < VAR_11->minimum)
   VAR_8->value = VAR_11->minimum;
  if (VAR_8->value > VAR_11->maximum)
   VAR_8->value = VAR_11->maximum;
  break;
 default:
               ;
 }

 switch (VAR_8->id) {
 case 135: {
  u32 VAR_12 = FUNC_4(VAR_9, VAR_0);
  VAR_12 &= 0x00ffffff;
  VAR_12 |= (VAR_8->value << 24);
  FUNC_7(VAR_9, VAR_0, VAR_12);
  FUNC_7(VAR_9, VAR_5, VAR_4 | VAR_3);
  break;
 }
 case 134: {
  u32 VAR_13 = FUNC_4(VAR_9, VAR_0);
  VAR_13 &= 0xff00ffff;
  VAR_13 |= (VAR_8->value << 16);
  FUNC_7(VAR_9, VAR_0, VAR_13);
  FUNC_7(VAR_9, VAR_5, VAR_4 | VAR_3);
  break;
 }
 case 132: {
  u32 VAR_14 = FUNC_4(VAR_9, VAR_0);
  VAR_14 &= 0xffffff00;
  VAR_14 |= (VAR_8->value << 0);
  FUNC_7(VAR_9, VAR_0, VAR_14);
  FUNC_7(VAR_9, VAR_5, VAR_4 | VAR_3);
  break;
 }
 case 133:

  if (FUNC_1(VAR_7) != 0) {
   FUNC_0(("V4L2_CID_HFLIP while active capture.\n"));
   return -VAR_1;
  }
  VAR_10->hflip = VAR_8->value;
  break;
 case 131:
  if (FUNC_1(VAR_7) != 0) {
   FUNC_0(("V4L2_CID_VFLIP while active capture.\n"));
   return -VAR_1;
  }
  VAR_10->vflip = VAR_8->value;
  break;
 default:
  return -VAR_2;
 }

 if (FUNC_2(VAR_7) != 0) {
  FUNC_6(VAR_7);
  FUNC_5(VAR_7);
 }
 return 0;
}
