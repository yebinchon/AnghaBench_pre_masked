
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_crop {scalar_t__ type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3, struct v4l2_crop *VAR_4)
{
 if (VAR_4->type != VAR_1)
  return -VAR_0;

 return 0;
}
