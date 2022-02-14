
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_crop {scalar_t__ type; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_crop *VAR_4)
{
 struct cx18 *VAR_5 = ((struct cx18_open_id *)VAR_3)->cx;

 if (VAR_4->type != VAR_1)
  return -VAR_0;
 FUNC_0("VIDIOC_G_CROP not implemented\n");
 return -VAR_0;
}
