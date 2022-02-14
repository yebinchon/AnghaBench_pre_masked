
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int eq_params; int num_bands; } ;
struct audio {TYPE_1__ eq; scalar_t__ eq_enable; } ;
typedef int cmd ;
struct TYPE_7__ {int command_type; int comman_cfg; } ;
struct TYPE_8__ {int eq_flag; int eq_params; int num_bands; TYPE_2__ common; } ;
typedef TYPE_3__ audpp_cmd_cfg_object_params_eq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct audio *VAR_4)
{
 audpp_cmd_cfg_object_params_eq VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.common.comman_cfg = VAR_0;
 VAR_5.common.command_type = VAR_1;

 if (VAR_4->eq_enable) {
  VAR_5.eq_flag = VAR_3;
  VAR_5.num_bands = VAR_4->eq.num_bands;
  FUNC_1(&VAR_5.eq_params, VAR_4->eq.eq_params,
         sizeof(VAR_4->eq.eq_params));
 } else {
  VAR_5.eq_flag = VAR_2;
 }
 return FUNC_0(&VAR_5, sizeof(VAR_5));
}
