
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_encoder_cmd {int cmd; } ;
struct file {int dummy; } ;


 int VAR_0 ;



__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2,
     struct v4l2_encoder_cmd *VAR_3)
{
 switch (VAR_3->cmd) {
 case 129:
 case 128:
  return 0;
 default:
  return -VAR_0;
 }
}
