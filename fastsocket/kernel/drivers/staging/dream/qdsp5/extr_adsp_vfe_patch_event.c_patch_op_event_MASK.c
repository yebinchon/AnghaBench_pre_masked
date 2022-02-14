
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int op1_buf_cbcr_addr; int op1_buf_y_addr; } ;
typedef TYPE_2__ vfe_msg_op1 ;
struct msm_adsp_module {int dummy; } ;
struct TYPE_3__ {scalar_t__ msg16; } ;
struct adsp_event {TYPE_1__ data; } ;


 scalar_t__ FUNC_0 (struct msm_adsp_module*,void**) ;

__attribute__((used)) static int FUNC_1(struct msm_adsp_module *VAR_0,
    struct adsp_event *VAR_1)
{
 vfe_msg_op1 *VAR_2 = (vfe_msg_op1 *)VAR_1->data.msg16;
 if (FUNC_0(VAR_0, (void **)&VAR_2->op1_buf_y_addr) ||
     FUNC_0(VAR_0, (void **)&VAR_2->op1_buf_cbcr_addr))
  return -1;
 return 0;
}
