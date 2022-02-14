
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct em28xx *VAR_4)
{
 if (VAR_4->state & VAR_0) {
  FUNC_0("v4l2 ioctl: device not present\n");
  return -VAR_3;
 }

 if (VAR_4->state & VAR_1) {
  FUNC_0("v4l2 ioctl: device is misconfigured; "
         "close and open it again\n");
  return -VAR_2;
 }
 return 0;
}
