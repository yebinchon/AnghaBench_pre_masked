
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int i2c_adap; } ;
struct i2c_client {int dummy; } ;
struct i2c_board_info {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i2c_client* FUNC_0 (int *,struct i2c_board_info*,unsigned short const*) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;

struct i2c_client *FUNC_3(struct ivtv *VAR_2)
{
 struct i2c_board_info VAR_3;
 const unsigned short VAR_4[] = {
  0x1a,
  0x18,
  VAR_0
 };

 FUNC_1(&VAR_3, 0, sizeof(struct i2c_board_info));
 FUNC_2(VAR_3.type, "ir_video", VAR_1);
 return FUNC_0(&VAR_2->i2c_adap, &VAR_3, VAR_4);
}
