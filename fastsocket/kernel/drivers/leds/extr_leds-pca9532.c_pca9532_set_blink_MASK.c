
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9532_led {int work; struct i2c_client* client; } ;
struct led_classdev {int brightness; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct pca9532_led* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct i2c_client*,int ,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct led_classdev *VAR_1,
 unsigned long *VAR_2, unsigned long *VAR_3)
{
 struct pca9532_led *VAR_4 = FUNC_0(VAR_1);
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;
 int VAR_7 = 0;

 if (*VAR_2 == 0 && *VAR_3 == 0) {

  *VAR_2 = 1000;
  *VAR_3 = 1000;
 }
 if (*VAR_2 != *VAR_3 || *VAR_2 > 1690 || *VAR_2 < 6)
  return -VAR_0;


 VAR_6 = (*VAR_2 * 152-1)/1000;
 VAR_7 = FUNC_1(VAR_5, 0, VAR_6, VAR_1->brightness);
 if (VAR_7)
  return VAR_7;
 FUNC_2(&VAR_4->work);
 return 0;
}
