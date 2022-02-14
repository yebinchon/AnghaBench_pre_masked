
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dw_i2c_dev *VAR_4)
{
 int VAR_5 = VAR_3;

 while (FUNC_2(VAR_4->base + VAR_0) & VAR_1) {
  if (VAR_5 <= 0) {
   FUNC_0(VAR_4->dev, "timeout waiting for bus ready\n");
   return -VAR_2;
  }
  VAR_5--;
  FUNC_1(1);
 }

 return 0;
}
