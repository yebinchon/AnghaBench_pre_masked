
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int config; int config_fan; int pwm1_freq; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 struct lm63_data* FUNC_1 (struct i2c_client*) ;
 void* FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_3)
{
 struct lm63_data *VAR_4 = FUNC_1(VAR_3);

 VAR_4->config = FUNC_2(VAR_3, VAR_0);
 VAR_4->config_fan = FUNC_2(VAR_3,
          VAR_1);


 if (VAR_4->config & 0x40) {
  FUNC_0(&VAR_3->dev, "Switching to operational mode\n");
  VAR_4->config &= 0xA7;
  FUNC_3(VAR_3, VAR_0,
       VAR_4->config);
 }


 VAR_4->pwm1_freq = FUNC_2(VAR_3, VAR_2);
 if (VAR_4->pwm1_freq == 0)
  VAR_4->pwm1_freq = 1;


 FUNC_0(&VAR_3->dev, "Alert/tach pin configured for %s\n",
  (VAR_4->config & 0x04) ? "tachometer input" :
  "alert output");
 FUNC_0(&VAR_3->dev, "PWM clock %s kHz, output frequency %u Hz\n",
  (VAR_4->config_fan & 0x08) ? "1.4" : "360",
  ((VAR_4->config_fan & 0x08) ? 700 : 180000) / VAR_4->pwm1_freq);
 FUNC_0(&VAR_3->dev, "PWM output active %s, %s mode\n",
  (VAR_4->config_fan & 0x10) ? "low" : "high",
  (VAR_4->config_fan & 0x20) ? "manual" : "auto");
}
