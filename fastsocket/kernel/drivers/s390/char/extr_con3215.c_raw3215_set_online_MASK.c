
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int dummy; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 struct raw3215_info* FUNC_0 (int *) ;
 int FUNC_1 (struct raw3215_info*) ;

__attribute__((used)) static int FUNC_2 (struct ccw_device *VAR_1)
{
 struct raw3215_info *VAR_2;

 VAR_2 = FUNC_0(&VAR_1->dev);
 if (!VAR_2)
  return -VAR_0;

 return FUNC_1(VAR_2);
}
