
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_algo_bit_data {struct cx18_i2c_algo_callback_data* data; } ;
struct cx18_i2c_algo_callback_data {struct cx18* cx; } ;
struct cx18 {int sd_resetctrl; TYPE_2__* card; } ;
struct TYPE_4__ {TYPE_1__* tuners; } ;
struct TYPE_3__ {scalar_t__ tuner; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,int ) ;

int FUNC_2(void *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct i2c_algo_bit_data *VAR_9 = VAR_5;
 struct cx18_i2c_algo_callback_data *VAR_10 = VAR_9->data;
 struct cx18 *VAR_11 = VAR_10->cx;

 if (VAR_7 != VAR_2 ||
     VAR_11->card->tuners[0].tuner != VAR_1)
  return 0;

 FUNC_0("Resetting XCeive tuner\n");
 return FUNC_1(&VAR_11->sd_resetctrl,
    VAR_3, VAR_4, VAR_0);
}
