
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct page {int dummy; } ;
struct TYPE_10__ {int write_ptr; int read_ptr; } ;
struct iwl_txq {int lock; int * tfds; TYPE_2__* entries; TYPE_5__ q; } ;
struct iwl_trans_pcie {size_t cmd_queue; int wait_command_queue; int status; int rx_page_order; struct iwl_txq* txq; } ;
struct iwl_trans {int dummy; } ;
struct TYPE_6__ {int sequence; } ;
struct iwl_rx_packet {TYPE_1__ hdr; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct TYPE_9__ {int cmd; } ;
struct iwl_device_cmd {TYPE_4__ hdr; } ;
struct iwl_cmd_meta {int flags; TYPE_3__* source; } ;
struct TYPE_8__ {unsigned long _rx_page_addr; int handler_status; int _rx_page_order; struct iwl_rx_packet* resp_pkt; } ;
struct TYPE_7__ {struct iwl_cmd_meta meta; struct iwl_device_cmd* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,char*,int ) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int,char*,int,int,int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (struct iwl_trans_pcie*,int ) ;
 int FUNC_9 (struct iwl_trans*,int,int) ;
 int FUNC_10 (struct iwl_trans*,struct iwl_cmd_meta*,int *) ;
 int FUNC_11 (struct iwl_trans*,struct iwl_rx_packet*,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct page*) ;
 struct iwl_rx_packet* FUNC_14 (struct iwl_rx_cmd_buffer*) ;
 struct page* FUNC_15 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int *) ;

void FUNC_20(struct iwl_trans *VAR_3,
       struct iwl_rx_cmd_buffer *VAR_4, int VAR_5)
{
 struct iwl_rx_packet *VAR_6 = FUNC_14(VAR_4);
 u16 VAR_7 = FUNC_12(VAR_6->hdr.sequence);
 int VAR_8 = FUNC_4(VAR_7);
 int VAR_9 = FUNC_3(VAR_7);
 int VAR_10;
 struct iwl_device_cmd *VAR_11;
 struct iwl_cmd_meta *VAR_12;
 struct iwl_trans_pcie *VAR_13 = FUNC_1(VAR_3);
 struct iwl_txq *VAR_14 = &VAR_13->txq[VAR_13->cmd_queue];




 if (FUNC_5(VAR_8 != VAR_13->cmd_queue,
   "wrong command queue %d (should be %d), sequence 0x%X readp=%d writep=%d\n",
   VAR_8, VAR_13->cmd_queue, VAR_7,
   VAR_13->txq[VAR_13->cmd_queue].q.read_ptr,
   VAR_13->txq[VAR_13->cmd_queue].q.write_ptr)) {
  FUNC_11(VAR_3, VAR_6, 32);
  return;
 }

 FUNC_16(&VAR_14->lock);

 VAR_10 = FUNC_7(&VAR_14->q, VAR_9);
 VAR_11 = VAR_14->entries[VAR_10].cmd;
 VAR_12 = &VAR_14->entries[VAR_10].meta;

 FUNC_10(VAR_3, VAR_12, &VAR_14->tfds[VAR_9]);


 if (VAR_12->flags & VAR_1) {
  struct page *VAR_15 = FUNC_15(VAR_4);

  VAR_12->source->resp_pkt = VAR_6;
  VAR_12->source->_rx_page_addr = (unsigned long)FUNC_13(VAR_15);
  VAR_12->source->_rx_page_order = VAR_13->rx_page_order;
  VAR_12->source->handler_status = VAR_5;
 }

 FUNC_9(VAR_3, VAR_8, VAR_9);

 if (!(VAR_12->flags & VAR_0)) {
  if (!FUNC_18(VAR_2, &VAR_13->status)) {
   FUNC_2(VAR_3,
     "HCMD_ACTIVE already clear for command %s\n",
     FUNC_8(VAR_13, VAR_11->hdr.cmd));
  }
  FUNC_6(VAR_2, &VAR_13->status);
  FUNC_0(VAR_3, "Clearing HCMD_ACTIVE for command %s\n",
          FUNC_8(VAR_13, VAR_11->hdr.cmd));
  FUNC_19(&VAR_13->wait_command_queue);
 }

 VAR_12->flags = 0;

 FUNC_17(&VAR_14->lock);
}
