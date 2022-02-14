
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int op1_buf_cbcr_addr; int op1_buf_y_addr; } ;
typedef TYPE_1__ vfe_cmd_op1_ack ;
struct msm_adsp_module {int dummy; } ;


 scalar_t__ FUNC_0 (struct msm_adsp_module*,void**,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct msm_adsp_module *VAR_2,
        void *VAR_3, size_t VAR_4)
{
 vfe_cmd_op1_ack *VAR_5 = (vfe_cmd_op1_ack *)VAR_3;
 void **VAR_6 = (void **)&VAR_5->op1_buf_y_addr;
 void **VAR_7 = (void **)(&VAR_5->op1_buf_cbcr_addr);

 if (VAR_4 != sizeof(vfe_cmd_op1_ack))
  return -1;
 if ((*VAR_6 && FUNC_0(VAR_2, VAR_6, VAR_1)) ||
     (*VAR_7 && FUNC_0(VAR_2, VAR_7, VAR_0)))
  return -1;
 return 0;
}
