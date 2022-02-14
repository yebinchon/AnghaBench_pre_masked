
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {scalar_t__ index; int name; int std; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
  struct v4l2_input *VAR_5)
{
 if (VAR_5->index != 0)
  return -VAR_0;

 VAR_5->type = VAR_1;
 VAR_5->std = VAR_2;
 FUNC_0(VAR_5->name, "Camera");
 return 0;
}
