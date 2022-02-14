
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* v4l2_kioctl ) (struct file*,int ,struct v4l2_queryctrl*) ;
struct v4l2_queryctrl {int id; int flags; int value; int minimum; int maximum; } ;
struct v4l2_control {int id; int flags; int value; int minimum; int maximum; } ;
struct file {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_3,
  int VAR_4,
  v4l2_kioctl VAR_5)
{
 struct v4l2_queryctrl VAR_6;
 struct v4l2_control VAR_7;
 int VAR_8;

 VAR_6 = VAR_4;
 VAR_8 = VAR_5(VAR_3, VAR_2, &VAR_6);
 if (VAR_8 < 0)
  FUNC_1("VIDIOC_QUERYCTRL: %d\n", VAR_8);
 if (VAR_8 == 0 && !(VAR_6 & VAR_0)) {
  VAR_7 = VAR_6;
  VAR_8 = VAR_5(VAR_3, VAR_1, &VAR_7);
  if (VAR_8 < 0) {
   FUNC_1("VIDIOC_G_CTRL: %d\n", VAR_8);
   return 0;
  }
  return FUNC_0((VAR_7) * 65535,
      VAR_6 - VAR_6);
 }
 return 0;
}
