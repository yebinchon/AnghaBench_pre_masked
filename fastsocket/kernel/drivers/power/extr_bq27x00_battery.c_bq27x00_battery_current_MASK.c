
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq27x00_device_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int ,struct bq27x00_device_info*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct bq27x00_device_info *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_0, &VAR_4, 0, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_2->dev, "error reading current\n");
  return 0;
 }
 VAR_3 = FUNC_0(VAR_1, &VAR_5, 0, VAR_2);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2->dev, "error reading flags\n");
  return 0;
 }
 if ((VAR_5 & (1 << 7)) != 0) {
  FUNC_1(VAR_2->dev, "negative current!\n");
  return -VAR_4;
 }
 return VAR_4;
}
