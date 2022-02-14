
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sensordata; } ;
struct TYPE_4__ {int sensor_reset; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (int *) ;

int FUNC_8(void)
{
 int VAR_3 = -VAR_0;

 FUNC_1(&VAR_2);

 FUNC_6();
 FUNC_5();

 FUNC_2(VAR_1->sensordata->sensor_reset,
   0);
 FUNC_3(VAR_1->sensordata->sensor_reset);

 FUNC_4(VAR_1);

 FUNC_7(&VAR_2);
 FUNC_0("mt9t013_release completed!\n");
 return VAR_3;
}
