
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; } ;


 int VAR_0 ;
 struct v4l2_queryctrl* VAR_1 ;

__attribute__((used)) static struct v4l2_queryctrl* FUNC_0(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].id == VAR_2)
   return VAR_1+VAR_3;
 return ((void*)0);
}
