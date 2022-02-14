
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int id; } ;
struct v4l2_queryctrl {int id; } ;
struct file {int dummy; } ;
struct cx8802_fh {struct cx8802_dev* dev; } ;
struct cx8802_dev {int params; } ;


 int FUNC_0 (struct cx8802_dev*,struct v4l2_queryctrl*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct v4l2_querymenu*,struct v4l2_queryctrl*,int ) ;

__attribute__((used)) static int FUNC_3 (struct file *VAR_0, void *VAR_1,
    struct v4l2_querymenu *VAR_2)
{
 struct cx8802_dev *VAR_3 = ((struct cx8802_fh *)VAR_1)->dev;
 struct v4l2_queryctrl VAR_4;

 VAR_4.id = VAR_2->id;
 FUNC_0(VAR_3, &VAR_4);
 return FUNC_2(VAR_2, &VAR_4,
   FUNC_1(&VAR_3->params, VAR_2->id));
}
