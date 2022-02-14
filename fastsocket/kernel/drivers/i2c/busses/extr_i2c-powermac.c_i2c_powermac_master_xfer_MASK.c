
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_i2c_bus {int dummy; } ;
struct i2c_msg {int flags; int addr; int len; int buf; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pmac_i2c_bus* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct pmac_i2c_bus*) ;
 int VAR_4 ;
 int FUNC_2 (struct pmac_i2c_bus*,int ) ;
 int FUNC_3 (struct pmac_i2c_bus*,int ) ;
 int FUNC_4 (struct pmac_i2c_bus*,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5( struct i2c_adapter *VAR_5,
     struct i2c_msg *VAR_6,
     int VAR_7)
{
 struct pmac_i2c_bus *VAR_8 = FUNC_0(VAR_5);
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;

 if (VAR_6->flags & VAR_3)
  return -VAR_0;
 VAR_10 = (VAR_6->flags & VAR_1) != 0;
 VAR_11 = (VAR_6->addr << 1) | VAR_10;
 if (VAR_6->flags & VAR_2)
  VAR_11 ^= 1;

 VAR_9 = FUNC_2(VAR_8, 0);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_3(VAR_8, VAR_4);
 if (VAR_9)
  goto bail;
 VAR_9 = FUNC_4(VAR_8, VAR_11, 0, 0, VAR_6->buf, VAR_6->len);
 bail:
 FUNC_1(VAR_8);
 return VAR_9 < 0 ? VAR_9 : 1;
}
