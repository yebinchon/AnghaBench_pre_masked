
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {scalar_t__ index; int name; int std; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_input *VAR_6)
{
 if (VAR_6->index >= VAR_1)
  return -VAR_0;

 VAR_6->type = VAR_2;
 VAR_6->std = VAR_3;
 FUNC_0(VAR_6->name, "Camera %u", VAR_6->index);

 return (0);
}
