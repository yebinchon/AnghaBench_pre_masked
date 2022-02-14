
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u8 ;
typedef int u32 ;
struct i2c_board_info {struct IR_i2c_init_data* platform_data; int type; } ;
struct i2c_adapter {int dummy; } ;
struct IR_i2c_init_data {int name; int type; int internal_get_key_func; int ir_codes; } ;
struct cx18 {int card_name; struct IR_i2c_init_data ir_i2c_init_data; } ;



 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (struct i2c_adapter*,struct i2c_board_info*,unsigned short*) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct cx18 *VAR_5, struct i2c_adapter *VAR_6, u32 VAR_7,
      const char *VAR_8, u8 VAR_9)
{
 struct i2c_board_info VAR_10;
 struct IR_i2c_init_data *VAR_11 = &VAR_5->ir_i2c_init_data;
 unsigned short VAR_12[2] = { VAR_9, VAR_0 };

 FUNC_1(&VAR_10, 0, sizeof(struct i2c_board_info));
 FUNC_2(VAR_10.type, VAR_8, VAR_1);


 switch (VAR_7) {
 case 128:
  VAR_11->ir_codes = VAR_3;
  VAR_11->internal_get_key_func = VAR_2;
  VAR_11->type = VAR_4;
  VAR_11->name = VAR_5->card_name;
  VAR_10.platform_data = VAR_11;
  break;
 }

 return FUNC_0(VAR_6, &VAR_10, VAR_12) == ((void*)0) ?
        -1 : 0;
}
