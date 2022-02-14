
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sensordata; } ;
struct TYPE_4__ {int vcm_pwd; int sensor_reset; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

int FUNC_7(void)
{
 int VAR_3 = -VAR_0;

 FUNC_1(&VAR_2);

 FUNC_5();

 FUNC_2(VAR_1->sensordata->sensor_reset,
  0);
 FUNC_3(VAR_1->sensordata->sensor_reset);

 FUNC_2(VAR_1->sensordata->vcm_pwd, 0);
 FUNC_3(VAR_1->sensordata->vcm_pwd);

 FUNC_4(VAR_1);
 VAR_1 = ((void*)0);

 FUNC_0("mt9p012_release completed\n");

 FUNC_6(&VAR_2);
 return VAR_3;
}
