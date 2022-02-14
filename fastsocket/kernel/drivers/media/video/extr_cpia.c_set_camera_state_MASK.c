
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int divisor; scalar_t__ baserate; } ;
struct TYPE_4__ {TYPE_1__ sensorFps; } ;
struct cam_data {int cmd_queue; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct cam_data*) ;
 int FUNC_1 (struct cam_data*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cam_data*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cam_data *VAR_17)
{
 VAR_17->cmd_queue = VAR_3 |
    VAR_5 |
    VAR_2 |
    VAR_9 |
    VAR_12 |
    VAR_6 |
    VAR_4 |
    VAR_7 |
    VAR_1 |
    VAR_10 |
    VAR_0 |
    VAR_8 |
    VAR_11;

 FUNC_1(VAR_17, VAR_13, VAR_14,0,0,0);
 FUNC_0(VAR_17);



 FUNC_2(6*(VAR_17->params.sensorFps.baserate ? 33 : 40) *
          (1 << VAR_17->params.sensorFps.divisor) + 10);

 if(FUNC_4(VAR_16))
  return -VAR_15;

 FUNC_3(VAR_17);

 return 0;
}
