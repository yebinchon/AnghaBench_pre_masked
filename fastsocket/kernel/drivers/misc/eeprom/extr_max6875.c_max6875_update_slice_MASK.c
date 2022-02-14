
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max6875_data {int* data; int valid; int update_lock; int * last_updated; } ;
struct i2c_client {int adapter; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct max6875_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ,int,int*) ;
 scalar_t__ FUNC_6 (struct i2c_client*,int,int) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct i2c_client *VAR_7, int VAR_8)
{
 struct max6875_data *VAR_9 = FUNC_3(VAR_7);
 int VAR_10, VAR_11, VAR_12;
 u8 *VAR_13;

 if (VAR_8 >= VAR_5)
  return;

 FUNC_7(&VAR_9->update_lock);

 VAR_13 = &VAR_9->data[VAR_8 << VAR_2];

 if (!(VAR_9->valid & (1 << VAR_8)) ||
     FUNC_9(VAR_6, VAR_9->last_updated[VAR_8])) {

  FUNC_0(&VAR_7->dev, "Starting update of slice %u\n", VAR_8);

  VAR_9->valid &= ~(1 << VAR_8);

  VAR_12 = VAR_4 + (VAR_8 << VAR_2);


  if (FUNC_6(VAR_7, VAR_12 >> 8, VAR_12 & 0xFF)) {
   FUNC_1(&VAR_7->dev, "address set failed\n");
   goto exit_up;
  }

  if (FUNC_2(VAR_7->adapter,
         VAR_0)) {
   if (FUNC_5(VAR_7,
         VAR_1,
         VAR_3,
         VAR_13) != VAR_3) {
    goto exit_up;
   }
  } else {
   for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
    VAR_11 = FUNC_4(VAR_7);
    if (VAR_11 < 0) {
     goto exit_up;
    }
    VAR_13[VAR_10] = VAR_11;
   }
  }
  VAR_9->last_updated[VAR_8] = VAR_6;
  VAR_9->valid |= (1 << VAR_8);
 }
exit_up:
 FUNC_8(&VAR_9->update_lock);
}
