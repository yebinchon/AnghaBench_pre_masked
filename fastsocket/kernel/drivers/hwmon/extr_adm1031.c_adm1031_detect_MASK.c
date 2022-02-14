
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_5, int VAR_6,
     struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_5->adapter;
 const char *VAR_9 = "";

 if (!FUNC_0(VAR_8, VAR_1))
  return -VAR_0;

 if (VAR_6 < 0) {
  int VAR_10, VAR_11;
  VAR_10 = FUNC_1(VAR_5, 0x3d);
  VAR_11 = FUNC_1(VAR_5, 0x3e);

  if (!((VAR_10 == 0x31 || VAR_10 == 0x30) && VAR_11 == 0x41))
   return -VAR_0;
  VAR_6 = (VAR_10 == 0x30) ? VAR_3 : VAR_4;
 }

 if (VAR_6 <= 0)
  VAR_6 = VAR_4;



 if (VAR_6 == VAR_3) {
  VAR_9 = "adm1030";
 } else if (VAR_6 == VAR_4) {
  VAR_9 = "adm1031";
 }
 FUNC_2(VAR_7->type, VAR_9, VAR_2);

 return 0;
}
