
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct wm831x *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->dev, &VAR_0);
 if (VAR_2 != 0)
  FUNC_0(VAR_1->dev, "Unique ID attribute not created: %d\n",
   VAR_2);

 return VAR_2;
}
