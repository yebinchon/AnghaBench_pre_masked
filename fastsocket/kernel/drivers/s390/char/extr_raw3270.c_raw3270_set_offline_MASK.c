
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270 {int flags; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct raw3270* FUNC_0 (int *) ;
 int FUNC_1 (struct ccw_device*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3 (struct ccw_device *VAR_2)
{
 struct raw3270 *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev);
 if (FUNC_2(VAR_1, &VAR_3->flags))
  return -VAR_0;
 FUNC_1(VAR_2);
 return 0;
}
