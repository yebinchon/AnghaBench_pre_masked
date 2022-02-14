
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int saturation; int contrast; int brightness; } ;
struct TYPE_4__ {TYPE_1__ color_params; } ;
struct camera_data {TYPE_2__ params; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct camera_data*,int ) ;
 int FUNC_2 (struct camera_data*,int ) ;
 int FUNC_3 (struct camera_data*,int ) ;

void FUNC_4(struct camera_data *VAR_0)
{
 FUNC_0("Setting color params\n");
 FUNC_1(VAR_0, VAR_0->params.color_params.brightness);
 FUNC_2(VAR_0, VAR_0->params.color_params.contrast);
 FUNC_3(VAR_0, VAR_0->params.color_params.saturation);
}
