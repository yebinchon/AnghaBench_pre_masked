
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int* fan_div; int fan_ctl; int* pwm_ctl; int pwm_clk; int update_lock; int uch_config; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (long,int ) ;
 int FUNC_1 (long,int,int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct vt1211_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (char const*,int *,int) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;
 int FUNC_9 (struct vt1211_data*,int ) ;
 int FUNC_10 (struct vt1211_data*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_4, struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct vt1211_data *VAR_8 = FUNC_3(VAR_4);
 struct sensor_device_attribute_2 *VAR_9 =
      FUNC_8(VAR_5);
 int VAR_10 = VAR_9->index;
 int VAR_11 = VAR_9->nr;
 long VAR_12 = FUNC_7(VAR_6, ((void*)0), 10);
 int VAR_13, VAR_14;

 FUNC_5(&VAR_8->update_lock);

 switch (VAR_11) {
 case 129:

  VAR_14 = FUNC_9(VAR_8, VAR_1);
  VAR_8->fan_div[0] = (VAR_14 >> 4) & 3;
  VAR_8->fan_div[1] = (VAR_14 >> 6) & 3;
  VAR_8->fan_ctl = VAR_14 & 0xf;
  VAR_14 = FUNC_9(VAR_8, VAR_3);
  VAR_8->pwm_ctl[0] = VAR_14 & 0xf;
  VAR_8->pwm_ctl[1] = (VAR_14 >> 4) & 0xf;
  switch (VAR_12) {
  case 0:
   VAR_8->pwm_ctl[VAR_10] &= 7;


   if ((VAR_8->pwm_ctl[VAR_10 ^ 1] & 1) == 0) {
    VAR_8->fan_ctl &= 0xe;
   }
   break;
  case 2:
   VAR_8->pwm_ctl[VAR_10] |= 8;
   VAR_8->fan_ctl |= 1;
   break;
  default:
   VAR_7 = -VAR_0;
   FUNC_4(VAR_4, "pwm mode %ld not supported. "
     "Choose one of 0 or 2.\n", VAR_12);
   goto EXIT;
  }
  FUNC_10(VAR_8, VAR_3,
         ((VAR_8->pwm_ctl[1] << 4) |
    VAR_8->pwm_ctl[0]));
  FUNC_10(VAR_8, VAR_1,
         ((VAR_8->fan_div[1] << 6) |
          (VAR_8->fan_div[0] << 4) |
    VAR_8->fan_ctl));
  break;
 case 128:
  VAR_12 = 135000 / FUNC_1(VAR_12, 135000 >> 7, 135000);

  VAR_13 = 0;
  for (VAR_12 >>= 1; VAR_12 > 0; VAR_12 >>= 1) {
   VAR_13++;
  }

  VAR_14 = FUNC_9(VAR_8, VAR_2);
  VAR_8->pwm_clk = (VAR_14 & 0xf8) | VAR_13;
  FUNC_10(VAR_8, VAR_2, VAR_8->pwm_clk);
  break;
 case 130:
  if ((VAR_12 < 1) || (VAR_12 > 7)) {
   VAR_7 = -VAR_0;
   FUNC_4(VAR_4, "temp channel %ld not supported. "
     "Choose a value between 1 and 7.\n", VAR_12);
   goto EXIT;
  }
  if (!FUNC_0(VAR_12 - 1, VAR_8->uch_config)) {
   VAR_7 = -VAR_0;
   FUNC_4(VAR_4, "temp channel %ld is not available.\n",
     VAR_12);
   goto EXIT;
  }

  VAR_14 = FUNC_9(VAR_8, VAR_3);
  VAR_8->pwm_ctl[0] = VAR_14 & 0xf;
  VAR_8->pwm_ctl[1] = (VAR_14 >> 4) & 0xf;
  VAR_8->pwm_ctl[VAR_10] = (VAR_8->pwm_ctl[VAR_10] & 8) | (VAR_12 - 1);
  FUNC_10(VAR_8, VAR_3,
         ((VAR_8->pwm_ctl[1] << 4) | VAR_8->pwm_ctl[0]));
  break;
 default:
  FUNC_2(VAR_4, "Unknown attr fetch (%d)\n", VAR_11);
 }

EXIT:
 FUNC_6(&VAR_8->update_lock);
 return VAR_7;
}
