
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smscore_device_t {int dummy; } ;
struct smscore_config_gpio {int outputdriving; int outputslewrate; int inputcharacteristics; int pullupdown; int direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smscore_device_t*,int,struct smscore_config_gpio*) ;
 int FUNC_1 (struct smscore_device_t*,int,int) ;

__attribute__((used)) static int FUNC_2(struct smscore_device_t *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 u32 VAR_11;
 struct smscore_config_gpio VAR_12 = {
  .direction = VAR_1,
  .pullupdown = VAR_5,
  .inputcharacteristics = VAR_2,
  .outputslewrate = VAR_4,
  .outputdriving = VAR_3,
 };

 if (VAR_7 == 0)
  return -VAR_0;

 if (VAR_7 < 0) {

  VAR_11 = VAR_7 * -1;
  VAR_9 = VAR_8 ? 0 : 1;
 } else {
  VAR_11 = VAR_7;
  VAR_9 = VAR_8 ? 1 : 0;
 }

 VAR_10 = FUNC_0(VAR_6, VAR_11, &VAR_12);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_1(VAR_6, VAR_11, VAR_9);
}
