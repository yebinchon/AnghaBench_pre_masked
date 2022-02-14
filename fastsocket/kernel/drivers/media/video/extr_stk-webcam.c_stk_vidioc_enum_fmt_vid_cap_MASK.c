
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int index; int description; int pixelformat; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_6,
  void *VAR_7, struct v4l2_fmtdesc *VAR_8)
{
 switch (VAR_8->index) {
 case 0:
  VAR_8->pixelformat = VAR_1;
  FUNC_0(VAR_8->description, "r5g6b5");
  break;
 case 1:
  VAR_8->pixelformat = VAR_2;
  FUNC_0(VAR_8->description, "r5g6b5BE");
  break;
 case 2:
  VAR_8->pixelformat = VAR_4;
  FUNC_0(VAR_8->description, "yuv4:2:2");
  break;
 case 3:
  VAR_8->pixelformat = VAR_3;
  FUNC_0(VAR_8->description, "Raw bayer");
  break;
 case 4:
  VAR_8->pixelformat = VAR_5;
  FUNC_0(VAR_8->description, "yuv4:2:2");
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
