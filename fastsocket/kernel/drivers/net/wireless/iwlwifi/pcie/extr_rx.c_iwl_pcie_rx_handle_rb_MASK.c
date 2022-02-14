
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iwl_txq {TYPE_2__* entries; int q; } ;
struct iwl_rxq {int lock; int rx_used; int free_count; int rx_free; } ;
struct iwl_trans_pcie {size_t cmd_queue; int rx_page_order; int n_no_reclaim_cmds; int * no_reclaim_cmds; struct iwl_txq* txq; struct iwl_rxq rxq; } ;
struct iwl_trans {int dev; int op_mode; } ;
struct TYPE_3__ {int sequence; int cmd; } ;
struct iwl_rx_packet {scalar_t__ len_n_flags; TYPE_1__ hdr; } ;
struct iwl_rx_mem_buffer {int list; int * page; int page_dma; } ;
struct iwl_rx_cmd_buffer {int _offset; int _rx_page_order; int _page_stolen; int truesize; int * _page; } ;
struct iwl_device_cmd {int dummy; } ;
struct iwl_cmd_header {int dummy; } ;
struct TYPE_4__ {int * free_buf; struct iwl_device_cmd* cmd; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_trans*,char*,int,int ,int ) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int ,int,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (struct iwl_trans_pcie*,int ) ;
 int FUNC_13 (int ,struct iwl_rx_cmd_buffer*,struct iwl_device_cmd*) ;
 int FUNC_14 (struct iwl_trans*,struct iwl_rx_cmd_buffer*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *,int *) ;
 struct iwl_rx_packet* FUNC_19 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int ,struct iwl_trans*,struct iwl_rx_packet*,int) ;
 int FUNC_23 (int ,struct iwl_trans*,struct iwl_rx_packet*,int) ;

__attribute__((used)) static void FUNC_24(struct iwl_trans *VAR_6,
    struct iwl_rx_mem_buffer *VAR_7)
{
 struct iwl_trans_pcie *VAR_8 = FUNC_2(VAR_6);
 struct iwl_rxq *VAR_9 = &VAR_8->rxq;
 struct iwl_txq *VAR_10 = &VAR_8->txq[VAR_8->cmd_queue];
 unsigned long VAR_11;
 bool VAR_12 = 0;
 int VAR_13 = VAR_4 << VAR_8->rx_page_order;
 u32 VAR_14 = 0;

 if (FUNC_5(!VAR_7))
  return;

 FUNC_10(VAR_6->dev, VAR_7->page_dma, VAR_13, VAR_0);

 while (VAR_14 + sizeof(u32) + sizeof(struct iwl_cmd_header) < VAR_13) {
  struct iwl_rx_packet *VAR_15;
  struct iwl_device_cmd *VAR_16;
  u16 VAR_17;
  bool VAR_18;
  int VAR_19, VAR_20, VAR_21, VAR_22;
  struct iwl_rx_cmd_buffer VAR_23 = {
   ._offset = VAR_14,
   ._rx_page_order = VAR_8->rx_page_order,
   ._page = VAR_7->page,
   ._page_stolen = 0,
   .truesize = VAR_13,
  };

  VAR_15 = FUNC_19(&VAR_23);

  if (VAR_15->len_n_flags == FUNC_7(VAR_2))
   break;

  FUNC_1(VAR_6, "cmd at offset %d: %s (0x%.2x)\n",
   VAR_23._offset, FUNC_12(VAR_8, VAR_15->hdr.cmd),
   VAR_15->hdr.cmd);

  VAR_22 = FUNC_17(VAR_15->len_n_flags) & VAR_3;
  VAR_22 += sizeof(u32);
  FUNC_22(VAR_6->dev, VAR_6, VAR_15, VAR_22);
  FUNC_23(VAR_6->dev, VAR_6, VAR_15, VAR_22);







  VAR_18 = !(VAR_15->hdr.sequence & VAR_5);
  if (VAR_18) {
   int VAR_24;

   for (VAR_24 = 0; VAR_24 < VAR_8->n_no_reclaim_cmds; VAR_24++) {
    if (VAR_8->no_reclaim_cmds[VAR_24] ==
       VAR_15->hdr.cmd) {
     VAR_18 = 0;
     break;
    }
   }
  }

  VAR_17 = FUNC_16(VAR_15->hdr.sequence);
  VAR_19 = FUNC_4(VAR_17);
  VAR_20 = FUNC_11(&VAR_10->q, VAR_19);

  if (VAR_18)
   VAR_16 = VAR_10->entries[VAR_20].cmd;
  else
   VAR_16 = ((void*)0);

  VAR_21 = FUNC_13(VAR_6->op_mode, &VAR_23, VAR_16);

  if (VAR_18) {
   FUNC_15(VAR_10->entries[VAR_20].free_buf);
   VAR_10->entries[VAR_20].free_buf = ((void*)0);
  }






  if (VAR_18) {




   if (!VAR_23._page_stolen)
    FUNC_14(VAR_6, &VAR_23, VAR_21);
   else
    FUNC_3(VAR_6, "Claim null rxb?\n");
  }

  VAR_12 |= VAR_23._page_stolen;
  VAR_14 += FUNC_0(VAR_22, VAR_1);
 }


 if (VAR_12) {
  FUNC_6(VAR_7->page, VAR_8->rx_page_order);
  VAR_7->page = ((void*)0);
 }




 FUNC_20(&VAR_9->lock, VAR_11);
 if (VAR_7->page != ((void*)0)) {
  VAR_7->page_dma =
   FUNC_8(VAR_6->dev, VAR_7->page, 0,
         VAR_4 << VAR_8->rx_page_order,
         VAR_0);
  if (FUNC_9(VAR_6->dev, VAR_7->page_dma)) {





   FUNC_6(VAR_7->page, VAR_8->rx_page_order);
   VAR_7->page = ((void*)0);
   FUNC_18(&VAR_7->list, &VAR_9->rx_used);
  } else {
   FUNC_18(&VAR_7->list, &VAR_9->rx_free);
   VAR_9->free_count++;
  }
 } else
  FUNC_18(&VAR_7->list, &VAR_9->rx_used);
 FUNC_21(&VAR_9->lock, VAR_11);
}
