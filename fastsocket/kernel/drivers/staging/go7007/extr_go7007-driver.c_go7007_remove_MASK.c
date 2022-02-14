
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {scalar_t__ audio_enabled; int video_dev; scalar_t__ i2c_adapter_online; int i2c_adapter; } ;


 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (struct go7007*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct go7007 *VAR_0)
{
 if (VAR_0->i2c_adapter_online) {
  if (FUNC_2(&VAR_0->i2c_adapter) == 0)
   VAR_0->i2c_adapter_online = 0;
  else
   FUNC_3(VAR_0->video_dev,
    "error removing I2C adapter!\n");
 }

 if (VAR_0->audio_enabled)
  FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
