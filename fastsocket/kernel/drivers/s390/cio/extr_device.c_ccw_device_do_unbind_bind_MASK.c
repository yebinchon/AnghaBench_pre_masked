
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ccw_device *VAR_1)
{
 int VAR_2;

 if (FUNC_2(&VAR_1->dev)) {
  FUNC_3(&VAR_1->dev);
  VAR_2 = FUNC_1(&VAR_1->dev);
  FUNC_0(VAR_2 == -VAR_0);
 }
}
