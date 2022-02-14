
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_board_info {char* name; struct i2c_board_info* platform_data; int get_key; int ir_codes; int type; } ;
struct em28xx {int model; int i2c_adap; struct i2c_board_info init_data; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,struct i2c_board_info*,unsigned short const*) ;
 int FUNC_1 (struct i2c_board_info*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;

void FUNC_3(struct em28xx *VAR_11)
{



 struct i2c_board_info VAR_12;
 const unsigned short VAR_13[] = {
   0x1f, 0x30, 0x47, VAR_0
 };

 if (VAR_6)
  return;

 FUNC_1(&VAR_12, 0, sizeof(struct i2c_board_info));
 FUNC_1(&VAR_11->init_data, 0, sizeof(VAR_11->init_data));
 FUNC_2(VAR_12.type, "ir_video", VAR_1);


 switch (VAR_11->model) {
 case 132:
 case 128:
  VAR_11->init_data.ir_codes = VAR_2;
  VAR_11->init_data.get_key = VAR_9;
  VAR_11->init_data.name = "i2c IR (EM28XX Terratec)";
  break;
 case 129:
  VAR_11->init_data.ir_codes = VAR_3;
  VAR_11->init_data.get_key = VAR_8;
  VAR_11->init_data.name = "i2c IR (EM28XX Pinnacle PCTV)";
  break;
 case 131:
  VAR_11->init_data.ir_codes = VAR_4;
  VAR_11->init_data.get_key = VAR_7;
  VAR_11->init_data.name = "i2c IR (EM2840 Hauppauge)";
  break;
 case 130:
  VAR_11->init_data.ir_codes = VAR_5;
  VAR_11->init_data.get_key = VAR_10;
  VAR_11->init_data.name = "i2c IR (EM2820 Winfast TV USBII Deluxe)";
  break;
 }

 if (VAR_11->init_data.name)
  VAR_12.platform_data = &VAR_11->init_data;
 FUNC_0(&VAR_11->i2c_adap, &VAR_12, VAR_13);
}
