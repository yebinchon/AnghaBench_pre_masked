
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct highlander_i2c_dev {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct highlander_i2c_dev *VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = VAR_4 + FUNC_2(VAR_3);
 while (FUNC_1(VAR_5->base + VAR_1) & VAR_2) {
  if (FUNC_4(VAR_4, VAR_6)) {
   FUNC_0(VAR_5->dev, "timeout waiting for bus ready\n");
   return -VAR_0;
  }

  FUNC_3(1);
 }

 return 0;
}
