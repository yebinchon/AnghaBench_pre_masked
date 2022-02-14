
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_device {int csk_init_act_open; int csk_alloc_cpls; int csk_send_rx_credits; int csk_send_close_req; int csk_send_abort_req; int csk_push_tx_frames; int csk_release_offload_resources; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxgbi_device*,int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (char*,struct cxgbi_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_2(struct cxgbi_device *VAR_10)
{
 int VAR_11;

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 VAR_11 = FUNC_0(VAR_10, VAR_3,
     VAR_2);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10->csk_release_offload_resources = VAR_6;
 VAR_10->csk_push_tx_frames = VAR_5;
 VAR_10->csk_send_abort_req = VAR_7;
 VAR_10->csk_send_close_req = VAR_8;
 VAR_10->csk_send_rx_credits = VAR_9;
 VAR_10->csk_alloc_cpls = VAR_1;
 VAR_10->csk_init_act_open = VAR_4;

 FUNC_1("cdev 0x%p, offload up, added.\n", VAR_10);
 return 0;
}
