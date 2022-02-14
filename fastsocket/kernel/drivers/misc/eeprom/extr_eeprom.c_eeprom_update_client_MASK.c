
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int adapter; int dev; } ;
struct eeprom_data {int valid; int* data; int update_lock; scalar_t__* last_updated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct eeprom_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int,int,int*) ;
 int FUNC_4 (struct i2c_client*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct i2c_client *VAR_3, u8 VAR_4)
{
 struct eeprom_data *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 FUNC_5(&VAR_5->update_lock);

 if (!(VAR_5->valid & (1 << VAR_4)) ||
     FUNC_7(VAR_2, VAR_5->last_updated[VAR_4] + 300 * VAR_0)) {
  FUNC_0(&VAR_3->dev, "Starting eeprom update, slice %u\n", VAR_4);

  if (FUNC_1(VAR_3->adapter, VAR_1)) {
   for (VAR_6 = VAR_4 << 5; VAR_6 < (VAR_4 + 1) << 5; VAR_6 += 32)
    if (FUNC_3(VAR_3, VAR_6,
       32, VAR_5->data + VAR_6)
       != 32)
     goto exit;
  } else {
   for (VAR_6 = VAR_4 << 5; VAR_6 < (VAR_4 + 1) << 5; VAR_6 += 2) {
    int VAR_7 = FUNC_4(VAR_3, VAR_6);
    if (VAR_7 < 0)
     goto exit;
    VAR_5->data[VAR_6] = VAR_7 & 0xff;
    VAR_5->data[VAR_6 + 1] = VAR_7 >> 8;
   }
  }
  VAR_5->last_updated[VAR_4] = VAR_2;
  VAR_5->valid |= (1 << VAR_4);
 }
exit:
 FUNC_6(&VAR_5->update_lock);
}
