
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device {int dummy; } ;
struct bbc_i2c_bus {int fans; } ;
struct bbc_fan_control {int index; int psupply_fan_on; int cpu_fan_speed; int system_fan_speed; int bp_list; int glob_list; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bbc_i2c_bus*,struct of_device*) ;
 int FUNC_1 (struct bbc_fan_control*) ;
 struct bbc_fan_control* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct bbc_fan_control*) ;

__attribute__((used)) static void FUNC_5(struct bbc_i2c_bus *VAR_4, struct of_device *VAR_5,
      int VAR_6)
{
 struct bbc_fan_control *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return;

 VAR_7->client = FUNC_0(VAR_4, VAR_5);
 if (!VAR_7->client) {
  FUNC_1(VAR_7);
  return;
 }

 VAR_7->index = VAR_6;

 FUNC_3(&VAR_7->glob_list, &VAR_3);
 FUNC_3(&VAR_7->bp_list, &VAR_4->fans);







 VAR_7->psupply_fan_on = 1;
 VAR_7->cpu_fan_speed = (VAR_0 - VAR_1) / 2;
 VAR_7->cpu_fan_speed += VAR_1;
 VAR_7->system_fan_speed = (VAR_0 - VAR_1) / 2;
 VAR_7->system_fan_speed += VAR_1;

 FUNC_4(VAR_7);
}
