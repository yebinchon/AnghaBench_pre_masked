
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_5, int VAR_6, u8 *VAR_7)
{
        int VAR_8;


 if ((VAR_8 = FUNC_1(VAR_2) & 0x03) != 0x00) {
  FUNC_0(&VAR_5->dev, "SMBus busy (%02x).Resetting...\n",VAR_8);

  FUNC_2(VAR_1, 0x20);

  if ((VAR_8 = FUNC_1(VAR_2) & 0x03) != 0x00) {
   FUNC_0(&VAR_5->dev, "Failed! (%02x)\n", VAR_8);
   return -VAR_0;
                } else {
   FUNC_0(&VAR_5->dev, "Successful!\n");
  }
        }


 *VAR_7 = FUNC_1(VAR_2);

 FUNC_0(&VAR_5->dev, "saved clock 0x%02x\n", *VAR_7);


 if (VAR_4)
  FUNC_2(VAR_2, 0x20);
 else
  FUNC_2(VAR_2, (*VAR_7 & ~0x40));


 VAR_8 = FUNC_1(VAR_3);
 FUNC_2(VAR_3, VAR_8 & 0x1e);


 FUNC_2(VAR_1,0x10 | (VAR_6 & 0x07));

 return 0;
}
