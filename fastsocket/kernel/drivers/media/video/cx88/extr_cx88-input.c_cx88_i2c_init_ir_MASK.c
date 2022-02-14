
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_board_info {char* name; unsigned short addr; struct i2c_board_info* platform_data; int internal_get_key_func; int type; int ir_codes; int get_key; } ;
struct cx88_core {scalar_t__ i2c_rc; int boardnr; int i2c_adap; struct i2c_board_info init_data; } ;



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
 int FUNC_0 (int *,struct i2c_board_info*) ;
 scalar_t__ FUNC_1 (int *,unsigned short const,int ,int ,int ,int ,int *) ;
 int FUNC_2 (struct i2c_board_info*,int ,int) ;
 int FUNC_3 (int ,char*,int ) ;

void FUNC_4(struct cx88_core *VAR_10)
{
 struct i2c_board_info VAR_11;
 const unsigned short VAR_12[] = {
  0x18, 0x6b, 0x71,
  VAR_0
 };
 const unsigned short VAR_13[] = {
  0x18, 0x1a,
  VAR_0
 };
 const unsigned short *VAR_14 = VAR_12;
 const unsigned short *VAR_15;

 if (0 != VAR_10->i2c_rc)
  return;

 FUNC_2(&VAR_11, 0, sizeof(struct i2c_board_info));
 FUNC_3(VAR_11.type, "ir_video", VAR_1);

 switch (VAR_10->boardnr) {
 case 128:
  VAR_14 = VAR_13;
  VAR_10->init_data.name = "cx88 Leadtek PVR 2000 remote";
  VAR_10->init_data.type = VAR_8;
  VAR_10->init_data.get_key = VAR_9;
  VAR_10->init_data.ir_codes = VAR_5;
  break;
 }
 for (VAR_15 = VAR_14; *VAR_15 != VAR_0; VAR_15++) {
  VAR_11.platform_data = ((void*)0);
  FUNC_2(&VAR_10->init_data, 0, sizeof(VAR_10->init_data));

  if (*VAR_15 == 0x71) {

   VAR_10->init_data.name = "cx88 Hauppauge XVR remote";
   VAR_10->init_data.ir_codes = VAR_6;
   VAR_10->init_data.type = VAR_7;
   VAR_10->init_data.internal_get_key_func = VAR_4;

   VAR_11.platform_data = &VAR_10->init_data;
  }
  if (FUNC_1(&VAR_10->i2c_adap, *VAR_15, 0,
     VAR_3, 0,
     VAR_2, ((void*)0)) >= 0) {
   VAR_11.addr = *VAR_15;
   FUNC_0(&VAR_10->i2c_adap, &VAR_11);
   break;
  }
 }
}
