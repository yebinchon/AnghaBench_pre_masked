
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int callback; } ;
struct fw_transaction {int node_id; int tlabel; TYPE_2__ packet; int link; void* callback_data; int (* callback ) (struct fw_card*,int ,int *,int ,void*) ;} ;
struct fw_card {int current_tlabel; unsigned long long tlabel_mask; TYPE_1__* driver; int lock; int transaction_list; int node_id; int flush_timer; } ;
typedef int (* fw_transaction_callback_t ) (struct fw_card*,int ,int *,int ,void*) ;
struct TYPE_4__ {int (* send_request ) (struct fw_card*,TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int,int,int,int ,int,int,unsigned long long,void*,size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct fw_card*,TYPE_2__*) ;
 int VAR_3 ;

void FUNC_7(struct fw_card *VAR_4, struct fw_transaction *VAR_5, int VAR_6,
       int VAR_7, int VAR_8, int VAR_9,
       unsigned long long VAR_10, void *VAR_11, size_t VAR_12,
       fw_transaction_callback_t VAR_13, void *VAR_14)
{
 unsigned long VAR_15;
 int VAR_16;






 FUNC_3(&VAR_4->flush_timer, VAR_2 + FUNC_0(VAR_0, 10));






 FUNC_4(&VAR_4->lock, VAR_15);

 VAR_16 = VAR_4->current_tlabel;
 if (VAR_4->tlabel_mask & (1ULL << VAR_16)) {
  FUNC_5(&VAR_4->lock, VAR_15);
  VAR_13(VAR_4, VAR_1, ((void*)0), 0, VAR_14);
  return;
 }

 VAR_4->current_tlabel = (VAR_4->current_tlabel + 1) & 0x3f;
 VAR_4->tlabel_mask |= (1ULL << VAR_16);

 VAR_5->node_id = VAR_7;
 VAR_5->tlabel = VAR_16;
 VAR_5->callback = VAR_13;
 VAR_5->callback_data = VAR_14;

 FUNC_1(&VAR_5->packet, VAR_6, VAR_5->tlabel,
   VAR_7, VAR_4->node_id, VAR_8,
   VAR_9, VAR_10, VAR_11, VAR_12);
 VAR_5->packet.callback = VAR_3;

 FUNC_2(&VAR_5->link, &VAR_4->transaction_list);

 FUNC_5(&VAR_4->lock, VAR_15);

 VAR_4->driver->send_request(VAR_4, &VAR_5->packet);
}
