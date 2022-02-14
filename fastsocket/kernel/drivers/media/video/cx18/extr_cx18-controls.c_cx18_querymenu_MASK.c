
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int id; } ;
struct v4l2_queryctrl {int id; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int params; } ;


 int FUNC_0 (struct file*,void*,struct v4l2_queryctrl*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct v4l2_querymenu*,struct v4l2_queryctrl*,int ) ;

int FUNC_3(struct file *VAR_0, void *VAR_1, struct v4l2_querymenu *VAR_2)
{
 struct cx18 *VAR_3 = ((struct cx18_open_id *)VAR_1)->cx;
 struct v4l2_queryctrl VAR_4;

 VAR_4.id = VAR_2->id;
 FUNC_0(VAR_0, VAR_1, &VAR_4);
 return FUNC_2(VAR_2, &VAR_4,
   FUNC_1(&VAR_3->params, VAR_2->id));
}
