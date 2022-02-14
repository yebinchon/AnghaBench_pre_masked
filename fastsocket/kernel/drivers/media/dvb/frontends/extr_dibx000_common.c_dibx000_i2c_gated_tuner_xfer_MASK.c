
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct dibx000_i2c_master {int i2c_adap; int i2c_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dibx000_i2c_master*,int *,int ,int) ;
 int FUNC_1 (struct dibx000_i2c_master*,int ) ;
 struct dibx000_i2c_master* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;
 int FUNC_4 (struct i2c_msg*,struct i2c_msg*,int) ;
 int FUNC_5 (struct i2c_msg*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_2,
     struct i2c_msg VAR_3[], int VAR_4)
{
 struct dibx000_i2c_master *VAR_5 = FUNC_2(VAR_2);
 struct i2c_msg VAR_6[2 + VAR_4];
 u8 VAR_7[4], VAR_8[4];

 FUNC_5(VAR_6, 0, sizeof(struct i2c_msg) * (2 + VAR_4));

 FUNC_1(VAR_5, VAR_0);

 FUNC_0(VAR_5, VAR_7, VAR_3[0].addr, 1);
 VAR_6[0].addr = VAR_5->i2c_addr;
 VAR_6[0].buf = VAR_7;
 VAR_6[0].len = 4;

 FUNC_4(&VAR_6[1], VAR_3, sizeof(struct i2c_msg) * VAR_4);

 FUNC_0(VAR_5, VAR_8, 0, 0);
 VAR_6[VAR_4 + 1].addr = VAR_5->i2c_addr;
 VAR_6[VAR_4 + 1].buf = VAR_8;
 VAR_6[VAR_4 + 1].len = 4;

 return FUNC_3(VAR_5->i2c_adap, VAR_6, 2 + VAR_4) == 2 + VAR_4 ? VAR_4 : -VAR_1;
}
