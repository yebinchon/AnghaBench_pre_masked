
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {scalar_t__ index; int pixelformat; int description; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_fmtdesc *VAR_5)
{
 if (VAR_5->index != 0) {
  FUNC_1("Invalid format index\n");
  return -VAR_0;
 }


 VAR_5->type = VAR_1;
 FUNC_0(VAR_5->description, "YCbCr4:2:2 YC Planar");
 VAR_5->pixelformat = VAR_2;

 return 0;
}
