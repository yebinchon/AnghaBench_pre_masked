
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nforce2_smbus {scalar_t__ can_abort; } ;
struct i2c_adapter {int dev; struct nforce2_smbus* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_6)
{
 struct nforce2_smbus *VAR_7 = VAR_6->algo_data;
 int VAR_8 = 0;
 unsigned char VAR_9;

 do {
  FUNC_2(1);
  VAR_9 = FUNC_1(VAR_3);
 } while ((!VAR_9) && (VAR_8++ < VAR_2));

 if (VAR_8 > VAR_2) {
  FUNC_0(&VAR_6->dev, "SMBus Timeout!\n");
  if (VAR_7->can_abort)
   FUNC_3(VAR_6);
  return -VAR_1;
 }
 if (!(VAR_9 & VAR_4) || (VAR_9 & VAR_5)) {
  FUNC_0(&VAR_6->dev, "Transaction failed (0x%02x)!\n", VAR_9);
  return -VAR_0;
 }
 return 0;
}
