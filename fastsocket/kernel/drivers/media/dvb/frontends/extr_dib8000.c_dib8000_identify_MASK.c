
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device {int dummy; } ;


 int FUNC_0 (struct i2c_device*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static u16 FUNC_2(struct i2c_device *VAR_0)
{
 u16 VAR_1;


 VAR_1 = FUNC_0(VAR_0, 896);

 if ((VAR_1 = FUNC_0(VAR_0, 896)) != 0x01b3) {
  FUNC_1("wrong Vendor ID (read=0x%x)", VAR_1);
  return 0;
 }

 VAR_1 = FUNC_0(VAR_0, 897);
 if (VAR_1 != 0x8000 && VAR_1 != 0x8001 && VAR_1 != 0x8002) {
  FUNC_1("wrong Device ID (%x)", VAR_1);
  return 0;
 }

 switch (VAR_1) {
 case 0x8000:
  FUNC_1("found DiB8000A");
  break;
 case 0x8001:
  FUNC_1("found DiB8000B");
  break;
 case 0x8002:
  FUNC_1("found DiB8000C");
  break;
 }
 return VAR_1;
}
