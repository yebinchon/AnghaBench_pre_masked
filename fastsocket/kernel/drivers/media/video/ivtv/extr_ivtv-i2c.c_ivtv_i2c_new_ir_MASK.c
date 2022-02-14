
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u8 ;
typedef int u32 ;
struct IR_i2c_init_data {char* name; void* type; int ir_codes; int get_key; int internal_get_key_func; } ;
struct i2c_adapter {int dummy; } ;
struct ivtv {int hw_flags; char* card_name; struct IR_i2c_init_data ir_i2c_init_data; struct i2c_adapter i2c_adap; } ;
struct i2c_board_info {int type; struct IR_i2c_init_data* platform_data; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int * FUNC_0 (struct i2c_adapter*,struct i2c_board_info*,unsigned short*) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct ivtv *VAR_15, u32 VAR_16, const char *VAR_17, u8 VAR_18)
{
 struct i2c_board_info VAR_19;
 struct i2c_adapter *VAR_20 = &VAR_15->i2c_adap;
 struct IR_i2c_init_data *VAR_21 = &VAR_15->ir_i2c_init_data;
 unsigned short VAR_22[2] = { VAR_18, VAR_0 };


 if (VAR_16 & VAR_6) {
  if (VAR_15->hw_flags & VAR_6)
   return -1;
  FUNC_1(&VAR_19, 0, sizeof(struct i2c_board_info));
  FUNC_2(VAR_19.type, VAR_17, VAR_1);
  return FUNC_0(VAR_20, &VAR_19, VAR_22)
          == ((void*)0) ? -1 : 0;
 }


 if (VAR_15->hw_flags & VAR_5)
  return -1;


 switch (VAR_16) {
 case 131:
  VAR_21->ir_codes = VAR_7;
  VAR_21->internal_get_key_func =
     VAR_2;
  VAR_21->type = VAR_11;
  VAR_21->name = "AVerMedia AVerTV card";
  break;
 case 130:
 case 129:

  VAR_21->ir_codes = VAR_10;
  VAR_21->internal_get_key_func = VAR_3;
  VAR_21->type = VAR_12;
  VAR_21->name = VAR_15->card_name;
  break;
 case 128:

  VAR_21->ir_codes = VAR_9;
  VAR_21->internal_get_key_func = VAR_4;
  VAR_21->type = VAR_12;
  VAR_21->name = VAR_15->card_name;
  break;
 case 132:
  VAR_21->get_key = VAR_14;
  VAR_21->name = VAR_15->card_name;

  VAR_21->ir_codes = VAR_8;
  VAR_21->type = VAR_13;
  break;
 }

 FUNC_1(&VAR_19, 0, sizeof(struct i2c_board_info));
 VAR_19.platform_data = VAR_21;
 FUNC_2(VAR_19.type, VAR_17, VAR_1);

 return FUNC_0(VAR_20, &VAR_19, VAR_22) == ((void*)0) ?
        -1 : 0;
}
