
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct highlander_i2c_dev {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct highlander_i2c_dev*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct highlander_i2c_dev *VAR_3)
{
 u16 VAR_4 = FUNC_2(VAR_3->base + VAR_0);

 if ((VAR_4 & (VAR_2 | VAR_1)) == VAR_1) {
  FUNC_0(VAR_3->dev, "ack abnormality\n");
  return FUNC_1(VAR_3);
 }

 return 0;
}
