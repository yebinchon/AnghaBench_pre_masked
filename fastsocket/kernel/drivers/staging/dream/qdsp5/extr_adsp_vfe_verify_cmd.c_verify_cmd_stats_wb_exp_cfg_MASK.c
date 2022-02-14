
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * wb_exp_stats_op_buf; } ;
typedef TYPE_1__ vfe_cmd_stats_wb_exp_cfg ;
struct msm_adsp_module {int dummy; } ;


 scalar_t__ FUNC_0 (struct msm_adsp_module*,void**,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct msm_adsp_module *VAR_1,
           void *VAR_2, size_t VAR_3)
{
 vfe_cmd_stats_wb_exp_cfg *VAR_4 =
  (vfe_cmd_stats_wb_exp_cfg *)VAR_2;
 int VAR_5;

 if (VAR_3 != sizeof(vfe_cmd_stats_wb_exp_cfg))
  return -1;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  void **VAR_6 = (void **)(&VAR_4->wb_exp_stats_op_buf[VAR_5]);
  if (*VAR_6 && FUNC_0(VAR_1, VAR_6, VAR_0))
   return -1;
 }
 return 0;
}
