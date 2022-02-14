
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct radeon_i2c_chan {int dummy; } ;
struct i2c_algo_dp_aux_data {int address; } ;
struct i2c_adapter {struct i2c_algo_dp_aux_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;

 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 int FUNC_2 (struct radeon_i2c_chan*,int*,int,int*,int,int ,int*) ;
 int FUNC_3 (int) ;

int FUNC_4(struct i2c_adapter *VAR_8, int VAR_9,
    u8 VAR_10, u8 *VAR_11)
{
 struct i2c_algo_dp_aux_data *VAR_12 = VAR_8->algo_data;
 struct radeon_i2c_chan *VAR_13 = (struct radeon_i2c_chan *)VAR_8;
 u16 VAR_14 = VAR_12->address;
 u8 VAR_15[5];
 u8 VAR_16[2];
 unsigned VAR_17;
 int VAR_18;
 int VAR_19 = 1;
 int VAR_20;
 u8 VAR_21;


 if (VAR_9 & 129)
  VAR_15[2] = VAR_1 << 4;
 else
  VAR_15[2] = VAR_3 << 4;

 if (!(VAR_9 & VAR_7))
  VAR_15[2] |= VAR_0 << 4;

 VAR_15[0] = VAR_14;
 VAR_15[1] = VAR_14 >> 8;

 switch (VAR_9) {
 case 128:
  VAR_18 = 5;
  VAR_15[3] = VAR_18 << 4;
  VAR_15[4] = VAR_10;
  break;
 case 129:
  VAR_18 = 4;
  VAR_15[3] = VAR_18 << 4;
  break;
 default:
  VAR_18 = 4;
  VAR_15[3] = 3 << 4;
  break;
 }

 for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
  VAR_20 = FUNC_2(VAR_13,
         VAR_15, VAR_18, VAR_16, VAR_19, 0, &VAR_21);
  if (VAR_20 == -VAR_5)
   continue;
  else if (VAR_20 < 0) {
   FUNC_0("aux_ch failed %d\n", VAR_20);
   return VAR_20;
  }

  switch (VAR_21 & VAR_4) {
  case 132:



   break;
  case 130:
   FUNC_0("aux_ch native nack\n");
   return -VAR_6;
  case 131:
   FUNC_0("aux_ch native defer\n");
   FUNC_3(400);
   continue;
  default:
   FUNC_1("aux_ch invalid native reply 0x%02x\n", VAR_21);
   return -VAR_6;
  }

  switch (VAR_21 & VAR_2) {
  case 135:
   if (VAR_9 == 129)
    *VAR_11 = VAR_16[0];
   return VAR_20;
  case 133:
   FUNC_0("aux_i2c nack\n");
   return -VAR_6;
  case 134:
   FUNC_0("aux_i2c defer\n");
   FUNC_3(400);
   break;
  default:
   FUNC_1("aux_i2c invalid reply 0x%02x\n", VAR_21);
   return -VAR_6;
  }
 }

 FUNC_0("aux i2c too many retries, giving up\n");
 return -VAR_6;
}
