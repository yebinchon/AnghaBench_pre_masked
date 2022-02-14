
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
struct go7007 {int dummy; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (struct go7007*,int ,int,int ,int,int *) ;
 struct go7007* FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_3, u16 VAR_4,
  unsigned short VAR_5, char VAR_6,
  u8 VAR_7, int VAR_8, union i2c_smbus_data *VAR_9)
{
 struct go7007 *VAR_10 = FUNC_1(VAR_3);

 if (VAR_8 != VAR_1)
  return -1;
 return FUNC_0(VAR_10, VAR_4, VAR_6 == VAR_2, VAR_7,
   VAR_5 & VAR_0 ? 0x10 : 0x00, &VAR_9->byte);
}
