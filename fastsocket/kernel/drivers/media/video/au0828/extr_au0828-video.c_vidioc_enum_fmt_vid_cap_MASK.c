
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int pixelformat; scalar_t__ flags; int description; int type; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
     struct v4l2_fmtdesc *VAR_5)
{
 if (VAR_5->index)
  return -VAR_0;

 VAR_5->type = VAR_1;
 FUNC_0(VAR_5->description, "Packed YUV2");

 VAR_5->flags = 0;
 VAR_5->pixelformat = VAR_2;

 return 0;
}
