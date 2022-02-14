
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gpio_direction; unsigned char gpio_data; } ;
struct TYPE_4__ {TYPE_1__ vp_params; } ;
struct camera_data {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct camera_data*,int ,int ,unsigned char) ;

int FUNC_1(struct camera_data *VAR_3, unsigned char VAR_4)
{
 int VAR_5;






 VAR_5 = FUNC_0(VAR_3,
          VAR_1,
          VAR_2,
          255);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_3->params.vp_params.gpio_direction = 255;

 VAR_5 = FUNC_0(VAR_3,
          VAR_0,
          VAR_2,
          VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_3->params.vp_params.gpio_data = VAR_4;

 return 0;
}
