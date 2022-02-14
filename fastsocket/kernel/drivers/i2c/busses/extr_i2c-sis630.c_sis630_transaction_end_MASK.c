
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct i2c_adapter *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;


 FUNC_2(VAR_1, VAR_5);

 FUNC_0(&VAR_3->dev, "SMB_CNT before clock restore 0x%02x\n", FUNC_1(VAR_0));





 if (VAR_2 && !(VAR_4 & 0x20))
  FUNC_2(VAR_0,(FUNC_1(VAR_0) & ~0x20));

 FUNC_0(&VAR_3->dev, "SMB_CNT after clock restore 0x%02x\n", FUNC_1(VAR_0));
}
