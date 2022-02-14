
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int iir_params; int num_bands; } ;
struct audio {TYPE_1__ iir; scalar_t__ rx_iir_enable; } ;
typedef int cmd ;
struct TYPE_7__ {int command_type; int comman_cfg; } ;
struct TYPE_8__ {int active_flag; int iir_params; int num_bands; TYPE_2__ common; } ;
typedef TYPE_3__ audpp_cmd_cfg_object_params_rx_iir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct audio *VAR_4)
{
 audpp_cmd_cfg_object_params_rx_iir VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.common.comman_cfg = VAR_0;
 VAR_5.common.command_type = VAR_3;

 if (VAR_4->rx_iir_enable) {
  VAR_5.active_flag = VAR_2;
  VAR_5.num_bands = VAR_4->iir.num_bands;
  FUNC_1(&VAR_5.iir_params, VAR_4->iir.iir_params,
         sizeof(VAR_4->iir.iir_params));
 } else {
  VAR_5.active_flag = VAR_1;
 }

 return FUNC_0(&VAR_5, sizeof(VAR_5));
}
