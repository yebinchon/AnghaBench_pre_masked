
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zc0301_device {int dummy; } ;


 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct zc0301_device*,int) ;
 scalar_t__ FUNC_4 (struct zc0301_device*,int,int) ;

int FUNC_5(struct zc0301_device* VAR_0, u16 VAR_1, u16 VAR_2)
{
 int VAR_3 = 0, VAR_4;

 VAR_3 += FUNC_4(VAR_0, 0x0092, VAR_1);
 VAR_3 += FUNC_4(VAR_0, 0x0093, VAR_2 & 0xff);
 VAR_3 += FUNC_4(VAR_0, 0x0094, VAR_2 >> 8);
 VAR_3 += FUNC_4(VAR_0, 0x0090, 0x01);

 FUNC_2(1);

 VAR_4 = FUNC_3(VAR_0, 0x0091);
 if (VAR_4 < 0)
  VAR_3 += VAR_4;

 if (VAR_3)
  FUNC_0(3, "I2C write failed at address 0x%04X, value: 0x%04X",
      VAR_1, VAR_2);

 FUNC_1("I2C write: address 0x%04X, value: 0x%04X", VAR_1, VAR_2);

 return VAR_3 ? -1 : 0;
}
