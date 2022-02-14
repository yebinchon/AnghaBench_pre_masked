
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ns_params; } ;
struct audio_in {TYPE_1__ ns; scalar_t__ ns_enable; } ;
typedef int cmd ;
struct TYPE_6__ {int cmd_id; int ec_mode_new; int dens_gamma_n; int dens_nfe_block_size; int dens_limit_ns; int dens_limit_ns_d; int wb_gamma_e; int wb_gamma_n; } ;
typedef TYPE_2__ audpreproc_cmd_cfg_ns_params ;


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
 int FUNC_0 (struct audio_in*,TYPE_2__*,int) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct audio_in *VAR_17)
{
 audpreproc_cmd_cfg_ns_params VAR_18;

 FUNC_2(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.cmd_id = VAR_0;

 if (VAR_17->ns_enable) {

  VAR_18.ec_mode_new =
   VAR_12 |
   VAR_6 |
   VAR_16;
  FUNC_1(&VAR_18.dens_gamma_n, &VAR_17->ns.ns_params,
   sizeof(VAR_17->ns.ns_params));
 } else {
  VAR_18.ec_mode_new =
   VAR_9 |
   VAR_2 |
   VAR_11 |
   VAR_1 |
   VAR_8 |
   VAR_5 |
   VAR_15 |
   VAR_13 |
   VAR_3 |
   VAR_7 |
   VAR_10 |
   VAR_4 |
   VAR_14;
 }
 return FUNC_0(VAR_17, &VAR_18, sizeof(VAR_18));
}
