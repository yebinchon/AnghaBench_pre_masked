
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int id; } ;
struct v4l2_queryctrl {int id; } ;
struct cx231xx {int mpeg_params; } ;


 int FUNC_0 (struct cx231xx*,struct v4l2_queryctrl*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct v4l2_querymenu*,struct v4l2_queryctrl*,int ) ;

__attribute__((used)) static int FUNC_3(struct cx231xx *VAR_0,
 struct v4l2_querymenu *VAR_1)
{
 struct v4l2_queryctrl VAR_2;

 VAR_2.id = VAR_1->id;
 FUNC_0(VAR_0, &VAR_2);
 return FUNC_2(VAR_1, &VAR_2,
  FUNC_1(&VAR_0->mpeg_params, VAR_1->id));
}
