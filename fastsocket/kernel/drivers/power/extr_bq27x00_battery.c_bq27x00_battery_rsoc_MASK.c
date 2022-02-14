
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq27x00_device_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int,struct bq27x00_device_info*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct bq27x00_device_info *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0, &VAR_3, 1, VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_1->dev, "error reading relative State-of-Charge\n");
  return VAR_2;
 }

 return VAR_3 >> 8;
}
