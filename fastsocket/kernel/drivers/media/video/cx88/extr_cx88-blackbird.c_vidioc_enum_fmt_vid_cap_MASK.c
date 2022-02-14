
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {scalar_t__ index; int pixelformat; int description; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1 (struct file *VAR_2, void *VAR_3,
     struct v4l2_fmtdesc *VAR_4)
{
 if (VAR_4->index != 0)
  return -VAR_0;

 FUNC_0(VAR_4->description, "MPEG", sizeof(VAR_4->description));
 VAR_4->pixelformat = VAR_1;
 return 0;
}
