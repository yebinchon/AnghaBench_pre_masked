
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct synaptics_ts_data {int client; } ;


 int FUNC_0 (struct synaptics_ts_data*,int,char*) ;
 int FUNC_1 (struct synaptics_ts_data*,int,int,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static int FUNC_6(struct synaptics_ts_data *VAR_0, u32 *VAR_1)
{
 int VAR_2;
 int VAR_3 = 10;

 VAR_2 = FUNC_1(VAR_0, 0xf4, 0x01, "reset device");

 while (VAR_3-- > 0) {
  VAR_2 = FUNC_2(VAR_0->client, 0xe4);
  if (VAR_2 >= 0)
   break;
  FUNC_3(100);
 }
 if (VAR_2 < 0) {
  FUNC_4("i2c_smbus_read_byte_data failed\n");
  return VAR_2;
 }

 *VAR_1 = VAR_2 << 8;
 VAR_2 = FUNC_0(VAR_0, 0xe5, "product minor");
 if (VAR_2 < 0)
  return VAR_2;
 *VAR_1 |= VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0xe3, "property");
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_5("synaptics: version %x, product property %x\n",
  *VAR_1, VAR_2);
 return 0;
}
