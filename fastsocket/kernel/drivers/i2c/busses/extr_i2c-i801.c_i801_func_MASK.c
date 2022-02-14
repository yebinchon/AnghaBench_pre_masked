
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i801_priv {int features; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct i801_priv* FUNC_0 (struct i2c_adapter*) ;

__attribute__((used)) static u32 FUNC_1(struct i2c_adapter *VAR_10)
{
 struct i801_priv *VAR_11 = FUNC_0(VAR_10);

 return VAR_6 | VAR_3 |
        VAR_4 | VAR_8 |
        VAR_2 | VAR_9 |
        ((VAR_11->features & VAR_1) ? VAR_5 : 0) |
        ((VAR_11->features & VAR_0) ?
  VAR_7 : 0);
}
