
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audpre_cmd_iir_config_type {int active_flag; int cmd_id; int iir_params; int num_bands; } ;
struct TYPE_2__ {int iir_params; int num_bands; } ;
struct audio_in {TYPE_1__ iir; scalar_t__ iir_enable; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct audio_in*,struct audpre_cmd_iir_config_type*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct audpre_cmd_iir_config_type*,int ,int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct audio_in *VAR_3)
{
 struct audpre_cmd_iir_config_type VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cmd_id = VAR_0;

 if (VAR_3->iir_enable) {
  VAR_4.active_flag = VAR_2;
  VAR_4.num_bands = VAR_3->iir.num_bands;
  FUNC_1(&VAR_4.iir_params, &VAR_3->iir.iir_params,
   sizeof(VAR_3->iir.iir_params));
 } else {
  VAR_4.active_flag = VAR_1;
 }




 return FUNC_0(VAR_3, &VAR_4, sizeof(VAR_4));
}
