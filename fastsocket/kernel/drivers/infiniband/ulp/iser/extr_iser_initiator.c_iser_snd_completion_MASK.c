
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_tx_desc {scalar_t__ type; int dma_addr; } ;
struct iser_device {int ib_device; } ;
struct iser_conn {int post_send_buf_count; struct iser_device* device; } ;
struct iscsi_task {TYPE_1__* hdr; } ;
struct TYPE_4__ {int desc_cache; } ;
struct TYPE_3__ {scalar_t__ itt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (struct iscsi_task*) ;
 int FUNC_3 (int ,struct iser_tx_desc*) ;

void FUNC_4(struct iser_tx_desc *VAR_6,
   struct iser_conn *VAR_7)
{
 struct iscsi_task *VAR_8;
 struct iser_device *VAR_9 = VAR_7->device;

 if (VAR_6->type == VAR_2) {
  FUNC_1(VAR_9->ib_device, VAR_6->dma_addr,
     VAR_3, VAR_0);
  FUNC_3(VAR_5.desc_cache, VAR_6);
 }

 FUNC_0(&VAR_7->post_send_buf_count);

 if (VAR_6->type == VAR_1) {

  VAR_8 = (void *) ((long)(void *)VAR_6 -
      sizeof(struct iscsi_task));
  if (VAR_8->hdr->itt == VAR_4)
   FUNC_2(VAR_8);
 }
}
