
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long timeout; } ;
struct davinci_i2c_dev {int dev; TYPE_1__ adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct davinci_i2c_dev*,int ) ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct davinci_i2c_dev *VAR_4,
      char VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = VAR_3 + VAR_4->adapter.timeout;
 while (FUNC_0(VAR_4, VAR_1)
        & VAR_0) {
  if (FUNC_3(VAR_3, VAR_6)) {
   FUNC_1(VAR_4->dev,
     "timeout waiting for bus ready\n");
   return -VAR_2;
  }
  if (VAR_5)
   FUNC_2(1);
 }

 return 0;
}
