
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int * dev; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct v4l2_device *VAR_0)
{
 if (VAR_0->dev) {
  FUNC_0(VAR_0->dev, ((void*)0));
  VAR_0->dev = ((void*)0);
 }
}
