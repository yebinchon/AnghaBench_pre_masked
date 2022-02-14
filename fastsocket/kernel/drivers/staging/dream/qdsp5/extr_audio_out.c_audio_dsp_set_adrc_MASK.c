
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int adrc_system_delay; int release_const_msw; int release_const_lsw; int attack_const_msw; int attack_const_lsw; int rms_time; int compression_slope; int compression_th; } ;
struct audio {TYPE_2__ adrc; scalar_t__ adrc_enable; } ;
typedef int cmd ;
struct TYPE_6__ {int command_type; int comman_cfg; } ;
struct TYPE_8__ {int adrc_flag; int adrc_system_delay; int release_const_msw; int release_const_lsw; int attack_const_msw; int attack_const_lsw; int rms_time; int compression_slope; int compression_th; TYPE_1__ common; } ;
typedef TYPE_3__ audpp_cmd_cfg_object_params_adrc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct audio *VAR_4)
{
 audpp_cmd_cfg_object_params_adrc VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.common.comman_cfg = VAR_3;
 VAR_5.common.command_type = VAR_0;

 if (VAR_4->adrc_enable) {
  VAR_5.adrc_flag = VAR_2;
  VAR_5.compression_th = VAR_4->adrc.compression_th;
  VAR_5.compression_slope = VAR_4->adrc.compression_slope;
  VAR_5.rms_time = VAR_4->adrc.rms_time;
  VAR_5.attack_const_lsw = VAR_4->adrc.attack_const_lsw;
  VAR_5.attack_const_msw = VAR_4->adrc.attack_const_msw;
  VAR_5.release_const_lsw = VAR_4->adrc.release_const_lsw;
  VAR_5.release_const_msw = VAR_4->adrc.release_const_msw;
  VAR_5.adrc_system_delay = VAR_4->adrc.adrc_system_delay;
 } else {
  VAR_5.adrc_flag = VAR_1;
 }
 return FUNC_0(&VAR_5, sizeof(VAR_5));
}
