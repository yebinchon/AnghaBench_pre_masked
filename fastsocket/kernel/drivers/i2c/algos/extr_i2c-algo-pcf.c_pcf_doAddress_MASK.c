
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {unsigned short flags; int addr; } ;
struct i2c_algo_pcf_data {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (struct i2c_algo_pcf_data*,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct i2c_algo_pcf_data *VAR_2,
    struct i2c_msg *VAR_3)
{
 unsigned short VAR_4 = VAR_3->flags;
 unsigned char VAR_5;

 VAR_5 = VAR_3->addr << 1;
 if (VAR_4 & VAR_0)
  VAR_5 |= 1;
 if (VAR_4 & VAR_1)
  VAR_5 ^= 1;
 FUNC_0(VAR_2, VAR_5);

 return 0;
}
