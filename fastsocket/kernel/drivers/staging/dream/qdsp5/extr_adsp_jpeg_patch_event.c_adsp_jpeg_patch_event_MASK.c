
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_adsp_module {int dummy; } ;
struct TYPE_3__ {scalar_t__ msg16; } ;
struct adsp_event {scalar_t__ msg_id; TYPE_1__ data; } ;
struct TYPE_4__ {int op_buf_addr; } ;
typedef TYPE_2__ jpeg_msg_enc_op_produced ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct msm_adsp_module*,void**) ;

int FUNC_1(struct msm_adsp_module *VAR_1,
   struct adsp_event *VAR_2)
{
 if (VAR_2->msg_id == VAR_0) {
  jpeg_msg_enc_op_produced *VAR_3 = (jpeg_msg_enc_op_produced *)VAR_2->data.msg16;
  return FUNC_0(VAR_1, (void **)&VAR_3->op_buf_addr);
 }

 return 0;
}
