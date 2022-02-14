
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int addr; } ;
struct dme1737_data {scalar_t__ type; int config; int config2; int has_fan; int has_pwm; int* pwm_config; int* pwm_acz; int vrm; int in_nominal; struct i2c_client* client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct device*,char*) ;
 struct dme1737_data* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (int,struct dme1737_data*) ;
 void* FUNC_10 (struct dme1737_data*,int ) ;
 int FUNC_11 (struct dme1737_data*,int ,int) ;
 int VAR_5 ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct device *VAR_6)
{
 struct dme1737_data *VAR_7 = FUNC_6(VAR_6);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 u8 VAR_10;


 VAR_7->in_nominal = FUNC_2(VAR_7->type);

 VAR_7->config = FUNC_10(VAR_7, VAR_0);

 if (!(VAR_7->config & 0x01)) {
  if (!VAR_5) {
   FUNC_5(VAR_6, "Device is not monitoring. "
    "Use the force_start load parameter to "
    "override.\n");
   return -VAR_3;
  }


  VAR_7->config |= 0x01;
  FUNC_11(VAR_7, VAR_0, VAR_7->config);
 }

 if (!(VAR_7->config & 0x04)) {
  FUNC_5(VAR_6, "Device is not ready.\n");
  return -VAR_3;
 }


 if (VAR_8) {
  VAR_7->config2 = FUNC_10(VAR_7, VAR_1);

  if (VAR_7->config2 & 0x04) {
   VAR_7->has_fan |= (1 << 2);
  }




  if (VAR_8->addr == 0x2e) {
   VAR_7->has_fan |= (1 << 3);
   VAR_7->has_pwm |= (1 << 2);
  }





  if (FUNC_9(0x2e, VAR_7) &&
      FUNC_9(0x4e, VAR_7)) {
   FUNC_8(VAR_6, "Failed to query Super-IO for optional "
     "features.\n");
  }
 } else {


  VAR_7->has_fan |= (1 << 2);
  VAR_7->has_pwm |= (1 << 2);
 }


 VAR_7->has_fan |= 0x03;
 VAR_7->has_pwm |= 0x03;

 FUNC_7(VAR_6, "Optional features: pwm3=%s, pwm5=%s, pwm6=%s, "
   "fan3=%s, fan4=%s, fan5=%s, fan6=%s.\n",
   (VAR_7->has_pwm & (1 << 2)) ? "yes" : "no",
   (VAR_7->has_pwm & (1 << 4)) ? "yes" : "no",
   (VAR_7->has_pwm & (1 << 5)) ? "yes" : "no",
   (VAR_7->has_fan & (1 << 2)) ? "yes" : "no",
   (VAR_7->has_fan & (1 << 3)) ? "yes" : "no",
   (VAR_7->has_fan & (1 << 4)) ? "yes" : "no",
   (VAR_7->has_fan & (1 << 5)) ? "yes" : "no");

 VAR_10 = FUNC_10(VAR_7, VAR_2);

 if (VAR_8 && VAR_10 != 0xa4) {
  FUNC_8(VAR_6, "Non-standard fan to pwm mapping: "
    "fan1->pwm%d, fan2->pwm%d, fan3->pwm%d, "
    "fan4->pwm%d. Please report to the driver "
    "maintainer.\n",
    (VAR_10 & 0x03) + 1, ((VAR_10 >> 2) & 0x03) + 1,
    ((VAR_10 >> 4) & 0x03) + 1, ((VAR_10 >> 6) & 0x03) + 1);
 } else if (!VAR_8 && VAR_10 != 0x24) {
  FUNC_8(VAR_6, "Non-standard fan to pwm mapping: "
    "fan1->pwm%d, fan2->pwm%d, fan3->pwm%d. "
    "Please report to the driver maintainer.\n",
    (VAR_10 & 0x03) + 1, ((VAR_10 >> 2) & 0x03) + 1,
    ((VAR_10 >> 4) & 0x03) + 1);
 }




 if (!(VAR_7->config & 0x02)) {
  for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
   VAR_7->pwm_config[VAR_9] = FUNC_10(VAR_7,
      FUNC_1(VAR_9));
   if ((VAR_7->has_pwm & (1 << VAR_9)) &&
       (FUNC_3(VAR_7->pwm_config[VAR_9]) == -1)) {
    FUNC_7(VAR_6, "Switching pwm%d to "
      "manual mode.\n", VAR_9 + 1);
    VAR_7->pwm_config[VAR_9] = FUNC_4(1,
       VAR_7->pwm_config[VAR_9]);
    FUNC_11(VAR_7, FUNC_0(VAR_9), 0);
    FUNC_11(VAR_7,
           FUNC_1(VAR_9),
           VAR_7->pwm_config[VAR_9]);
   }
  }
 }


 VAR_7->pwm_acz[0] = 1;
 VAR_7->pwm_acz[1] = 2;
 VAR_7->pwm_acz[2] = 4;


 if (VAR_7->type == VAR_4) {
  VAR_7->vrm = FUNC_12();
 }

 return 0;
}
