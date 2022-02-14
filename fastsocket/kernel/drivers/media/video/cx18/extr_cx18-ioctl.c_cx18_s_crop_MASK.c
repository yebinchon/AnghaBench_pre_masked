
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_crop {scalar_t__ type; } ;
struct file {int dummy; } ;
struct cx18_open_id {int prio; struct cx18* cx; } ;
struct cx18 {int prio; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_crop *VAR_4)
{
 struct cx18_open_id *VAR_5 = VAR_3;
 struct cx18 *VAR_6 = VAR_5->cx;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_6->prio, VAR_5->prio);
 if (VAR_7)
  return VAR_7;

 if (VAR_4->type != VAR_1)
  return -VAR_0;
 FUNC_0("VIDIOC_S_CROP not implemented\n");
 return -VAR_0;
}
