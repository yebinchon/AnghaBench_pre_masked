
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wb_exp_stats_op_buf; } ;
typedef TYPE_1__ vfe_cmd_stats_wb_exp_ack ;
struct msm_adsp_module {int dummy; } ;


 scalar_t__ FUNC_0 (struct msm_adsp_module*,void**,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct msm_adsp_module *VAR_1,
           void *VAR_2, size_t VAR_3)
{
 vfe_cmd_stats_wb_exp_ack *VAR_4 =
  (vfe_cmd_stats_wb_exp_ack *)VAR_2;
 void **VAR_5 = (void **)&VAR_4->wb_exp_stats_op_buf;

 if (VAR_3 != sizeof(vfe_cmd_stats_wb_exp_ack))
  return -1;

 if (*VAR_5 && FUNC_0(VAR_1, VAR_5, VAR_0))
  return -1;
 return 0;
}
