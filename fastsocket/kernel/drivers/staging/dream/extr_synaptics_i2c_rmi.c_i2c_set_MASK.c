
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct synaptics_ts_data {int client; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct synaptics_ts_data *VAR_0, u8 VAR_1, u8 VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0->client, VAR_1, VAR_2);
 if (VAR_4 < 0)
  FUNC_1("i2c_smbus_write_byte_data failed (%s)\n", VAR_3);
 return VAR_4;
}
