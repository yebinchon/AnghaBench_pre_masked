
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct msm_camera_sensor_info {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct msm_camera_sensor_info const*) ;

__attribute__((used)) static int FUNC_6(const struct msm_camera_sensor_info *VAR_8)
{
 uint16_t VAR_9 = 0;
 int VAR_10 = 0;

 FUNC_0("init entry \n");
 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 < 0) {
  FUNC_0("reset failed!\n");
  goto init_probe_fail;
 }

 FUNC_1(5);



 VAR_10 = FUNC_3(VAR_7->addr,
  VAR_2, 0x0501, VAR_6);
 if (VAR_10 < 0)
  goto init_probe_fail;


 VAR_10 = FUNC_3(VAR_7->addr,
  VAR_2, 0x0500, VAR_6);
 if (VAR_10 < 0)
  goto init_probe_fail;

 FUNC_1(5);


 VAR_10 = FUNC_3(VAR_7->addr,
  VAR_4, 0x0ACC, VAR_6);
 if (VAR_10 < 0)
  goto init_probe_fail;

 VAR_10 = FUNC_3(VAR_7->addr,
  VAR_5, 0x0008, VAR_6);
 if (VAR_10 < 0)
  goto init_probe_fail;


 VAR_10 = FUNC_3(VAR_7->addr,
  0x33F4, 0x031D, VAR_6);
 if (VAR_10 < 0)
  goto init_probe_fail;

 FUNC_1(5);



 VAR_10 = FUNC_2(VAR_7->addr,
  VAR_3, &VAR_9, VAR_6);
 if (VAR_10 < 0)
  goto init_probe_fail;

 FUNC_0("mt9d112 model_id = 0x%x\n", VAR_9);


 if (VAR_9 != VAR_1) {
  VAR_10 = -VAR_0;
  goto init_probe_fail;
 }

 VAR_10 = FUNC_4();
 if (VAR_10 < 0)
  goto init_probe_fail;

 return VAR_10;

init_probe_fail:
 return VAR_10;
}
