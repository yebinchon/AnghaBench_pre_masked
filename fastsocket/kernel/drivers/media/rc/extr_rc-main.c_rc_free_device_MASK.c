
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int dev; int input_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rc_dev *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->input_dev);
  FUNC_1(&VAR_0->dev);
 }
}
