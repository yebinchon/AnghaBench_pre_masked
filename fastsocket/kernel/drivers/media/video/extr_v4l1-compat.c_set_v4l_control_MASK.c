
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* v4l2_kioctl ) (struct file*,int ,struct v4l2_queryctrl*) ;
struct v4l2_queryctrl {int id; int flags; scalar_t__ type; int value; int maximum; int minimum; } ;
struct v4l2_control {int id; int flags; scalar_t__ type; int value; int maximum; int minimum; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_5,
  int VAR_6,
  int VAR_7,
  v4l2_kioctl VAR_8)
{
 struct v4l2_queryctrl VAR_9;
 struct v4l2_control VAR_10;
 int VAR_11;

 VAR_9 = VAR_6;
 VAR_11 = VAR_8(VAR_5, VAR_3, &VAR_9);
 if (VAR_11 < 0)
  FUNC_0("VIDIOC_QUERYCTRL: %d\n", VAR_11);
 if (VAR_11 == 0 &&
     !(VAR_9 & VAR_0) &&
     !(VAR_9 & VAR_1)) {
  if (VAR_7 < 0)
   VAR_7 = 0;
  if (VAR_7 > 65535)
   VAR_7 = 65535;
  if (VAR_7 && VAR_9 == VAR_2)
   VAR_7 = 65535;
  VAR_10 = VAR_9;
  VAR_10 =
   (VAR_7 * (VAR_9 - VAR_9)
    + 32767)
   / 65535;
  VAR_10 += VAR_9;
  VAR_11 = VAR_8(VAR_5, VAR_4, &VAR_10);
  if (VAR_11 < 0)
   FUNC_0("VIDIOC_S_CTRL: %d\n", VAR_11);
 }
 return 0;
}
