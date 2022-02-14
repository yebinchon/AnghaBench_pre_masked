
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int index; int description; int flags; int type; int pixelformat; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
     struct v4l2_fmtdesc *VAR_7)
{
 char *VAR_8 = ((void*)0);

 switch (VAR_7->index) {
 case 0:
  VAR_7->pixelformat = VAR_3;
  VAR_8 = "Motion-JPEG";
  break;
 case 1:
  VAR_7->pixelformat = VAR_4;
  VAR_8 = "MPEG1/MPEG2/MPEG4";
  break;
 default:
  return -VAR_0;
 }
 VAR_7->type = VAR_1;
 VAR_7->flags = VAR_2;

 FUNC_0(VAR_7->description, VAR_8, sizeof(VAR_7->description));

 return 0;
}
