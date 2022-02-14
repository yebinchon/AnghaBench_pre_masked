
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * af_stats_op_buf; } ;
typedef TYPE_1__ vfe_cmd_stats_autofocus_cfg ;
struct msm_adsp_module {int dummy; } ;


 scalar_t__ FUNC_0 (struct msm_adsp_module*,void**,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct msm_adsp_module *VAR_1,
       void *VAR_2, size_t VAR_3)
{
 int VAR_4;
 vfe_cmd_stats_autofocus_cfg *VAR_5 =
  (vfe_cmd_stats_autofocus_cfg *)VAR_2;

 if (VAR_3 != sizeof(vfe_cmd_stats_autofocus_cfg))
  return -1;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  void **VAR_6 = (void **)(&VAR_5->af_stats_op_buf[VAR_4]);
  if (*VAR_6 && FUNC_0(VAR_1, VAR_6, VAR_0))
   return -1;
 }
 return 0;
}
