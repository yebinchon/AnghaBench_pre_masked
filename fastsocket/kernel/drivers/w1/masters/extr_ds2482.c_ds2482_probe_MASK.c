
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct ds2482_data {int w1_count; TYPE_1__* w1_ch; int access_lock; struct i2c_client* client; } ;
struct TYPE_5__ {int reset_bus; int triplet; int touch_bit; int write_byte; int read_byte; TYPE_1__* data; } ;
struct TYPE_4__ {int channel; TYPE_2__ w1_bm; struct ds2482_data* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (struct ds2482_data*,int ) ;
 int FUNC_2 (struct ds2482_data*,int ,int) ;
 scalar_t__ FUNC_3 (struct ds2482_data*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct i2c_client*,struct ds2482_data*) ;
 int FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct ds2482_data*) ;
 struct ds2482_data* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_14,
   const struct i2c_device_id *VAR_15)
{
 struct ds2482_data *VAR_16;
 int VAR_17 = -VAR_4;
 int VAR_18;
 int VAR_19;

 if (!FUNC_4(VAR_14->adapter,
         VAR_8 |
         VAR_7))
  return -VAR_4;

 if (!(VAR_16 = FUNC_8(sizeof(struct ds2482_data), VAR_6))) {
  VAR_17 = -VAR_5;
  goto exit;
 }

 VAR_16->client = VAR_14;
 FUNC_5(VAR_14, VAR_16);


 if (FUNC_1(VAR_16, VAR_0) < 0) {
  FUNC_0(&VAR_14->dev, "DS2482 reset failed.\n");
  goto exit_free;
 }


 FUNC_10(525);


 VAR_18 = FUNC_6(VAR_14);
 if (VAR_18 != (VAR_2 | VAR_3)) {
  FUNC_0(&VAR_14->dev, "DS2482 reset status "
    "0x%02X - not a DS2482\n", VAR_18);
  goto exit_free;
 }


 VAR_16->w1_count = 1;
 if (FUNC_3(VAR_16, 7) == 0)
  VAR_16->w1_count = 8;


 FUNC_2(VAR_16, VAR_1, 0xF0);

 FUNC_9(&VAR_16->access_lock);


 for (VAR_19 = 0; VAR_19 < VAR_16->w1_count; VAR_19++) {
  VAR_16->w1_ch[VAR_19].pdev = VAR_16;
  VAR_16->w1_ch[VAR_19].channel = VAR_19;


  VAR_16->w1_ch[VAR_19].w1_bm.data = &VAR_16->w1_ch[VAR_19];
  VAR_16->w1_ch[VAR_19].w1_bm.read_byte = VAR_9;
  VAR_16->w1_ch[VAR_19].w1_bm.write_byte = VAR_13;
  VAR_16->w1_ch[VAR_19].w1_bm.touch_bit = VAR_11;
  VAR_16->w1_ch[VAR_19].w1_bm.triplet = VAR_12;
  VAR_16->w1_ch[VAR_19].w1_bm.reset_bus = VAR_10;

  VAR_17 = FUNC_11(&VAR_16->w1_ch[VAR_19].w1_bm);
  if (VAR_17) {
   VAR_16->w1_ch[VAR_19].pdev = ((void*)0);
   goto exit_w1_remove;
  }
 }

 return 0;

exit_w1_remove:
 for (VAR_19 = 0; VAR_19 < VAR_16->w1_count; VAR_19++) {
  if (VAR_16->w1_ch[VAR_19].pdev != ((void*)0))
   FUNC_12(&VAR_16->w1_ch[VAR_19].w1_bm);
 }
exit_free:
 FUNC_7(VAR_16);
exit:
 return VAR_17;
}
